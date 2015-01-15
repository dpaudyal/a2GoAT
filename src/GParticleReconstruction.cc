#include "GParticleReconstruction.h"


using namespace std;

GParticleReconstruction::GParticleReconstruction() :
    identified(new Int_t[GTreeRawParticle_MAX]),
    charge(new Int_t[GTreeRawParticle_MAX]),
    hadron(new Int_t[GTreeRawParticle_MAX]),
    doScalerCorrection(kFALSE),
    doTrigger(kFALSE),
    energySum(50),
    multiplicity(1),
    chargedThetaMin(0),
    chargedThetaMax(180),
    chargeIgnorePID(kFALSE),
    chargeIgnoreMWPC0(kFALSE),
    chargeIgnoreMWPC1(kFALSE),
    chargeIgnoreVETO(kFALSE)
{
    timeCutCB[0] = -1000000.0;
    timeCutCB[1] = 1000000.0;
    timeCutTAPS[0] = -1000000.0;
    timeCutTAPS[1] = 1000000.0;
}

GParticleReconstruction::~GParticleReconstruction()
{
}

Bool_t GParticleReconstruction::Trigger()
{
    if(trigger->GetEnergySum() < energySum)
        return kFALSE;
    if(trigger->GetMultiplicity() < multiplicity)
        return kFALSE;
    return kTRUE;
}


Bool_t GParticleReconstruction::Start()
{
    rootinos->CloseForInput();
    photons->CloseForInput();
    electrons->CloseForInput();
    chargedPions->CloseForInput();
    protons->CloseForInput();
    neutrons->CloseForInput();

    if(!TraverseValidEvents())		return kFALSE;

    return kTRUE;
}

Bool_t	GParticleReconstruction::Init()
{		
    GDataChecks::Init();

	cout << endl << "Particle Reconstruction turned ON" << endl;

    char cutFile[256];
    char cutName[256];

    //CB
    // set default reconstruction (none)
    typeCB = ReconstructNone;

    config = ReadConfig("Cut-dE-E-CB-Proton");
    if (strcmp(config.c_str(), "nokey") != 0)
    {
        if(sscanf( config.c_str(), "%s %s\n", cutFile,cutName) == 2)
        {
            typeCB = ReconstructType(ReconstructCutProton | typeCB);
            if(!(cutProtonCB = OpenCutFile(cutFile,cutName)))
            {
                cerr << "Failed to load cut! Terminating..." << endl;
                exit(1);
            }
        }
        else
        {
            cout << "ERROR: Cut-dE-E-CB-Proton set improperly" << endl;
            return kFALSE;
        }
    }

    config = ReadConfig("Cut-dE-E-CB-Pion");
    if (strcmp(config.c_str(), "nokey") != 0)
    {
        if(sscanf( config.c_str(), "%s %s\n", cutFile,cutName) == 2)
        {
            typeCB = ReconstructType(ReconstructCutPion | typeCB);
            if(!(cutPionCB = OpenCutFile(cutFile,cutName)))
            {
                cerr << "Failed to load cut! Terminating..." << endl;
                exit(1);
            }
        }
        else
        {
            cout << "ERROR: Cut-dE-E-CB-Pion set improperly" << endl;
            return kFALSE;
        }
    }

    config = ReadConfig("Cut-dE-E-CB-Electron");
    if (strcmp(config.c_str(), "nokey") != 0)
    {
        if(sscanf( config.c_str(), "%s %s\n", cutFile,cutName) == 2)
        {
            typeCB = ReconstructType(ReconstructCutElectron | typeCB);
            if(!(cutElectronCB = OpenCutFile(cutFile,cutName)))
            {
                cerr << "Failed to load cut! Terminating..." << endl;
                exit(1);
            }
        }
        else
        {
            cout << "ERROR: Cut-dE-E-CB-Electron set improperly" << endl;
            return kFALSE;
        }
    }

    config = ReadConfig("Cut-CB-TOF");
    if (strcmp(config.c_str(), "nokey") != 0)
    {
        if(sscanf( config.c_str(), "%s %s\n", cutFile,cutName) == 2)
        {
            typeCB = ReconstructType(ReconstructTimeOfFlight | typeCB);
            if(!(cutTimeOfFlightCB = OpenCutFile(cutFile,cutName)))
            {
                cerr << "Failed to load cut! Terminating..." << endl;
                exit(1);
            }
        }
        else
        {
            cout << "ERROR: Cut-CB-TOF set improperly" << endl;
            return kFALSE;
        }
    }

    config = ReadConfig("Cut-CB-ClustSize");
    if (strcmp(config.c_str(), "nokey") != 0)
    {
        if(sscanf( config.c_str(), "%s %s\n", cutFile,cutName) == 2)
        {
            typeCB = ReconstructType(ReconstructClusterSize | typeCB);
            if(!(cutClusterSizeCB = OpenCutFile(cutFile,cutName)))
            {
                cerr << "Failed to load cut! Terminating..." << endl;
                exit(1);
            }
        }
        else
        {
            cout << "ERROR: Cut-CB-ClustSize set improperly" << endl;
            return kFALSE;
        }
    }

    // check for optional "all photon" reconstruction
    config = ReadConfig("CB-all-photons");
    if (strcmp(config.c_str(), "nokey") != 0)
    {
        typeCB = ReconstructAllPhotons;
        cout << "Setting all CB particles to photons" << endl;
    }

    // check for optional "all proton" reconstruction
    config = ReadConfig("CB-all-protons");
    if (strcmp(config.c_str(), "nokey") != 0)
    {
        typeCB = ReconstructAllProtons;
        cout << "Setting all CB particles to protons" << endl;
    }

    //TAPS
    // set default reconstruction (none)
    typeTAPS = ReconstructNone;

    config = ReadConfig("Cut-dE-E-TAPS-Proton");
    if (strcmp(config.c_str(), "nokey") != 0)
    {
        if(sscanf( config.c_str(), "%s %s\n", cutFile,cutName) == 2)
        {
            typeTAPS = ReconstructType(ReconstructCutProton | typeTAPS);
            if(!(cutProtonTAPS = OpenCutFile(cutFile,cutName)))
            {
                cerr << "Failed to load cut! Terminating..." << endl;
                exit(1);
            }
        }
        else
        {
            cout << "ERROR: Cut-dE-E-TAPS-Proton set improperly" << endl;
            return kFALSE;
        }
    }

    config = ReadConfig("Cut-dE-E-TAPS-Pion");
    if (strcmp(config.c_str(), "nokey") != 0)
    {
        if(sscanf( config.c_str(), "%s %s\n", cutFile,cutName) == 2)
        {
            typeTAPS = ReconstructType(ReconstructCutPion | typeTAPS);
            if(!(cutPionTAPS = OpenCutFile(cutFile,cutName)))
            {
                cerr << "Failed to load cut! Terminating..." << endl;
                exit(1);
            }
        }
        else
        {
            cout << "ERROR: Cut-dE-E-TAPS-Pion set improperly" << endl;
            return kFALSE;
        }
    }

    config = ReadConfig("Cut-dE-E-TAPS-Electron");
    if (strcmp(config.c_str(), "nokey") != 0)
    {
        if(sscanf( config.c_str(), "%s %s\n", cutFile,cutName) == 2)
        {
            typeTAPS = ReconstructType(ReconstructCutElectron | typeTAPS);
            if(!(cutElectronTAPS  = OpenCutFile(cutFile,cutName)))
            {
                cerr << "Failed to load cut! Terminating..." << endl;
                exit(1);
            }
        }
        else
        {
            cout << "ERROR: Cut-dE-E-TAPS-Electron set improperly" << endl;
            return kFALSE;
        }
    }

    config = ReadConfig("Cut-TAPS-TOF");
    if (strcmp(config.c_str(), "nokey") != 0)
    {
        if(sscanf( config.c_str(), "%s %s\n", cutFile,cutName) == 2)
        {
            typeTAPS = ReconstructType(ReconstructTimeOfFlight | typeTAPS);
            if(!(cutTimeOfFlightTAPS = OpenCutFile(cutFile,cutName)))
            {
                cerr << "Failed to load cut! Terminating..." << endl;
                exit(1);
            }
        }
        else
        {
            cout << "ERROR: Cut-TAPS-TOF set improperly" << endl;
            return kFALSE;
        }
    }

    config = ReadConfig("Cut-TAPS-ClustSize");
    if (strcmp(config.c_str(), "nokey") != 0)
    {
        if(sscanf( config.c_str(), "%s %s\n", cutFile,cutName) == 2)
        {
            typeTAPS = ReconstructType(ReconstructClusterSize | typeTAPS);
            if(!(cutClusterSizeTAPS = OpenCutFile(cutFile,cutName)))
            {
                cerr << "Failed to load cut! Terminating..." << endl;
                exit(1);
            }
        }
        else
        {
            cout << "ERROR: Cut-TAPS-ClustSize set improperly" << endl;
            return kFALSE;
        }
    }

    // check for optional "all photon" reconstruction
    config = ReadConfig("TAPS-all-photons");
    if (strcmp(config.c_str(), "nokey") != 0)
    {
        typeTAPS = ReconstructAllPhotons;
        cout << "Setting all TAPS particles to photons" << endl;
    }

    // check for optional "all proton" reconstruction
    config = ReadConfig("TAPS-all-protons");
    if (strcmp(config.c_str(), "nokey") != 0)
    {
        typeTAPS = ReconstructAllProtons;
        cout << "Setting all TAPS particles to protons" << endl;
    }

    // Option to ignore energy deposit in detectors when determining charge
    config = ReadConfig("charge-ignore-PID");
    if (strcmp(config.c_str(), "nokey") != 0) chargeIgnorePID = kTRUE;

    config = ReadConfig("charge-ignore-MWPC0");
    if (strcmp(config.c_str(), "nokey") != 0) chargeIgnoreMWPC0 = kTRUE;
    
    config = ReadConfig("charge-ignore-MWPC1");
    if (strcmp(config.c_str(), "nokey") != 0) chargeIgnoreMWPC1 = kTRUE;
    
    config = ReadConfig("charge-ignore-VETO");
    if (strcmp(config.c_str(), "nokey") != 0) chargeIgnoreVETO = kTRUE;
    
    
	// Particle timing cuts
    config = ReadConfig("CB-PARTICLE-TIME-CUT");
    if (strcmp(config.c_str(), "nokey") != 0)
    {
        if(sscanf( config.c_str(), "%lf %lf\n", &timeCutCB[0], &timeCutCB[1]) != 2)
        {
            cout << "ERROR: CB-PARTICLE-TIME-CUT set improperly" << endl;
            return kFALSE;
        }
    }

    config = ReadConfig("TAPS-PARTICLE-TIME-CUT");
    if (strcmp(config.c_str(), "nokey") != 0)
    {
        if(sscanf( config.c_str(), "%lf %lf\n", &timeCutTAPS[0], &timeCutTAPS[1]) != 2)
        {
            cout << "ERROR: TAPS-PARTICLE-TIME-CUT set improperly" << endl;
            return kFALSE;
        }
    }
	
	return kTRUE;
}

Bool_t	GParticleReconstruction::ProcessEventWithoutFilling()
{
    if(doTrigger)
    {
        if(!Trigger())
            return kFALSE;
    }

    rootinos->Clear();
    photons->Clear();
    electrons->Clear();
    chargedPions->Clear();
    protons->Clear();
    neutrons->Clear();

    for(Int_t i=0; i<rawParticles->GetNParticles(); i++)
    {
        if(rawParticles->GetApparatus(i) == GTreeRawParticle::APPARATUS_CB)
        {
            if(rawParticles->GetTime(i)<timeCutCB[0] || rawParticles->GetTime(i)>timeCutCB[1])
                return kFALSE;

            identified[i] = PDG_ROOTINO;
            charge[i] = 0;
            hadron[i] = 0;

            if(typeCB & ReconstructAllPhotons)
            {
                identified[i] = pdgDB->GetParticle("gamma")->PdgCode();
                continue;
            }

            if(typeCB & ReconstructAllProtons)
            {
                identified[i] = pdgDB->GetParticle("proton")->PdgCode();
                continue;
            }

            if ((!chargeIgnorePID) && (rawParticles->GetVetoEnergy(i) > 0.0))	charge[i] = 1;
            if ((!chargeIgnoreMWPC0) && (rawParticles->GetMWPC0Energy(i) > 0.0))	charge[i] = 1;
            if ((!chargeIgnoreMWPC1) && (rawParticles->GetMWPC1Energy(i) > 0.0))	charge[i] = 1;

            if(typeCB & ReconstructTimeOfFlight)
            {
                if(cutTimeOfFlightCB->IsInside(rawParticles->GetClusterEnergy(i),rawParticles->GetTime(i)))
                    hadron[i] = 1;
            }

            if(typeCB & ReconstructClusterSize)
            {
                if(cutClusterSizeCB->IsInside(rawParticles->GetClusterEnergy(i),rawParticles->GetClusterSize(i)))
                    hadron[i] = 1;
            }

            if (charge[i] == 0)
            {
                if(hadron[i] == 0) identified[i] = pdgDB->GetParticle("gamma")->PdgCode();
                else identified[i] = pdgDB->GetParticle("neutron")->PdgCode();
                continue;
            }

            if (rawParticles->GetTheta(i) < chargedThetaMin) break; // user rejected theta region
            if (rawParticles->GetTheta(i) > chargedThetaMax) break; // user rejected theta region

            if(hadron[i] == 1)
            {
                identified[i] = pdgDB->GetParticle("proton")->PdgCode();
                continue;
            }

            if(typeCB & ReconstructCutProton)
            {
                if(cutProtonCB->IsInside(rawParticles->GetClusterEnergy(i),rawParticles->GetVetoEnergy(i)))
                    identified[i] = pdgDB->GetParticle("proton")->PdgCode();
            }
            if(typeCB & ReconstructCutPion)
            {
                if(cutPionCB->IsInside(rawParticles->GetClusterEnergy(i),rawParticles->GetVetoEnergy(i)))
                    identified[i] = pdgDB->GetParticle("pi+")->PdgCode();
            }

            if(typeCB & ReconstructCutElectron)
            {
                if(cutElectronCB->IsInside(rawParticles->GetClusterEnergy(i),rawParticles->GetVetoEnergy(i)))
                    identified[i] = pdgDB->GetParticle("e-")->PdgCode();
            }

        }

        if(rawParticles->GetApparatus(i) == GTreeRawParticle::APPARATUS_TAPS)
        {
            if(rawParticles->GetTime(i)<timeCutTAPS[0] || rawParticles->GetTime(i)>timeCutTAPS[1])
                return kFALSE;

            identified[i] = PDG_ROOTINO;
            charge[i] = 0;
            hadron[i] = 0;

            if(typeTAPS & ReconstructAllPhotons)
            {
                identified[i] = pdgDB->GetParticle("gamma")->PdgCode();
                continue;
            }

            if(typeTAPS & ReconstructAllProtons)
            {
                identified[i] = pdgDB->GetParticle("proton")->PdgCode();
                continue;
            }

            if ((!chargeIgnoreVETO) && (rawParticles->GetVetoEnergy(i) > 0.0))	charge[i] = 1;

            if(typeTAPS & ReconstructTimeOfFlight)
            {
                if(cutTimeOfFlightTAPS->IsInside(rawParticles->GetClusterEnergy(i),rawParticles->GetTime(i)))
                    hadron[i] = 1;
            }

            if(typeTAPS & ReconstructClusterSize)
            {
                if(cutClusterSizeTAPS->IsInside(rawParticles->GetClusterEnergy(i),rawParticles->GetClusterSize(i)))
                    hadron[i] = 1;
            }

            if (charge[i] == 0)
            {
                if(hadron[i] == 0) identified[i] = pdgDB->GetParticle("gamma")->PdgCode();
                else identified[i] = pdgDB->GetParticle("neutron")->PdgCode();
                continue;
            }

            if (rawParticles->GetTheta(i) < chargedThetaMin) break; // user rejected theta region
            if (rawParticles->GetTheta(i) > chargedThetaMax) break; // user rejected theta region

            if(hadron[i] == 1)
            {
                identified[i] = pdgDB->GetParticle("proton")->PdgCode();
                continue;
            }

            if(typeTAPS & ReconstructCutProton)
            {
                if(cutProtonTAPS->IsInside(rawParticles->GetClusterEnergy(i),rawParticles->GetVetoEnergy(i)))
                    identified[i] = pdgDB->GetParticle("proton")->PdgCode();
            }
            if(typeTAPS & ReconstructCutPion)
            {
                if(cutPionTAPS->IsInside(rawParticles->GetClusterEnergy(i),rawParticles->GetVetoEnergy(i)))
                    identified[i] = pdgDB->GetParticle("pi+")->PdgCode();
            }

            if(typeTAPS & ReconstructCutElectron)
            {
                if(cutElectronTAPS->IsInside(rawParticles->GetClusterEnergy(i),rawParticles->GetVetoEnergy(i)))
                    identified[i] = pdgDB->GetParticle("e-")->PdgCode();
            }

        }
    }

    for (int i = 0; i < rawParticles->GetNParticles(); i++)
    {
        // Finally add particles which were temporarily identified
        if (identified[i] == pdgDB->GetParticle("proton")->PdgCode())
            protons->AddParticle(rawParticles->GetVector(i, pdgDB->GetParticle("proton")->Mass()*1000), rawParticles->GetApparatus(i), rawParticles->GetVetoEnergy(i), rawParticles->GetMWPC0Energy(i), rawParticles->GetMWPC1Energy(i), rawParticles->GetTime(i), rawParticles->GetClusterSize(i));
        else if (identified[i] == pdgDB->GetParticle("pi+")->PdgCode())
            chargedPions->AddParticle(rawParticles->GetVector(i, pdgDB->GetParticle("pi+")->Mass()*1000), rawParticles->GetApparatus(i), rawParticles->GetVetoEnergy(i), rawParticles->GetMWPC0Energy(i), rawParticles->GetMWPC1Energy(i), rawParticles->GetTime(i), rawParticles->GetClusterSize(i));
        else if (identified[i] == pdgDB->GetParticle("e-")->PdgCode())
            electrons->AddParticle(rawParticles->GetVector(i, pdgDB->GetParticle("e-")->Mass()*1000), rawParticles->GetApparatus(i), rawParticles->GetVetoEnergy(i), rawParticles->GetMWPC0Energy(i), rawParticles->GetMWPC1Energy(i), rawParticles->GetTime(i), rawParticles->GetClusterSize(i));
        else if (identified[i] == pdgDB->GetParticle("neutron")->PdgCode())
            neutrons->AddParticle(rawParticles->GetVector(i, pdgDB->GetParticle("neutron")->Mass()*1000), rawParticles->GetApparatus(i), rawParticles->GetVetoEnergy(i), rawParticles->GetMWPC0Energy(i), rawParticles->GetMWPC1Energy(i), rawParticles->GetTime(i), rawParticles->GetClusterSize(i));
        else if (identified[i] == pdgDB->GetParticle("gamma")->PdgCode())
            photons->AddParticle(rawParticles->GetVector(i), rawParticles->GetApparatus(i), rawParticles->GetVetoEnergy(i), rawParticles->GetMWPC0Energy(i), rawParticles->GetMWPC1Energy(i), rawParticles->GetTime(i), rawParticles->GetClusterSize(i));
        else if (identified[i] == PDG_ROOTINO)
            rootinos->AddParticle(rawParticles->GetVector(i), rawParticles->GetApparatus(i), rawParticles->GetVetoEnergy(i), rawParticles->GetMWPC0Energy(i), rawParticles->GetMWPC1Energy(i), rawParticles->GetTime(i), rawParticles->GetClusterSize(i));
    }

    return kTRUE;
}

void	GParticleReconstruction::ProcessEvent()
{    
    if(!ProcessEventWithoutFilling())   return;

    eventParameters->SetNReconstructed(GetNReconstructed());
    eventParameters->Fill();

    rootinos->Fill();
    photons->Fill();
    electrons->Fill();
    chargedPions->Fill();
    protons->Fill();
    neutrons->Fill();
    FillReadList();
}

/**
 * @brief Load a cut from a ROOT file
 * @param filename The ROOT file to open
 * @param cutname The name of the TCutG object to load
 * @return Pointer to the cut
 * @throw bool false on any error
 */
TCutG*	GParticleReconstruction::OpenCutFile(Char_t* file, Char_t* name)
{
    TCutG *cut;

    TFile cutFile(file, "READ");

    if( !cutFile.IsOpen() ) {
        cerr << "Can't open cut file: " << file << endl;
        throw false;
    }

    // Try to find a TCutG with the name we want
    // GetObject checks the type to be TCutG,
    // see http://root.cern.ch/root/html534/TDirectory.html#TDirectory:GetObject
    cutFile.GetObject(name, cut);

    if( !cut ) {
        cerr << "Could not find a TCutG with the name " << name << " in " << file << endl;
        throw false;
    }

    cutFile.Close();

    cout << "cut file " << file << 	" opened (Cut-name = " << name << ")"<< endl;
    return cut;
}
