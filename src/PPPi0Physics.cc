#include "PPPi0Physics.h"

PPPi0Physics::PPPi0Physics()
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

MM		= new GH1("MM", 	"MM", 	 	500,   700, 1200);
MM_hel0		= new GH1("MM_hel0", 	"MM_hel0", 	 	500,   700, 1200);
MM_hel1		= new GH1("MM_hel1", 	"MM_hel1", 	 	500,   700, 1200);

MM_2g	= new GH1("MM_2g", 	"MM_2g", 	500,  700, 1200);
MM_2g_hel0	= new GH1("MM_2g_hel0", 	"MM_2g_hel0", 	500,   700, 1200);
MM_2g_hel1	= new GH1("MM_2g_hel1", 	"MM_2g_hel1", 	500,   700, 1200);
MM_1g1r  = new GH1("MM_1g1r", 	"MM_1g1r",     100, 100, 170);

//*********************************************************************************************

IM 		= new GH1("IM", 	"IM", 		250,   0, 250);
IM_hel0     = new GH1("IM_hel0", 	"IM_hel0", 		250,   0, 250);
IM_hel1		= new GH1("IM_hel1", 	"IM_hel1", 		250,   0, 250);

IM_2g 	= new GH1("IM_2g", 	"IM_2g", 	250,   0, 250);
IM_2g_hel0 	= new GH1("IM_2g_hel0", 	"IM_2g_hel0", 	250,   0, 250);
IM_2g_hel1 	= new GH1("IM_2g_hel1", 	"IM_2g_hel1", 	250,   0, 250);
IM_1g1r  = new GH1("IM_1g1r", 	"IM_1g1r",     100, 100, 170);

//**********************************************************************************************

theta   = new GH1 ("theta", "theta",    36,    0,  180);
theta_hel0   = new GH1 ("theta_hel0", "theta_hel0",    36,    0,  180);
theta_hel1   = new GH1 ("theta_hel1", "theta_hel1",    36,    0,  180);

theta_2g   = new GH1 ("theta_2g", "theta_2g",    36, 0, 180);
theta_2g_hel0   = new GH1 ("theta_2g_hel0", "theta_2g_hel0",    36,    0,  180);
theta_2g_hel1   = new GH1 ("theta_2g_hel1", "theta_2g_hel1",    36,    0,  180);

//**********************************************************************************************
//phi   = new GH1 ("phi", "phi",    36,    -180,  180);
//phi_hel0   = new GH1 ("phi_hel0", "phi_hel0",    36,    -180,  180);
//phi_hel1   = new GH1 ("phi_hel1", "phi_hel1",    36,    -180,  180);

//phi_2g   = new GH1 ("phi_2g", "phi_2g",    36,    -180,  180);
//phi_2g_hel0   = new GH1 ("phi_2g_hel0", "phi_2g_hel0",    36,    -180,  180);
//phi_2g_hel1   = new GH1 ("phi_2g_hel1", "phi_2g_hel1",    36,    -180,  180);

//**********************************************************************************************

//phi_2g    = new GH1("phi_2g",        "phi_2g",   360, -180, 180);
//phi_all    = new GH1("phi_all",      "phi_all",     360, -180, 180);
//phiBM    = new GH1("phiBM",        "phiBM",   360, -180, 180);

//opening_angle 	= new GH1("opening_angle","opening_angle",180,0,180);
//opening_angle_cuts 	= new GH1("opening_angle_cuts","opening_angle_cuts",180,0,180);
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
 //MM_IM 	= new GH2("MM_IM", 	"MM_IM",    100, 110, 160, 800, 400, 1200);
 //MM_TC 	= new GH2("MM_TC", 	"MM_TC",    352, 0, 352, 20, 800, 1200);
 //MM_TC_hel0 	= new GH2("MM_TC_hel0", 	"MM_TC_hel0",    352, 0, 352, 20, 800, 1200);
 //MM_TC_hel1 	= new GH2("MM_TC_hel1", 	"MM_TC_hel1",    352, 0, 352, 20, 800, 1200);
 //MM_TC_2g 	= new GH2("MM_TC_2g", 	"MM_TC_2g",    352, 0, 352, 20, 800, 1200);
// MM_TC_2g_hel0 	= new GH2("MM_TC_2g_hel0", 	"MM_TC_2g_hel0",    352, 0, 352, 20, 800, 1200);
// MM_TC_2g_hel1 	= new GH2("MM_TC_2g_hel1", 	"MM_TC_2g_hel1",    352, 0, 352, 20, 800, 1200);
//theta_phi_all  = new GH2("theta_phi_all",    "theta_phi_all",      180, 0, 180, 360, 0, 360);
//theta_phi_2g  = new GH2("theta_phi_2g",    "theta_phi_2g",    180, 0, 180, 360, 0, 360);

//ME		= new GH1("ME", 	"ME", 	 	1500,   0, 1500);
//MM_ME	= new GH2("MM_ME", "MM_ME", 1500, 0, 1500, 1500, 0, 1500);

//MMTCTheta = new GH3("MMTCTheta", "MMTCTheta",  352, 0 , 352, 500, 700, 1200, 18, 0 , 180 );
//MMTCThetaP = new TH3D("MMTCThetaP", "MMTCThetaP",  352, 0 , 352, 500, 700, 1200, 18, 0 , 180 );
//MMTCThetaR = new TH3D("MMTCThetaR", "MMTCThetaR",  352, 0 , 352, 500, 700, 1200, 18, 0 , 180 );
//MM_2g	= new GH1("ME_2g", 	"MM_2g", 	1500,   0, 1500);
//********************************************************************************************


hel0_theta_nocut = new GH1(" hel0_theta_nocut","theta distribution for no im cut Helicity=+1",36,0,180);
hel0_theta_IMcut = new GH1(" hel0_theta_IMcut","theta for 120 < IM < 150  for Helicity=+1",36,0,180);
hel0_theta_250_270 = new GH1(" hel0_theta_250_270","theta for 270 < TaggEn < 290  for Helicity=+1",36,0,180);
hel0_theta_270_290 = new GH1(" hel0_theta_270_290","theta for 290 < TaggEn < 150  for Helicity=+1",36,0,180);
hel0_theta_290_310 = new GH1(" hel0_theta_290_310","theta for 120 < TaggEn < 310  for Helicity=+1",36,0,180);
hel0_theta_MMcut = new GH1(" hel0_theta_MMcut","theta for 910 < MM < 970  for Helicity=+1",36,0,180);


 IM_hel0_0 = new GH1(" IM_hel0_0","imgg for 0 <Theta < 10 Helicity=+1",250,0,250);

 IM_hel0_20 = new GH1(" IM_hel0_20","imgg for 20 <Theta < 30 Helicity=+1",250,0,250);

 IM_hel0_40 = new GH1(" IM_hel0_40","imgg for 40 <Theta < 50 Helicity=+1",250,0,250);

 IM_hel0_60 = new GH1(" IM_hel0_60","imgg for 60 <Theta < 70 Helicity=+1",250,0,250);

 IM_hel0_80 = new GH1(" IM_hel0_80","imgg for 80 <Theta < 90 Helicity=+1",250,0,250);

 IM_hel0_100 = new GH1(" IM_hel0_100","imgg for 100 <Theta < 110 Helicity=+1",250,0,250);

 IM_hel0_120 = new GH1(" IM_hel0_120","imgg for 120 <Theta < 130 Helicity=+1",250,0,250);

 IM_hel0_140 = new GH1(" IM_hel0_140","imgg for 140 <Theta < 150 Helicity=+1",250,0,250);

 IM_hel0_160 = new GH1(" IM_hel0_160","imgg for 160 <Theta < 170 Helicity=+1",250,0,250);


 hel1_theta_nocut = new GH1(" hel1theta_nocut","theta distribution for no im cut Helicity=-1",36,0,180);
 hel1_theta_IMcut = new GH1(" hel1_theta_IMcut","theta for 120 < im < 150  for Helicity=-1",36,0,180);
 hel1_theta_250_270 = new GH1(" hel1_theta_250_270","theta for 120 < im < 150  for Helicity=-1",36,0,180);
 hel1_theta_270_290 = new GH1(" hel1_theta_270_290","theta for 120 < im < 150  for Helicity=-1",36,0,180);
 hel1_theta_290_310 = new GH1(" hel1_theta_290_310","theta for 120 < im < 150  for Helicity=-1",36,0,180);
 hel1_theta_MMcut = new GH1(" hel1_theta_MMcut","theta for 120 < im < 150  for Helicity=-1",36,0,180);

 IM_hel1_0 = new GH1(" IM_hel1_0","imgg for 0 <Theta < 10 Helicity=-1",250,0,250);

 IM_hel1_20 = new GH1(" IM_hel1_20","imgg for 20 <Theta < 30 Helicity=-1",250,0,250);

 IM_hel1_40 = new GH1(" IM_hel1_40","imgg for 40 <Theta < 50 Helicity=-1",250,0,250);

 IM_hel1_60 = new GH1(" IM_hel1_60","imgg for 60 <Theta < 70 Helicity=-1",250,0,250);

 IM_hel1_80 = new GH1(" IM_hel1_80","imgg for 80 <Theta < 90 Helicity=-1",250,0,250);

 IM_hel1_100 = new GH1(" IM_hel1_100","imgg for 100 <Theta < 110 Helicity=-1",250,0,250);

 IM_hel1_120 = new GH1(" IM_hel1_120","imgg for 120 <Theta < 130 Helicity=-1",250,0,250);

 IM_hel1_140 = new GH1(" IM_hel1_140","imgg for 140 <Theta < 150 Helicity=-1",250,0,250);

 IM_hel1_160 = new GH1(" IM_hel1_160","imgg for 160 <Theta < 170 Helicity=-1",250,0,250);





//*******************************************************************************************


}

PPPi0Physics::~PPPi0Physics()
{
}

Bool_t	PPPi0Physics::Init()
{
	cout << "Initialising physics analysis..." << endl;
	cout << "--------------------------------------------------" << endl << endl;

	if(!InitBackgroundCuts()) return kFALSE;
    if(!InitTargetMass()) return kFALSE;

    if(!PPhysics::Init()) return kFALSE;

    cout << "--------------------------------------------------" << endl;
	return kTRUE;
}

Bool_t	PPPi0Physics::Start()
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

void	PPPi0Physics::ProcessEvent()
{
    //*************************************************************************
    if(eventzero == 0)
        {
            ifstream infile;
            string inputFileA;
            infile.open("/home/dpaudyal/Butanol_Polarization/2014_Targ_Pol_correct.txt");
            string number_file[450];
            double polarisation[450];
            inputFileA = inputFile->GetName();

            for( int i = 0; i < 450; i = i + 1 )
            {
                 infile >> number_file[i] >> polarisation[i];
            }
            for( int i = 0; i < 450; i = i + 1 )
            {
                if(number_file[i]==inputFileA)
                {
                   Target_Pol = polarisation[i];
                   Scal_factor_target_pol=(-100/(polarisation[i]));
                }
            }
        cout << "target polarisation: " << Target_Pol << " scaling factor: " << Scal_factor_target_pol << endl;

	   // scale_factor_global = Scal_factor_target_pol;


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
   // FillMissingEnergy(*GetNeutralPions(),ME, MM_ME, kTRUE); // when i enable 2D it complains std::bad_alloc --->>> which means my program ran out of memory. perhaps () is never ar end.
	
	// fill invariant mass, all pi0
    FillMass(*GetNeutralPions(),IM);


    Filltheta(*GetNeutralPions(),theta, kTRUE);
    FillPhotonEnergy(*GetNeutralPions(),PhotonEnergy);
    FillTaggerChannel(*GetNeutralPions(),TaggerChannel);
    //Fillphi(*GetNeutralPions(),phi, kTRUE);
   // FillMMTC(*GetNeutralPions(),  MM_TC, kTRUE);



   //**********************************************************************
    Int_t nerror = 0;
    nerror = GetTrigger()->GetNErrors();
    Bool_t hel = GetTrigger()->GetHelicity();
    if (nerror==0) {
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
                            //Fillphi(*GetNeutralPions(),phi_hel0, kTRUE);
                           // FillMMTC(*GetNeutralPions(), MM_TC_hel0, kTRUE);


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
                              //Fillphi(*GetNeutralPions(),phi_hel1, kTRUE);
                            // FillMMTC(*GetNeutralPions(), MM_TC_hel1,kTRUE);

        }



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
             //Fillphi(*GetNeutralPions(),i,phi_2g, kTRUE);
            // FillThetaPhi(*GetNeutralPions(),i, phi_2g, theta_phi_2g);
            // FillThetaPhi(*GetNeutralPions(),phi_all, theta_phi_all);
             //FillBeamAsymmetry(*GetNeutralPions(),i, phiBM, kTRUE, 700, 1200);
             //FillThetaTCMM(*GetNeutralPions(), i, MMTCThetaP,MMTCThetaR);
             //FillMMTC(*GetNeutralPions(),i, MM_TC_2g, kTRUE);


            //***************************************************************************
             if (nerror==0) {
            if (hel == kTRUE)
            {

                                FillTime(*GetNeutralPions(),i,time_2g_hel0);
                                FillTime(*GetNeutralPions(),i,time_2g_cut_hel0);
                                FillMass(*GetNeutralPions(),i,IM_2g_hel0);
                                Filltheta(*GetNeutralPions(),i,theta_2g_hel0, kTRUE);
                                FillMissingMass(*GetNeutralPions(),i,MM_2g_hel0, kTRUE);
                                FillPhotonEnergy(*GetNeutralPions(),i,PhotonEnergy_2g_hel0);
                                FillTaggerChannel(*GetNeutralPions(),i,TaggerChannel_2g_hel0);
                                 //Fillphi(*GetNeutralPions(),i,phi_2g_hel0, kTRUE);
                               // FillMMTC(*GetNeutralPions(),i,MM_TC_2g_hel0,kTRUE);
                                // FillDilliAsym(*GetNeutralPions(),i,300,320, hel0_theta_nocut,hel0_theta_imcut, hel0_imgg_0, hel0_imgg_10,  hel0_imgg_20, hel0_imgg_30,  hel0_imgg_40,  hel0_imgg_50,  hel0_imgg_60, hel0_imgg_70, hel0_imgg_80, hel0_imgg_90,  hel0_imgg_100,hel0_imgg_110, hel0_imgg_120, hel0_imgg_130,  hel0_imgg_140,  hel0_imgg_150, hel0_imgg_160, hel0_imgg_170,kTRUE);
                                  FillDilliAsym(*GetNeutralPions(),*GetTagger(),hel0_theta_nocut,hel0_theta_IMcut, hel0_theta_250_270, hel0_theta_270_290, hel0_theta_290_310, hel0_theta_MMcut,
                                                     IM_hel0_0,  IM_hel0_20,  IM_hel0_40,    IM_hel0_60,  IM_hel0_80,  IM_hel0_100, IM_hel0_120,   IM_hel0_140,   IM_hel0_160);

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
                                 //Fillphi(*GetNeutralPions(),i,phi_2g_hel1, kTRUE);
                               // FillMMTC(*GetNeutralPions(),i,MM_TC_2g_hel1, kTRUE);
                               // FillDilliAsym(*GetNeutralPions(),i,300,320, hel1_theta_nocut,hel1_theta_imcut, hel1_imgg_0, hel1_imgg_10,  hel1_imgg_20, hel1_imgg_30,  hel1_imgg_40,  hel1_imgg_50,  hel1_imgg_60, hel1_imgg_70, hel1_imgg_80, hel1_imgg_90,  hel1_imgg_100,hel1_imgg_110, hel1_imgg_120, hel1_imgg_130,  hel1_imgg_140,  hel1_imgg_150, hel1_imgg_160, hel1_imgg_170,kTRUE);
                                 FillDilliAsym(*GetNeutralPions(),*GetTagger(), hel1_theta_nocut,hel1_theta_IMcut,  hel1_theta_250_270, hel1_theta_270_290, hel1_theta_290_310, hel1_theta_MMcut,
                                                       IM_hel1_0,  IM_hel1_20, IM_hel1_40, IM_hel1_60, IM_hel1_80,  IM_hel1_100, IM_hel1_120,   IM_hel1_140,   IM_hel1_160);


            }
          }
         //**********************************************************************************


        }

        //**********************MM for one photon and one rootino*******************************
        else if ((GetNeutralPions()->GetNSubPhotons(i) == 2) && (GetNeutralPions()->GetNSubRootinos(i) == 2))
        {
               FillMass(*GetNeutralPions(),i,IM_1g1r);
               FillMissingMass(*GetNeutralPions(),i,MM_1g1r);
        }

   //************************************************************************************

    }


//*************************************************************************************************
}


void	PPPi0Physics::ProcessScalerRead()
{
    PPhysics::ProcessScalerRead();
}

Bool_t	PPPi0Physics::Write()
{
    // Write all GH1's and TObjects defined in this class
    return GTreeManager::Write();
}
//********************************************************************************************************

void PPPi0Physics::Filltheta(const GTreeParticle& tree, GH1* gHist, Bool_t TaggerBinning)
{
    for (Int_t i = 0; i < tree.GetNParticles(); i++)
    {
        for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
        {
            if(GetTagger()->GetTaggedChannel(j) < GetTC_cut_min()) continue;
            if(GetTagger()->GetTaggedChannel(j) > GetTC_cut_max()) continue;
            if ((GetTagger()->GetTaggedEnergy(j)>300)&&(GetTagger()->GetTaggedEnergy(j)<320));
            // calc particle time diff
            Double_t time = GetTagger()->GetTaggedTime(j) - tree.GetTime(i);
            if(TaggerBinning)   gHist->Fill(tree.GetTheta(i),time, GetTagger()->GetTaggedChannel(j));
            else gHist->Fill(tree.GetTheta(i), time);
        }
    }

    //cout << scale_factor_global << endl;

   // gHist->Scale(Scal_factor_target_pol);
    
}

void PPPi0Physics::Filltheta(const GTreeParticle& tree, Int_t particle_index, GH1* gHist, Bool_t TaggerBinning)
{
    for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
    {
        if(GetTagger()->GetTaggedChannel(j) < GetTC_cut_min()) continue;
        if(GetTagger()->GetTaggedChannel(j) > GetTC_cut_max()) continue;
        if ((GetTagger()->GetTaggedEnergy(j)>300)&&(GetTagger()->GetTaggedEnergy(j)<320));

        // calc particle time diff
        Double_t time = GetTagger()->GetTaggedTime(j) - tree.GetTime(particle_index);
        if(TaggerBinning)   gHist->Fill(tree.GetTheta(particle_index),time, GetTagger()->GetTaggedChannel(j));
        else gHist->Fill(tree.GetTheta(particle_index), time);
    }

    //cout << scale_factor_global << endl;
   //gHist->Scale(Scal_factor_target_pol);

}
//************************************************************************************************************
void PPPi0Physics::FillDilliAsym(const GTreeMeson& tree, const GTreeTagger& taggertree, GH1* gHist,
                               GH1* theta_imcut,GH1* theta_250_270,GH1* theta_270_290, GH1* theta_290_310,GH1* theta_MMcut, GH1* imgg_0, GH1* imgg_20,
                               GH1* imgg_40,GH1* imgg_60,GH1* imgg_80, GH1* imgg_100, GH1* imgg_120,GH1* imgg_140, GH1* imgg_160)
{
    for (Int_t i = 0; i < tree.GetNParticles(); i++)
    {
        for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
        {

          Double_t time = GetTagger()->GetTaggedTime(j) - tree.GetTime(i);


                 gHist->Fill(tree.GetTheta(i), time);

                   if ((tree.GetMass(i)<=155)&&(tree.GetMass(i)>=115))
                        {
                            theta_imcut->Fill(tree.GetTheta(i),time);

                           // theta_imcut->Scale(Scal_factor_target_pol);

                          // cout <<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! main loop " << endl;

                               }
                       

                          if ((taggertree.GetTaggedEnergy(j)>=250)&&(taggertree.GetTaggedEnergy(j)<=270));
                                {
                                 theta_250_270->Fill(tree.GetTheta(i),time);
                                 //theta_250_270->Scale(Scal_factor_target_pol);

                             //   cout << " condition 1 " << endl;

                                  }

                            if ((taggertree.GetTaggedEnergy(j)>=270)&&(taggertree.GetTaggedEnergy(j)<=290));
                                  {
                                    theta_270_290->Fill(tree.GetTheta(i),time);
                                    //theta_270_290->Scale(Scal_factor_target_pol);

                                 //     cout << " condition 2" << endl;

                                     }

                            if ((taggertree.GetTaggedEnergy(j)>=290)&&(taggertree.GetTaggedEnergy(j)<=310));
                                     {

                                      theta_290_310->Fill(tree.GetTheta(i),time);
                                      //theta_290_310->Scale(Scal_factor_target_pol);

                                  //       cout << " condition 3" << endl;

                                       }

                                if ((CalcMissingMass(tree,0,j)<970)&&(CalcMissingMass(tree,0,j)>910))
                                    {

                                        theta_MMcut->Fill(tree.GetTheta(i),time);

                                      //          cout << " condition 4" << endl;


                                       }
                                        if ((tree.GetTheta(i)>=0)&&(tree.GetTheta(i)<20))
                                        {
                                            FillMass(tree,i,j,imgg_0);
                                        }
                                        else if ((tree.GetTheta(i)>=20)&&(tree.GetTheta(i)<40))
                                        {
                                            FillMass(tree,i,j,imgg_20);
                                        }
                                        else if ((tree.GetTheta(i)>=40)&&(tree.GetTheta(i)<60))
                                        {
                                            FillMass(tree,i,j,imgg_40);
                                        }
                                        else if ((tree.GetTheta(i)>=60)&&(tree.GetTheta(i)<80))
                                        {
                                            FillMass(tree,i,j,imgg_60);
                                        }
                                        else if ((tree.GetTheta(i)>=80)&&(tree.GetTheta(i)<100))
                                        {
                                            FillMass(tree,i,j,imgg_80);
                                        }
                                        else if ((tree.GetTheta(i)>=100)&&(tree.GetTheta(i)<120))
                                        {
                                            FillMass(tree,i,j,imgg_100);
                                        }
                                        else if ((tree.GetTheta(i)>=120)&&(tree.GetTheta(i)<140))
                                        {
                                            FillMass(tree,i,j,imgg_120);
                                        }
                                        else if ((tree.GetTheta(i)>=140)&&(tree.GetTheta(i)<160))
                                        {
                                            FillMass(tree,i,j,imgg_140);
                                        }
                                        else if ((tree.GetTheta(i)>=160)&&(tree.GetTheta(i)<180))
                                        {
                                            FillMass(tree,i,j,imgg_160);
                                         }



                            }




       }
    }

    //cout << scale_factor_global << endl;

   // gHist->Scale(Scal_factor_target_pol);



//************************************************************************************************************
/*
void PPPi0Physics::Fillphi(const GTreeParticle& tree,  GH1* gHist, Bool_t TaggerBinning)
{
    for (Int_t i = 0; i < tree.GetNParticles(); i++)
    {
        for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
        {
            Fillphi(tree,  j, gHist, TaggerBinning);
        }
    }
}

void PPPi0Physics::Fillphi(const GTreeParticle& tree, Int_t particle_index, GH1* gHist, Bool_t TaggerBinning)
{
    for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
    {
        if(GetTagger()->GetTaggedChannel(j) < GetTC_cut_min()) continue;
        if(GetTagger()->GetTaggedChannel(j) > GetTC_cut_max()) continue;
         if ((GetTagger()->GetTaggedEnergy(j)>280)&&(GetTagger()->GetTaggedEnergy(j)<290));
        // calc particle time diff
        Double_t time = GetTagger()->GetTaggedTime(j) - tree.GetTime(particle_index);

        if(TaggerBinning)   gHist->Fill(tree.GetPhi(particle_index),time,GetTagger()->GetTaggedChannel(j));
          else gHist->Fill(tree.GetPhi(particle_index),time);
  }
}



void PPPi0Physics::Fillphi(const GTreeParticle& tree, GH1* gHist, Bool_t TaggerBinning)
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

void PPPi0Physics::Fillphi(const GTreeParticle& tree, Int_t particle_index, GH1* gHist, Bool_t TaggerBinning)
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

*/
//*************************************************************************************************************

void PPPi0Physics::FillMissingEnergy(const GTreeParticle& tree, GH1* gHist, GH2* hHist, Bool_t TaggerBinning)
{
    for (Int_t i = 0; i < tree.GetNParticles(); i++)
    {
        for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
        {
            FillMissingEnergy(tree, i, j, gHist, hHist, TaggerBinning);
        }
    }
}

void PPPi0Physics::FillMissingEnergy(const GTreeParticle& tree, Int_t particle_index, GH1* gHist, GH2* hHist, Bool_t TaggerBinning)
{
    for (Int_t i = 0; i < GetTagger()->GetNTagged(); i++)
    {
        FillMissingEnergy(tree, particle_index, i, gHist, hHist, TaggerBinning);
    }
}

void PPPi0Physics::FillMissingEnergy(const GTreeParticle& tree, Int_t particle_index, Int_t tagger_index, GH1* gHist, GH2* hHist, Bool_t TaggerBinning)
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


////// ************************************************************************************************************
/*
void PPPi0Physics::FillThetaPhi(const GTreeParticle& tree, GH1* hHist, GH2* ghHist)
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


void PPPi0Physics::FillThetaPhi(const GTreeParticle& tree, Int_t particle_index, GH1* hHist, GH2* ghHist)
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

void PPPi0Physics::FillPhotonEnergy(const GTreeParticle& tree, GH1* gHist)
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

void PPPi0Physics::FillPhotonEnergy(const GTreeParticle& tree, Int_t particle_index, GH1* gHist)
{
    for(int j=0; j<GetTagger()->GetNTagged(); j++)
    {
        Double_t time = GetTagger()->GetTaggedTime(j) - tree.GetTime(particle_index);
        gHist->Fill(GetTagger()->GetTaggedEnergy(j),time);
    }
}

//***********************************************************************************************************************

void PPPi0Physics::FillTaggerChannel(const GTreeParticle& tree, GH1* gHist)
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

void PPPi0Physics::FillTaggerChannel(const GTreeParticle& tree, Int_t particle_index, GH1* gHist)
{
    for(int j=0; j<GetTagger()->GetNTagged(); j++)
    {
        Double_t time = GetTagger()->GetTaggedTime(j) - tree.GetTime(particle_index);
        gHist->Fill(GetTagger()->GetTaggedChannel(j),time);
    }
}

//************************************************************************************************************
/*
void PPPi0Physics::FillIMMM(const GTreeParticle& tree, GH2* gHist,  Bool_t TaggerBinning)
{
  for (Int_t i = 0; i < tree.GetNParticles(); i++)
    {
      for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
        {
      FillIMMM(tree, i, j, gHist, TaggerBinning);
        }
    }
}

void PPPi0Physics::FillIMMM(const GTreeParticle& tree, Int_t particle_index, GH2* gHist, Bool_t TaggerBinning)
{
  for (Int_t i = 0; i < GetTagger()->GetNTagged(); i++)
    {
      FillIMMM(tree, particle_index, i, gHist,  TaggerBinning);
    }
}

void PPPi0Physics::FillIMMM(const GTreeParticle& tree, Int_t particle_index, Int_t tagger_index, GH2* gHist, Bool_t TaggerBinning)
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


////    **************************************************************************************************
void PPPi0Physics::FillMMTC(const GTreeParticle& tree, GH2* gHistMMTC, Bool_t TaggerBinning  )
{

  for (Int_t i = 0; i < tree.GetNParticles(); i++)
    {
      for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
    {
     FillMMTC(tree, i, j, gHistMMTC, TaggerBinning);
      }
     }
}



void PPPi0Physics::FillMMTC(const GTreeParticle& tree, Int_t particle_index, GH2* gHistMMTC, Bool_t TaggerBinning )
{


  for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
    {
       FillMMTC(tree, particle_index, j, gHistMMTC, TaggerBinning );
    }
}

void PPPi0Physics::FillMMTC(const GTreeParticle& tree, Int_t particle_index,  Int_t tagger_index, GH2* gHistMMTC, Bool_t TaggerBinning)
{

  for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
    {
      // Is tagger channel rejected by user?
      if(GetTagger()->GetTaggedChannel(j) < GetTC_cut_min()) continue;
      if(GetTagger()->GetTaggedChannel(j) > GetTC_cut_max()) continue;

      // calc particle time diff
      Double_t time = GetTagger()->GetTaggedTime(j) - tree.GetTime(particle_index);
      TLorentzVector missingp4 = CalcMissingP4(tree, particle_index,tagger_index);
      //thet = tree.GetTheta(particle_index);
      //TC= GetTagger()->GetTaggedChannel(tagger_index);

      // Fill  histograms
     // if (GHistBGSub::IsPrompt(time)) gHistMMTC->Fill( TC, missingp4.M(), time );


      if(TaggerBinning)  gHistMMTC->Fill(tree.GetTheta(particle_index), missingp4.M(),time, GetTagger()->GetTaggedChannel(tagger_index) );
       else gHistMMTC->Fill(missingp4.M(),time, GetTagger()->GetTaggedChannel(tagger_index));
           //if (GHistBGSub::IsRandom(time)) gHistRandom->Fill(tree.GetTheta(particle_index), missingp4.M(),time, GetTagger()->GetTaggedChannel(tagger_index) );
    }
}

*/
//******************************************************************************************************
/*

void PPPi0Physics::FillThetaTCMM(const GTreeParticle& tree, TH3* gHistPrompt, TH3* gHistRandom )
{

  for (Int_t i = 0; i < tree.GetNParticles(); i++)
    {
      for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
    {
     FillThetaTCMM(tree, i, j, gHistPrompt, gHistRandom);
      }
     }
}



void PPPi0Physics::FillThetaTCMM(const GTreeParticle& tree, Int_t particle_index, TH3* gHistPrompt, TH3* gHistRandom  )
{


  for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
    {
       FillThetaTCMM(tree, particle_index, j, gHistPrompt, gHistRandom );
    }
}

void PPPi0Physics::FillThetaTCMM(const GTreeParticle& tree, Int_t particle_index,  Int_t tagger_index, TH3* gHistPrompt, TH3* gHistRandom )
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
      if (GHistBGSub::IsPrompt(time)) gHistPrompt->Fill(TC, missingp4.M(), thet );
      if (GHistBGSub::IsRandom(time)) gHistRandom->Fill(TC, missingp4.M(), thet );

         //  if (GHistBGSub::IsPrompt(time)) gHistPrompt->Fill(tree.GetTheta(particle_index), missingp4.M(),time, GetTagger()->GetTaggedChannel(tagger_index) );
           //if (GHistBGSub::IsRandom(time)) gHistRandom->Fill(tree.GetTheta(particle_index), missingp4.M(),time, GetTagger()->GetTaggedChannel(tagger_index) );
    }
}
*/
//***************************************************************************************************************





