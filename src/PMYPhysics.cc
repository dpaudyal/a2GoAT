#include "PMYPhysics.h"

PMYPhysics::PMYPhysics()
{ 

//************************1D Histograms*******************************************************

time 	= new GH1("time", 	"time", 	1400, -700, 700);
time_hel0 	= new GH1("time_hel0", 	"time_hel0", 	1400, -700, 700);
time_hel1 	= new GH1("time_hel1", 	"time_hel1", 	1400, -700, 700);

time_2g 	= new GH1("time_2g",	"time_2g", 	1400, -700, 700);
time_2g_hel0 	= new GH1("time_2g_hel0",	"time_2g_hel0", 	1400, -700, 700);
time_2g_hel1 	= new GH1("time_2g_hel1",	"time_2g_hel1", 	1400, -700, 700);

time_cut 	= new GH1("time_cut", 	"time_cut", 	1400, -700, 700);
time_cut_hel0 	= new GH1("time_cut_hel0", 	"time_cut_hel0", 	1400, -700, 700);
time_cut_hel1 	= new GH1("time_cut_hel1", 	"time_cut_hel1", 	1400, -700, 700);

time_2g_cut = new GH1("time_2g_cut","time_2g_cut", 	1400, -700, 700);
time_2g_cut_hel0 	= new GH1("time_2g_cut_hel0", 	"time_2g_cut_hel0", 	1400, -700, 700);
time_2g_cut_hel1 	= new GH1("time_2g_cut_hel1", 	"time_2g_cut_hel1", 	1400, -700, 700);

//***********************************************************************************************

MM		= new GH1("MM", 	"MM", 	 	1500,   0, 1500);
MM_hel0		= new GH1("MM_hel0", 	"MM_hel0", 	 	1500,   0, 1500);
MM_hel1		= new GH1("MM_hel1", 	"MM_hel1", 	 	1500,   0, 1500);

MM_2g	= new GH1("MM_2g", 	"MM_2g", 	1500,   0, 1500);
MM_2g_hel0	= new GH1("MM_2g_hel0", 	"MM_2g_hel0", 	1500,   0, 1500);
MM_2g_hel1	= new GH1("MM_2g_hel1", 	"MM_2g_hel1", 	1500,   0, 1500);
MM_1g1r  = new GH1("MM_1g1r", 	"MM_1g1r",     100, 100, 170);

//*********************************************************************************************

IM 		= new GH1("IM", 	"IM", 		400,   0, 400);
IM_hel0     = new GH1("IM_hel0", 	"IM_hel0", 		400,   0, 400);
IM_hel1		= new GH1("IM_hel1", 	"IM_hel1", 		400,   0, 400);

IM_2g 	= new GH1("IM_2g", 	"IM_2g", 	400,   0, 400);
IM_2g_hel0 	= new GH1("IM_2g_hel0", 	"IM_2g_hel0", 	400,   0, 400);
IM_2g_hel1 	= new GH1("IM_2g_hel1", 	"IM_2g_hel1", 	400,   0, 400);
IM_1g1r  = new GH1("IM_1g1r", 	"IM_1g1r",     100, 100, 170);

//**********************************************************************************************

theta   = new GH1 ("theta", "theta",    180,    0,  180);
theta_hel0   = new GH1 ("theta_hel0", "theta_hel0",    180,    0,  180);
theta_hel1   = new GH1 ("theta_hel1", "theta_hel1",    180,    0,  180);

theta_2g   = new GH1 ("theta_2g", "theta_2g",    180,    0,  180);
theta_2g_hel0   = new GH1 ("theta_2g_hel0", "theta_2g_hel0",    180,    0,  180);
theta_2g_hel1   = new GH1 ("theta_2g_hel1", "theta_2g_hel1",    180,    0,  180);

//**********************************************************************************************

phi_2g    = new GH1("phi_2g",        "phi_2g",   360, 0, 360);
phi_all    = new GH1("phi_all",      "phi_all",     360, 0, 360);

//**********************************************************************************************

//phi_2g    = new GH1("phi_2g",        "phi_2g",   360, 0, 360);
//phi_all    = new GH1("phi_all",      "phi_all",     360, 0, 360);
phiBM    = new GH1("phiBM",        "phiBM",   360, 0, 360);
//***********************************************************************************************

PhotonEnergy    = new GH1 ("PhotonEnergy", "PhotonEnergy",  450, 0,   450);
PhotonEnergy_hel0    = new GH1 ("PhotonEnergy_hel0", "PhotonEnergy_hel0",  450, 0,   450);
PhotonEnergy_hel1    = new GH1 ("PhotonEnergy_hel1", "PhotonEnergy_hel1",  450, 0,   450);

PhotonEnergy_2g    = new GH1 ("PhotonEnergy_2g", "PhotonEnergy_2g",  450, 0,   450);
PhotonEnergy_2g_hel0    = new GH1 ("PhotonEnergy_2g_hel0", "PhotonEnergy_2g_hel0",  450, 0,   450);
PhotonEnergy_2g_hel1    = new GH1 ("PhotonEnergy_2g_hel1", "PhotonEnergy_2g_hel1",  450, 0,   450);

//*******************************************************************************************************

TaggerChannel    = new GH1 ("TaggerChannel", "TaggerChannel",  352, 0,   352);
TaggerChannel_hel0    = new GH1 ("TaggerChannel_hel0", "TaggerChannel_hel0",  352, 0,   352);
TaggerChannel_hel1    = new GH1 ("TaggerChannel_hel1", "TaggerChannel_hel1",  352, 0,   352);

TaggerChannel_2g    = new GH1 ("TaggerChannel_2g", "TaggerChannel_2g",  352, 0,   352);
TaggerChannel_2g_hel0    = new GH1 ("TaggerChannel_2g_hel0", "TaggerChannel_2g_hel0",  352, 0,   352);
TaggerChannel_2g_hel1    = new GH1 ("TaggerChannel_2g_hel1", "TaggerChannel_2g_hel1",  352, 0,   352);

//*******************************2DHistograms **********************************************
 MM_IM 	= new GH2("MM_IM", 	"MM_IM",    100, 110, 160, 800, 400, 1200);
 //MM_TC 	= new GH2("MM_TC", 	"MM_TC",    352, 0, 352, 800, 400, 1200);
//theta_phi_all  = new GH2("theta_phi_all",    "theta_phi_all",      180, 0, 180, 360, 0, 360);
//theta_phi_2g  = new GH2("theta_phi_2g",    "theta_phi_2g",    180, 0, 180, 360, 0, 360);

//ME		= new GH1("ME", 	"ME", 	 	1500,   0, 1500);
//MM_ME	= new GH2("MM_ME", "MM_ME", 1500, 0, 1500, 1500, 0, 1500);

//MMTCTheta = new GH3("MMTCTheta", "MMTCTheta",  352, 0 , 352, 800, 400, 1200, 180, 0 , 180 );
MMTCThetaP = new TH3D("MMTCThetaP", "MMTCThetaP",  352, 0 , 352, 800, 400, 1200, 180, 0 , 180 );
MMTCThetaR = new TH3D("MMTCThetaR", "MMTCThetaR",  352, 0 , 352, 800, 400, 1200, 180, 0 , 180 );



//MM_2g	= new GH1("ME_2g", 	"MM_2g", 	1500,   0, 1500);


//*******************************************************************************************


}

PMYPhysics::~PMYPhysics()
{
}

Bool_t	PMYPhysics::Init()
{
	cout << "Initialising physics analysis..." << endl;
	cout << "--------------------------------------------------" << endl << endl;

	if(!InitBackgroundCuts()) return kFALSE;
    if(!InitTargetMass()) return kFALSE;

    if(!PPhysics::Init()) return kFALSE;

    cout << "--------------------------------------------------" << endl;
	return kTRUE;
}

Bool_t	PMYPhysics::Start()
{
    if(!IsGoATFile())
    {
        cout << "ERROR: Input File is not a GoAT file." << endl;
        return kFALSE;
    }
    SetAsPhysicsFile();

    TraverseValidEvents();
     eventzero = 0;
    return kTRUE;
}

void	PMYPhysics::ProcessEvent()
{
    //*************************************************************************
    if(eventzero == 0)
        {
            ifstream infile;
            string inputFileA;
            infile.open("/home/dpaudyal/Butanol_Polarization/May_data_4008.txt");
            string number_file[5];
            double polarisation[5];
            inputFileA = inputFile->GetName();

            for( int i = 0; i < 5; i = i + 1 )
            {
                 infile >> number_file[i] >> polarisation[i];
            }
            for( int i = 0; i < 5; i = i + 1 )
            {
                if(number_file[i]==inputFileA)
                {
                   Target_Pol = polarisation[i];
                   Scal_factor_target_pol=(-100/(polarisation[i]));
                }
            }
        cout << "target polarisation: " << Target_Pol << " scaling factor: " << Scal_factor_target_pol << endl;
        }
        eventzero = 1;

//*********************************************************************************************


    //*******************************************************************************


    // Uncomment the following line to decode double hits in the tagger
    //GetTagger()->DecodeDoubles();

    // fill time diff (tagger - pi0), all pi0
    FillTime(*GetNeutralPions(),time);
    FillTimeCut(*GetNeutralPions(),time_cut);
	
	// fill missing mass, all pi0
    FillMissingMass(*GetNeutralPions(),MM);
    //FillMissingEnergy(*GetNeutralPions(),ME, MM_ME, kTRUE); // when i enable 2D it complains std::bad_alloc --->>> which means my program ran out of memory. perhaps () is never ar end.
	
	// fill invariant mass, all pi0
    FillMass(*GetNeutralPions(),IM);


    Filltheta(*GetNeutralPions(),theta, kTRUE);
    FillPhotonEnergy(*GetNeutralPions(),PhotonEnergy);
    FillTaggerChannel(*GetNeutralPions(),TaggerChannel);
    Fillphi(*GetNeutralPions(),phi_all, kTRUE);



   //**********************************************************************
    Bool_t hel = GetTrigger()->GetHelicity();
    // cout << "helicity  "<< hel << endl;
        if (hel == kTRUE)
        {

                            FillTime(*GetNeutralPions(),time_hel0);
                            FillTime(*GetNeutralPions(),time_cut_hel0);
                            FillMass(*GetNeutralPions(),IM_hel0);
                            Filltheta(*GetNeutralPions(),theta_hel0, kTRUE);
                            FillMissingMass(*GetNeutralPions(),MM_hel0, kTRUE);
                            FillPhotonEnergy(*GetNeutralPions(),PhotonEnergy_hel0);
                            FillTaggerChannel(*GetNeutralPions(),TaggerChannel_hel0);


        }
        else
        {
                             FillTime(*GetNeutralPions(),time_hel1);
                             FillTime(*GetNeutralPions(),time_cut_hel1);
                             FillMass(*GetNeutralPions(),IM_hel1);
                             Filltheta(*GetNeutralPions(),theta_hel1, kTRUE);
                             FillMissingMass(*GetNeutralPions(),MM_hel1, kTRUE);
                             FillPhotonEnergy(*GetNeutralPions(),PhotonEnergy_hel1);
                             FillTaggerChannel(*GetNeutralPions(),TaggerChannel_hel1);

        }




  //**********************************************************************
		
    // Some neutral decays
    for (Int_t i = 0; i < GetNeutralPions()->GetNParticles(); i++)
    {
        // Fill MM for 2 photon decay
        if ((GetNeutralPions()->GetNSubParticles(i) == 2) & (GetNeutralPions()->GetNSubPhotons(i) == 2))
        {
		// fill time diff (tagger - pi0), this pi0
        FillTime(*GetNeutralPions(),i,time_2g);
        FillTimeCut(*GetNeutralPions(),i,time_2g_cut);
			
		// fill missing mass, this pi0
                FillMissingMass(*GetNeutralPions(),i,MM_2g);
            
		// fill invariant mass, this pi0
            FillMass(*GetNeutralPions(),i,IM_2g);




             Filltheta(*GetNeutralPions(),i,theta_2g, kTRUE);
             FillPhotonEnergy(*GetNeutralPions(),i,PhotonEnergy_2g);
             FillTaggerChannel(*GetNeutralPions(),i,TaggerChannel_2g);
             Fillphi(*GetNeutralPions(),i,phi_2g, kTRUE);
            // FillThetaPhi(*GetNeutralPions(),i, phi_2g, theta_phi_2g);
            // FillThetaPhi(*GetNeutralPions(),phi_all, theta_phi_all);
             FillBeamAsymmetry(*GetNeutralPions(),i, phiBM, kTRUE, 700, 1200);
             FillThetaTCMM(*GetNeutralPions(), i, MMTCThetaP,MMTCThetaR);


            //***************************************************************************

            if (hel == kTRUE)
            {

                                FillTime(*GetNeutralPions(),i,time_2g_hel0);
                                FillTime(*GetNeutralPions(),i,time_2g_cut_hel0);
                                FillMass(*GetNeutralPions(),i,IM_2g_hel0);
                                Filltheta(*GetNeutralPions(),i,theta_2g_hel0, kTRUE);
                                FillMissingMass(*GetNeutralPions(),i,MM_2g_hel0, kTRUE);
                                FillPhotonEnergy(*GetNeutralPions(),i,PhotonEnergy_2g_hel0);
                                FillTaggerChannel(*GetNeutralPions(),i,TaggerChannel_2g_hel0);


            }
            else
            {
                                FillTime(*GetNeutralPions(),i,time_2g_hel1);
                                FillTime(*GetNeutralPions(),i,time_2g_cut_hel1);
                                FillMass(*GetNeutralPions(),i,IM_2g_hel1);
                                Filltheta(*GetNeutralPions(),i,theta_2g_hel1, kTRUE);
                                FillMissingMass(*GetNeutralPions(),i,MM_2g_hel1, kTRUE);
                                FillPhotonEnergy(*GetNeutralPions(),i,PhotonEnergy_2g_hel1);
                                FillTaggerChannel(*GetNeutralPions(),i,TaggerChannel_2g_hel1);

            }

         //**********************************************************************************

        }

        //**********************MM for one photon and one rootino*******************************
        else if ((GetNeutralPions()->GetNSubPhotons(i) == 1) && (GetNeutralPions()->GetNSubRootinos(i) == 1))
        {
               FillMass(*GetNeutralPions(),i,IM_1g1r);
               FillMissingMass(*GetNeutralPions(),i,MM_1g1r);
        }

   //************************************************************************************

    }

//*********************************MM n IM for one photon and one rootino*******************************
   /*  if ((GetNeutralPions()->GetNSubPhotons(0) == 1) && (GetNeutralPions()->GetNSubRootinos(0) == 1))
    {
           FillMass(*GetNeutralPions(),0,IM_1g1r);
           FillMissingMass(*GetNeutralPions(),0,MM_1g1r);
    }*/
       // FillIMMM(*GetNeutralPions(),0,MM_IM);
        //FillIMMM(*GetNeutralPions(),0,MM_TC);
//*************************************************************************************************
}


void	PMYPhysics::ProcessScalerRead()
{
    PPhysics::ProcessScalerRead();
}

Bool_t	PMYPhysics::Write()
{
    // Write all GH1's and TObjects defined in this class
    return GTreeManager::Write();
}
//********************************************************************************************************

void PMYPhysics::Filltheta(const GTreeParticle& tree, GH1* gHist, Bool_t TaggerBinning)
{
    for (Int_t i = 0; i < tree.GetNParticles(); i++)
    {
        for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
        {
            if(GetTagger()->GetTaggedChannel(j) < GetTC_cut_min()) continue;
            if(GetTagger()->GetTaggedChannel(j) > GetTC_cut_max()) continue;

            // calc particle time diff
            Double_t time = GetTagger()->GetTaggedTime(j) - tree.GetTime(i);
            if(TaggerBinning)   gHist->Fill(tree.GetTheta(i),time, GetTagger()->GetTaggedChannel(j));
            else gHist->Fill(tree.GetTheta(i), time);
        }
    }
}

void PMYPhysics::Filltheta(const GTreeParticle& tree, Int_t particle_index, GH1* gHist, Bool_t TaggerBinning)
{
    for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
    {
        if(GetTagger()->GetTaggedChannel(j) < GetTC_cut_min()) continue;
        if(GetTagger()->GetTaggedChannel(j) > GetTC_cut_max()) continue;
        // calc particle time diff
        Double_t time = GetTagger()->GetTaggedTime(j) - tree.GetTime(particle_index);
        if(TaggerBinning)   gHist->Fill(tree.GetTheta(particle_index),time, GetTagger()->GetTaggedChannel(j));
        else gHist->Fill(tree.GetTheta(particle_index), time);
    }
}


//************************************************************************************************************

void PMYPhysics::Fillphi(const GTreeParticle& tree, GH1* gHist, Bool_t TaggerBinning)
{
    for (Int_t i = 0; i < tree.GetNParticles(); i++)
    {
        for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
        {
            if(GetTagger()->GetTaggedChannel(j) < GetTC_cut_min()) continue;
            if(GetTagger()->GetTaggedChannel(j) > GetTC_cut_max()) continue;

            // calc particle time diff
            Double_t time = GetTagger()->GetTaggedTime(j) - tree.GetTime(i);

            if(TaggerBinning) gHist->Fill((TVector2::Phi_0_2pi(tree.GetPhiRad(i)))*TMath::RadToDeg(), time, GetTagger()->GetTaggedChannel(j));
            else gHist->Fill((TVector2::Phi_0_2pi(tree.GetPhiRad(i)))*TMath::RadToDeg(), time);   // Phi angle in the interval 0 to 2pi
        }
    }
}

void PMYPhysics::Fillphi(const GTreeParticle& tree, Int_t particle_index, GH1* gHist, Bool_t TaggerBinning)
{
    for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
    {
        if(GetTagger()->GetTaggedChannel(j) < GetTC_cut_min()) continue;
        if(GetTagger()->GetTaggedChannel(j) > GetTC_cut_max()) continue;
        // calc particle time diff
        Double_t time = GetTagger()->GetTaggedTime(j) - tree.GetTime(particle_index);

        if(TaggerBinning) gHist->Fill((TVector2::Phi_0_2pi(tree.GetPhiRad(particle_index)))*TMath::RadToDeg(), time, GetTagger()->GetTaggedChannel(j));
        else gHist->Fill((TVector2::Phi_0_2pi(tree.GetPhiRad(particle_index)))*TMath::RadToDeg(), time);
  }
}


//*************************************************************************************************************
/*
void PMYPhysics::FillMissingEnergy(const GTreeParticle& tree, GH1* gHist, GH2* hHist, Bool_t TaggerBinning)
{
    for (Int_t i = 0; i < tree.GetNParticles(); i++)
    {
        for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
        {
            FillMissingEnergy(tree, i, j, gHist, hHist, TaggerBinning);
        }
    }
}

void PMYPhysics::FillMissingEnergy(const GTreeParticle& tree, Int_t particle_index, GH1* gHist, GH2* hHist, Bool_t TaggerBinning)
{
    for (Int_t i = 0; i < GetTagger()->GetNTagged(); i++)
    {
        FillMissingEnergy(tree, particle_index, i, gHist, hHist, TaggerBinning);
    }
}

void PMYPhysics::FillMissingEnergy(const GTreeParticle& tree, Int_t particle_index, Int_t tagger_index, GH1* gHist, GH2* hHist, Bool_t TaggerBinning)
{
    if(RejectTagged(tagger_index)) return;

    // calc particle time diff
    Double_t time = GetTagger()->GetTaggedTime(tagger_index) - tree.GetTime(particle_index);

    // calc missing p4

   TLorentzVector missingp4 = CalcMissingP4(tree, particle_index,tagger_index);

   // Fill gHist and hHist
   if(TaggerBinning)   hHist->Fill(missingp4.T(),time, missingp4.M(), GetTagger()->GetTaggedChannel(tagger_index));
   else hHist->Fill(missingp4.T(),time, missingp4.M());

   if(TaggerBinning)   gHist->Fill(missingp4.T(),time, GetTagger()->GetTaggedChannel(tagger_index));
   else gHist->Fill(missingp4.T(),time);

}
*/

////// ************************************************************************************************************
/*
void PMYPhysics::FillThetaPhi(const GTreeParticle& tree, GH1* hHist, GH2* ghHist)
{
  // hHist   --> phi hist
  // ghHist  --> 2D theta-phi histogram
  //Int_t nerror = GetTrigger()->GetNErrors();
  for (Int_t i = 0; i < tree.GetNParticles(); i++)
    {
      for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
    {
      // Is tagger channel rejected by user?
      if(GetTagger()->GetTaggedChannel(j) < GetTC_cut_min()) continue;
      if(GetTagger()->GetTaggedChannel(j) > GetTC_cut_max()) continue;

      // calc particle time diff
      Double_t time = GetTagger()->GetTaggedTime(j) - tree.GetTime(i);

      // Fill theta/phi histograms
     // if (nerror==0) {
        hHist->Fill((TVector2::Phi_0_2pi(tree.GetPhiRad(i)))*TMath::RadToDeg(), time);
        ghHist->Fill(tree.GetTheta(i), (TVector2::Phi_0_2pi(tree.GetPhiRad(i)))*TMath::RadToDeg(), time);
      }
    }
 }


void PMYPhysics::FillThetaPhi(const GTreeParticle& tree, Int_t particle_index, GH1* hHist, GH2* ghHist)
{
  // hHist   --> phi hist
  // ghHist  --> 2D theta-phi prompt hist
  //Int_t nerror = GetTrigger()->GetNErrors();

  for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
    {
      // Is tagger channel rejected by user?
      if(GetTagger()->GetTaggedChannel(j) < GetTC_cut_min()) continue;
      if(GetTagger()->GetTaggedChannel(j) > GetTC_cut_max()) continue;

      // calc particle time diff
      Double_t time = GetTagger()->GetTaggedTime(j) - tree.GetTime(particle_index);

      // Fill theta/phi histograms
     // if (nerror==0) {
    hHist->Fill((TVector2::Phi_0_2pi(tree.GetPhiRad(particle_index)))*TMath::RadToDeg(), time);
    ghHist->Fill(tree.GetTheta(particle_index), (TVector2::Phi_0_2pi(tree.GetPhiRad(particle_index)))*TMath::RadToDeg(), time);
      }
 }
*/
//****************************************************************************************************************

void PMYPhysics::FillPhotonEnergy(const GTreeParticle& tree, GH1* gHist)
{
   for (Int_t i = 0; i < tree.GetNParticles(); i++)
   {
       for(int j=0; j<GetTagger()->GetNTagged(); j++)
       {
           Double_t time = GetTagger()->GetTaggedTime(j) - tree.GetTime(i);
           gHist->Fill(GetTagger()->GetTaggedEnergy(j), time);
       }
   }
}

void PMYPhysics::FillPhotonEnergy(const GTreeParticle& tree, Int_t particle_index, GH1* gHist)
{
    for(int j=0; j<GetTagger()->GetNTagged(); j++)
    {
        Double_t time = GetTagger()->GetTaggedTime(j) - tree.GetTime(particle_index);
        gHist->Fill(GetTagger()->GetTaggedEnergy(j),time);
    }
}

//***********************************************************************************************************************

void PMYPhysics::FillTaggerChannel(const GTreeParticle& tree, GH1* gHist)
{
   for (Int_t i = 0; i < tree.GetNParticles(); i++)
   {
       for(int j=0; j<GetTagger()->GetNTagged(); j++)
       {
           Double_t time = GetTagger()->GetTaggedTime(j) - tree.GetTime(i);
           gHist->Fill(GetTagger()->GetTaggedChannel(j),time);
       }
   }
}

void PMYPhysics::FillTaggerChannel(const GTreeParticle& tree, Int_t particle_index, GH1* gHist)
{
    for(int j=0; j<GetTagger()->GetNTagged(); j++)
    {
        Double_t time = GetTagger()->GetTaggedTime(j) - tree.GetTime(particle_index);
        gHist->Fill(GetTagger()->GetTaggedChannel(j),time);
    }
}

//************************************************************************************************************

void PMYPhysics::FillIMMM(const GTreeParticle& tree, GH2* gHist,  Bool_t TaggerBinning)
{
  for (Int_t i = 0; i < tree.GetNParticles(); i++)
    {
      for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
        {
      FillIMMM(tree, i, j, gHist, TaggerBinning);
        }
    }
}

void PMYPhysics::FillIMMM(const GTreeParticle& tree, Int_t particle_index, GH2* gHist, Bool_t TaggerBinning)
{
  for (Int_t i = 0; i < GetTagger()->GetNTagged(); i++)
    {
      FillIMMM(tree, particle_index, i, gHist,  TaggerBinning);
    }
}

void PMYPhysics::FillIMMM(const GTreeParticle& tree, Int_t particle_index, Int_t tagger_index, GH2* gHist, Bool_t TaggerBinning)
{
  // Is tagger channel rejected by user?
  if(GetTagger()->GetTaggedChannel(tagger_index) < GetTC_cut_min()) return;
  if(GetTagger()->GetTaggedChannel(tagger_index) > GetTC_cut_max()) return;

  // calc particle time diff
  Double_t time = GetTagger()->GetTaggedTime(tagger_index) - tree.GetTime(particle_index);

  // calc missing p4
  TLorentzVector missingp4 = CalcMissingP4(tree, particle_index,tagger_index);

  // Fill GH1
  if(TaggerBinning)   gHist->Fill(tree.GetMass(particle_index), missingp4.M(),time, GetTagger()->GetTaggedChannel(tagger_index));
  else gHist->Fill(tree.GetMass(particle_index), missingp4.M(),time);
  //if(TaggerBinning)   hHist->Fill(tree.GetMass(particle_index), missingp4.M(),time, GetTagger()->GetTaggedChannel(tagger_index));
    //else hHist->Fill(GetTagger()->GetTaggedChannel(tagger_index), missingp4.M(),time);
}


void PMYPhysics::FillThetaTCMM(const GTreeParticle& tree, TH3* gHistPrompt, TH3* gHistRandom )
{

  for (Int_t i = 0; i < tree.GetNParticles(); i++)
    {
      for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
    {
     FillThetaTCMM(tree, i, j, gHistPrompt, gHistRandom);
      }
     }
}



void PMYPhysics::FillThetaTCMM(const GTreeParticle& tree, Int_t particle_index, TH3* gHistPrompt, TH3* gHistRandom  )
{


  for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
    {
       FillThetaTCMM(tree, particle_index, j, gHistPrompt, gHistRandom );
    }
}

void PMYPhysics::FillThetaTCMM(const GTreeParticle& tree, Int_t particle_index,  Int_t tagger_index, TH3* gHistPrompt, TH3* gHistRandom )
{

  for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
    {
      // Is tagger channel rejected by user?
      if(GetTagger()->GetTaggedChannel(j) < GetTC_cut_min()) continue;
      if(GetTagger()->GetTaggedChannel(j) > GetTC_cut_max()) continue;

      // calc particle time diff
      Double_t time = GetTagger()->GetTaggedTime(j) - tree.GetTime(particle_index);
      TLorentzVector missingp4 = CalcMissingP4(tree, particle_index,tagger_index);
      thet = tree.GetTheta(particle_index);
      TC= GetTagger()->GetTaggedChannel(tagger_index);

      // Fill  histograms
      if (GHistBGSub::IsPrompt(time)) gHistPrompt->Fill(TC, missingp4.M(),time, thet );
      if (GHistBGSub::IsRandom(time)) gHistRandom->Fill(TC, missingp4.M(),time, thet );

         //  if (GHistBGSub::IsPrompt(time)) gHistPrompt->Fill(tree.GetTheta(particle_index), missingp4.M(),time, GetTagger()->GetTaggedChannel(tagger_index) );
           //if (GHistBGSub::IsRandom(time)) gHistRandom->Fill(tree.GetTheta(particle_index), missingp4.M(),time, GetTagger()->GetTaggedChannel(tagger_index) );
    }
}

//***************************************************************************************************************



