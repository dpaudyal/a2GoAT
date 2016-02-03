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

MM		= new GH1("MM", 	"MM", 	 	200,   600, 1200);
MM_hel0		= new GH1("MM_hel0", 	"MM_hel0", 	 	200,   600, 1200);
MM_hel1		= new GH1("MM_hel1", 	"MM_hel1", 	 	200,   600, 1200);

MM_2g	= new GH1("MM_2g", 	"MM_2g", 	200,  600, 1200);
MM_2g_hel0	= new GH1("MM_2g_hel0", 	"MM_2g_hel0", 	200,   600, 1200);
MM_2g_hel1	= new GH1("MM_2g_hel1", 	"MM_2g_hel1", 	200,   600, 1200);
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

//*******************************1DHistograms **********************************************


  H1IMcut = new GH1("H1IMcut","Invariant Mass with cut,    Helicity = +1", 250,0,250);

  H1theta_265_285 = new GH1("H1theta_265_285","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

   H1MMnocut = new GH1("H1MMnocut"," Missing Mass without cut   Helicity = +1", 200,600,1200);

   H1MMcut = new GH1("H1MMcut"," Missing Mass with cut   Helicity = +1", 200,600,1200);

   H1IMcut_0 = new GH1("H1IMcut_0","Invariant Mass 0<Theta<20,    Helicity = +1", 250,0,250);

   H1IMcut_20 = new GH1("H1IMcut_20","Invariant Mass 20<Theta<40,    Helicity = +1", 250,0,250);

   H1IMcut_40 = new GH1("H1IMcut_40","Invariant Mass 40<Theta<60,  Helicity = +1", 250,0,250);

   H1IMcut_60 = new GH1("H1IMcut_60","Invariant Mass 60<Theta<80,  Helicity = +1", 250,0,250);

   H1IMcut_80 = new GH1("H1IMcut_80","Invariant Mass 80<Theta<100,  Helicity = +1", 250,0,250);

   H1IMcut_100 = new GH1("H1IMcut_100","Invariant Mass 100<Theta<120,  Helicity = +1", 250,0,250);

   H1IMcut_120 = new GH1("H1IMcut_120","Invariant Mass 120<Theta<140,  Helicity = +1", 250,0,250);

   H1IMcut_140 = new GH1("H1IMcut_140","Invariant Mass 140<Theta<160,  Helicity = +1", 250,0,250);

   H1IMcut_160 = new GH1("H1IMcut_160","Invariant Mass 160<Theta<180,    Helicity = +1", 250,0,250);


   H1theta_285_305 = new GH1("H1theta_285_305","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

   H1MMnocut1 = new GH1("H1MMnocut1"," Missing Mass without cut   Helicity = +1", 200,600,1200);

   H1MMcut1 = new GH1("H1MMcut1","Missing Mass with cut   Helicity = +1", 200,600,1200);

   H1IMcut1_0 = new GH1("H1IMcut1_0","Invariant Mass 0<Theta<20,    Helicity = +1", 250,0,250);

   H1IMcut1_20 = new GH1("0IMcut1_20","Invariant Mass 20<Theta<40,    Helicity = +1", 250,0,250);

   H1IMcut1_40 = new GH1("H1IMcut1_40","Invariant Mass 40<Theta<60,  Helicity = +1", 250,0,250);

   H1IMcut1_60 = new GH1("H1IMcut1_60","Invariant Mass 60<Theta<80,  Helicity = +1", 250,0,250);

   H1IMcut1_80 = new GH1("H1IMcut1_80","Invariant Mass 80<Theta<100,  Helicity = +1", 250,0,250);

   H1IMcut1_100 = new GH1("H1IMcut1_100","Invariant Mass 100<Theta<120,  Helicity = +1", 250,0,250);

   H1IMcut1_120 = new GH1("H1IMcut1_120","Invariant Mass 120<Theta<140,  Helicity = +1", 250,0,250);

   H1IMcut1_140 = new GH1("H1IMcut1_140","Invariant Mass 140<Theta<160,  Helicity = +1", 250,0,250);

   H1IMcut1_160 = new GH1("H1IMcut1_160","Invariant Mass 160<Theta<180,    Helicity = +1", 200,0,200);


   H1theta_305_325 = new GH1("H1theta_305_325","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

   H1MMnocut2 = new GH1("H1MMnocut2"," Missing Mass without cut   Helicity = +1", 200,600,1200);

   H1MMcut2 = new GH1("H1mMcut2","Missing Mass with cut  Helicity = +1", 200,600,1200);

   H1IMcut2_0 = new GH1("H1IMcut2_0","Invariant Mass 0<Theta<20,    Helicity = +1", 250,0,250);

   H1IMcut2_20 = new GH1("H1IMcut2_20","Invariant Mass 20<Theta<40,    Helicity = +1", 250,0,250);

   H1IMcut2_40 = new GH1("H1IMcut2_40","Invariant Mass 40<Theta<60,  Helicity = +1", 250,0,250);

   H1IMcut2_60 = new GH1("H1IMcut2_60","Invariant Mass 60<Theta<80,  Helicity = +1", 250,0,250);

   H1IMcut2_80 = new GH1("H1IMcut2_80","Invariant Mass 80<Theta<100,  Helicity = +1", 250,0,250);

   H1IMcut2_100 = new GH1("H1IMcut2_100","Invariant Mass 100<Theta<120,  Helicity = +1", 250,0,250);

   H1IMcut2_120 = new GH1("H1IMcut2_120","Invariant Mass 120<Theta<140,  Helicity = +1", 250,0,250);

   H1IMcut2_140 = new GH1("H1IMcut2_140","Invariant Mass 140<Theta<160,  Helicity = +1", 250,0,250);

   H1IMcut2_160 = new GH1("H1IMcut2_160","Invariant Mass 160<Theta<180,    Helicity = +1", 250,0,250);

//**************************************************************************************************************
  H0IMcut = new GH1("H0IMcut","Invariant Mass with cut,    Helicity = +1", 250,0,250);

  H0theta_265_285 = new GH1("H0theta_265_285","Theta Distribution  0<Photon.Theta<180   Helicity=-1",36,0,180);

  H0MMnocut = new GH1("H0MMnocut"," Missing Mass without cut   Helicity = -1", 200,600,1200);

  H0MMcut = new GH1("H0MMcut","Missing Mass with cut  Helicity = -1", 200,600,1200);

  H0IMcut_0 = new GH1("H0IMcut_0","Invariant Mass 0<Theta<20,    Helicity = -1", 250,0,250);

  H0IMcut_20 = new GH1("H0IMcut_20","Invariant Mass 20<Theta<40,    Helicity = -1", 250,0,250);

  H0IMcut_40 = new GH1("H0IMcut_40","Invariant Mass 40<Theta<60,  Helicity = -1", 250,0,250);

  H0IMcut_60 = new GH1("H0IMcut_60","Invariant Mass 60<Theta<80,  Helicity = -1", 250,0,250);

  H0IMcut_80 = new GH1("H0IMcut_80","Invariant Mass 80<Theta<100,  Helicity = -1", 250,0,250);

  H0IMcut_100 = new GH1("H0IMcut_100","Invariant Mass 100<Theta<120,  Helicity = -1", 250,0,250);

  H0IMcut_120 = new GH1("H0IMcut_120","Invariant Mass 120<Theta<140,  Helicity = -1", 250,0,250);

  H0IMcut_140 = new GH1("H0IMcut_140","Invariant Mass 140<Theta<160,  Helicity = -1", 250,0,250);

  H0IMcut_160 = new GH1("H0IMcut_160","Invariant Mass 160<Theta<180,    Helicity = -1", 250,0,250);


  H0theta_285_305 = new GH1("H0theta_285_305","Theta Distribution  0<Photon.Theta<180   Helicity=-1",36,0,180);

  H0MMnocut1 = new GH1("H0MMnocut1"," Missing Mass without cut   Helicity = -1", 200,600,1200);

  H0MMcut1 = new GH1("H0MMcut1","Missing Mass with cut   Helicity = -1", 200,600,1200);

  H0IMcut1_0 = new GH1("H0IMcut1_0","Invariant Mass 0<Theta<20,    Helicity = -1", 250,0,250);

  H0IMcut1_20 = new GH1("H0IMcut1_20","Invariant Mass 20<Theta<40,    Helicity = -1", 250,0,250);

  H0IMcut1_40 = new GH1("H0IMcut1_40","Invariant Mass 40<Theta<60,  Helicity = -1", 250,0,250);

  H0IMcut1_60 = new GH1("H0IMcut1_60","Invariant Mass 60<Theta<80,  Helicity = -1", 250,0,250);

  H0IMcut1_80 = new GH1("H0IMcut1_80","Invariant Mass 80<Theta<100,  Helicity = -1", 250,0,250);

  H0IMcut1_100 = new GH1("H0IMcut1_100","Invariant Mass 100<Theta<120,  Helicity = -1", 250,0,250);

  H0IMcut1_120 = new GH1("H0IMcut1_120","Invariant Mass 120<Theta<140,  Helicity = -1", 250,0,250);

  H0IMcut1_140 = new GH1("H0IMcut1_140","Invariant Mass 140<Theta<160,  Helicity = -1", 250,0,250);

  H0IMcut1_160 = new GH1("H0IMcut1_160","Invariant Mass 160<Theta<180,    Helicity = -1", 250,0,250);


  H0theta_305_325 = new GH1("H0theta_305_325","Theta Distribution  0<Photon.Theta<180   Helicity=-1",36,0,180);

  H0MMnocut2 = new GH1("H0MMnocut2"," Missing Mass without cut   Helicity = -1", 200,600,1200);

  H0MMcut2 = new GH1("H0MMcut2","Missing  Mass with cut   Helicity = -1", 200,600,1200);

  H0IMcut2_0 = new GH1("H0IMcut2_0","Invariant Mass 0<Theta<20,    Helicity = -1", 250,0,250);

  H0IMcut2_20 = new GH1("H0IMcut2_20","Invariant Mass 20<Theta<40,    Helicity = -1", 250,0,250);

  H0IMcut2_40 = new GH1("H0IMcut2_40","Invariant Mass 40<Theta<60,  Helicity = -1", 250,0,250);

  H0IMcut2_60 = new GH1("H0IMcut2_60","Invariant Mass 60<Theta<80,  Helicity = -1", 250,0,250);

  H0IMcut2_80 = new GH1("H0IMcut2_80","Invariant Mass 80<Theta<100,  Helicity = -1", 250,0,250);

  H0IMcut2_100 = new GH1("H0IMcut2_100","Invariant Mass 100<Theta<120,  Helicity = -1", 250,0,250);

  H0IMcut2_120 = new GH1("H0IMcut2_120","Invariant Mass 120<Theta<140,  Helicity = -1", 250,0,250);

  H0IMcut2_140 = new GH1("H0IMcut2_140","Invariant Mass 140<Theta<160,  Helicity = -1", 250,0,250);

  H0IMcut2_160 = new GH1("H0IMcut2_160","Invariant Mass 160<Theta<180,    Helicity = -1", 250,0,250);


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

                            FillDilliAsym( *GetTagger(),*GetNeutralPions(), H1IMcut,
                                           H1MMnocut, H1MMcut,  H1theta_265_285, H1IMcut_0, H1IMcut_20, H1IMcut_40, H1IMcut_60, H1IMcut_80, H1IMcut_100, H1IMcut_120,H1IMcut_140,H1IMcut_160,
                                           H1MMnocut1,H1MMcut1, H1theta_285_305, H1IMcut1_0,H1IMcut1_20, H1IMcut1_40,H1IMcut1_60, H1IMcut1_80, H1IMcut1_100, H1IMcut1_120, H1IMcut1_140,H1IMcut1_160,
                                           H1MMnocut2,H1MMcut2, H1theta_305_325, H1IMcut2_0,H1IMcut2_20, H1IMcut2_40,H1IMcut2_60, H1IMcut2_80, H1IMcut2_100, H1IMcut2_120, H1IMcut2_140,H1IMcut2_160, kTRUE);


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

                             FillDilliAsym( *GetTagger(), *GetNeutralPions(), H0IMcut,
                                          H0MMnocut,  H0MMcut,   H0theta_265_285,  H0IMcut_0, H0IMcut_20, H0IMcut_40, H0IMcut_60, H0IMcut_80, H0IMcut_100, H0IMcut_120,H0IMcut_140,H0IMcut_160,
                                          H0MMnocut1, H0MMcut1,  H0theta_285_305,  H0IMcut1_0,H0IMcut1_20, H0IMcut1_40,H0IMcut1_60, H0IMcut1_80, H0IMcut1_100, H0IMcut1_120, H0IMcut1_140,H0IMcut1_160,
                                          H0MMnocut2, H0MMcut2,  H0theta_305_325,  H0IMcut2_0,H0IMcut2_20, H0IMcut2_40,H0IMcut2_60, H0IMcut2_80, H0IMcut2_100, H0IMcut2_120, H0IMcut2_140,H0IMcut2_160, kTRUE);

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
void PPPi0Physics::FillDilliAsym(const GTreeTagger& taggertree,  const GTreeMeson& pi0tree, GH1* IMcut,
                               GH1* MMnocut, GH1* MMcut, GH1* theta_265_285, GH1* IMcut_0,GH1* IMcut_20, GH1* IMcut_40,GH1* IMcut_60, GH1* IMcut_80, GH1* IMcut_100,
                               GH1* IMcut_120,GH1* IMcut_140,GH1* IMcut_160,
                               GH1* MMnocut1,GH1* MMcut1,  GH1* theta_285_305, GH1* IMcut1_0,GH1* IMcut1_20, GH1* IMcut1_40,GH1* IMcut1_60, GH1* IMcut1_80, GH1* IMcut1_100,
                               GH1* IMcut1_120,GH1* IMcut1_140,GH1* IMcut1_160,
                               GH1* MMnocut2, GH1* MMcut2,  GH1* theta_305_325, GH1* IMcut2_0,GH1* IMcut2_20, GH1* IMcut2_40,GH1* IMcut2_60, GH1* IMcut2_80, GH1* IMcut2_100,
                               GH1* IMcut2_120,GH1* IMcut2_140,GH1* IMcut2_160,  Bool_t TaggerBinning)
{
  if ((pi0tree.GetNSubParticles(0) == 2) && (pi0tree.GetNSubPhotons(0) == 2))
   {
    for (Int_t i = 0; i < pi0tree.GetNParticles(); i++)
       {
        for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
          {
            if ((pi0tree.GetMass(i)<=150)&&(pi0tree.GetMass(i)>=120))
              {
               FillMass(pi0tree,i,j,IMcut);
                 if ((taggertree.GetTaggedEnergy(j)>=265)&&( taggertree.GetTaggedEnergy(j)<285))
                   {
                     Double_t time;
                      time = GetTagger()->GetTaggedTime(j) - pi0tree.GetTime(i);
                       FillMissingMass(pi0tree,i,j,MMnocut);
                         if ((CalcMissingMass(pi0tree,0,j)<970)&&(CalcMissingMass(pi0tree,0,j)>910))
                          {
                             FillMissingMass(pi0tree,i,j,MMcut);
                              theta_265_285->Fill(pi0tree.GetTheta(0),time);

                                if ((pi0tree.GetTheta(0)>=0)&&(pi0tree.GetTheta(0)<20))
                                   {
                                     FillMass(pi0tree,i,j,IMcut_0);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=20)&&(pi0tree.GetTheta(0)<40))
                                        {
                                            FillMass(pi0tree,i,j,IMcut_20);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=40)&&(pi0tree.GetTheta(0)<60))
                                        {
                                            FillMass(pi0tree,i,j,IMcut_40);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=60)&&(pi0tree.GetTheta(0)<80))
                                        {
                                            FillMass(pi0tree,i,j,IMcut_60);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=80)&&(pi0tree.GetTheta(0)<100))
                                        {
                                            FillMass(pi0tree,i,j,IMcut_80);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=100)&&(pi0tree.GetTheta(0)<120))
                                        {
                                            FillMass(pi0tree,i,j,IMcut_100);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=120)&&(pi0tree.GetTheta(0)<140))
                                        {
                                            FillMass(pi0tree,i,j,IMcut_120);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=140)&&(pi0tree.GetTheta(0)<160))
                                        {
                                            FillMass(pi0tree,i,j,IMcut_140);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=160)&&(pi0tree.GetTheta(0)<180))
                                        {
                                            FillMass(pi0tree,i,j,IMcut_160);
                                        }
                               }

                      }

            else if ((taggertree.GetTaggedEnergy(j)>=285)&&( taggertree.GetTaggedEnergy(j)<305))
             {
                 Double_t time;
                  time = GetTagger()->GetTaggedTime(j) - pi0tree.GetTime(i);
                   FillMissingMass(pi0tree,i,j,MMnocut1);
                      if ((CalcMissingMass(pi0tree,0,j)<970)&&(CalcMissingMass(pi0tree,0,j)>910))
                         {
                           FillMissingMass(pi0tree,i,j,MMcut1);
                             theta_285_305->Fill(pi0tree.GetTheta(0),time);

                                if ((pi0tree.GetTheta(0)>=0)&&(pi0tree.GetTheta(0)<20))
                                  {
                                     FillMass(pi0tree,i,j,IMcut1_0);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=20)&&(pi0tree.GetTheta(0)<40))
                                        {
                                            FillMass(pi0tree,i,j,IMcut1_20);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=40)&&(pi0tree.GetTheta(0)<60))
                                        {
                                            FillMass(pi0tree,i,j,IMcut1_40);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=60)&&(pi0tree.GetTheta(0)<80))
                                        {
                                            FillMass(pi0tree,i,j,IMcut1_60);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=80)&&(pi0tree.GetTheta(0)<100))
                                        {
                                            FillMass(pi0tree,i,j,IMcut1_80);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=100)&&(pi0tree.GetTheta(0)<120))
                                        {
                                            FillMass(pi0tree,i,j,IMcut1_100);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=120)&&(pi0tree.GetTheta(0)<140))
                                        {
                                            FillMass(pi0tree,i,j,IMcut1_120);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=140)&&(pi0tree.GetTheta(0)<160))
                                        {
                                            FillMass(pi0tree,i,j,IMcut1_140);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=160)&&(pi0tree.GetTheta(0)<180))
                                        {
                                            FillMass(pi0tree,i,j,IMcut1_160);
                                        }
                               }
                      }


           else if ((taggertree.GetTaggedEnergy(j)>=305)&&( taggertree.GetTaggedEnergy(j)<325))
             {
               Double_t time;
                 time = GetTagger()->GetTaggedTime(j) - pi0tree.GetTime(i);
                   FillMissingMass(pi0tree,i,j,MMnocut2);
                     if ((CalcMissingMass(pi0tree,0,j)<970)&&(CalcMissingMass(pi0tree,0,j)>910))
                        {
                         FillMissingMass(pi0tree,i,j,MMcut2);
                           theta_305_325->Fill(pi0tree.GetTheta(0),time);

                             if ((pi0tree.GetTheta(0)>=0)&&(pi0tree.GetTheta(0)<20))
                                {
                                  FillMass(pi0tree,i,j,IMcut2_0);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=20)&&(pi0tree.GetTheta(0)<40))
                                        {
                                            FillMass(pi0tree,i,j,IMcut2_20);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=40)&&(pi0tree.GetTheta(0)<60))
                                        {
                                            FillMass(pi0tree,i,j,IMcut2_40);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=60)&&(pi0tree.GetTheta(0)<80))
                                        {
                                            FillMass(pi0tree,i,j,IMcut2_60);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=80)&&(pi0tree.GetTheta(0)<100))
                                        {
                                            FillMass(pi0tree,i,j,IMcut2_80);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=100)&&(pi0tree.GetTheta(0)<120))
                                        {
                                            FillMass(pi0tree,i,j,IMcut2_100);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=120)&&(pi0tree.GetTheta(0)<140))
                                        {
                                            FillMass(pi0tree,i,j,IMcut2_120);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=140)&&(pi0tree.GetTheta(0)<160))
                                        {
                                            FillMass(pi0tree,i,j,IMcut2_140);
                                        }
                                        else if ((pi0tree.GetTheta(0)>=160)&&(pi0tree.GetTheta(0)<180))
                                        {
                                            FillMass(pi0tree,i,j,IMcut2_160);
                                        }

                                }
                           }
                       }

                 }

            }
       }
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





