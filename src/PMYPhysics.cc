#include "PMYPhysics.h"

PMYPhysics::PMYPhysics()
{ 

//************************1D Histograms*******************************************************

time 	= new GH1("time", 	"time", 	1400, -700, 700);
time_hel0 	= new GH1("time_hel0", 	"time_hel0", 	1400, -700, 700);
time_hel1 	= new GH1("time_hel1", 	"time_hel1", 	1400, -700, 700);

//***********************************************************************************************

//MM		= new GH1("MM", 	"MM", 	 	500,   700, 1200);
MM_hel0		= new GH1("MM_hel0", 	"MM_hel0", 	 	500,   700, 1200);
MM_hel1		= new GH1("MM_hel1", 	"MM_hel1", 	 	500,   700, 1200);

//*********************************************************************************************

//**********************************************************************************************
//**********************************************************************************************

//**********************************************************************************************


//opening_angle 	= new GH1("opening_angle","opening_angle",180,0,180);
//opening_angle_cuts 	= new GH1("opening_angle_cuts","opening_angle_cuts",180,0,180);
//***********************************************************************************************

//PhotonEnergy    = new GH1 ("PhotonEnergy", "PhotonEnergy",  450, 0,   450);
//PhotonEnergy_hel0    = new GH1 ("PhotonEnergy_hel0", "PhotonEnergy_hel0",  450, 0,   450);
//PhotonEnergy_hel1    = new GH1 ("PhotonEnergy_hel1", "PhotonEnergy_hel1",  450, 0,   450);

//*******************************************************************************************************

//TaggerChannel    = new GH1 ("TaggerChannel", "TaggerChannel",  352, 0,   352);
//TaggerChannel_hel0    = new GH1 ("TaggerChannel_hel0", "TaggerChannel_hel0",  352, 0,   352);
//TaggerChannel_hel1    = new GH1 ("TaggerChannel_hel1", "TaggerChannel_hel1",  352, 0,   352);

//********************************************************************************************
    H1theta_265_285 = new GH1("H1theta_265_285","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

    H1MMcut = new GH1("H1MMcut","Rootino Missing Mass with no  OA-cut Helicity = +1", 200,600,1200);

    H1MMcut_0 = new GH1("H1MMcut_0","Rootino Missing Mass 0<Theta<20,  OA-cut  Helicity = +1", 200,600,1200);

    H1MMcut_20 = new GH1("H1MMcut_20","Rootino Missing Mass 20<Theta<40,  OA-cut  Helicity = +1", 200,600,1200);

    H1MMcut_40 = new GH1("H1MMcut_40","Rootino Missing Mass 40<Theta<60, OA-cut Helicity = +1", 200,600,1200);

    H1MMcut_60 = new GH1("H1MMcut_60","Rootino Missing Mass 60<Theta<80, OA-cut Helicity = +1", 200,600,1200);

    H1MMcut_80 = new GH1("H1MMcut_80","Rootino Missing Mass 80<Theta<100, OA-cut Helicity = +1", 200,600,1200);

    H1MMcut_100 = new GH1("H1MMcut_100","Rootino Missing Mass 100<Theta<120, OA-cut Helicity = +1", 200,600,1200);

    H1MMcut_120 = new GH1("H1MMcut_120","Rootino Missing Mass 120<Theta<140, OA-cut Helicity = +1", 200,600,1200);

    H1MMcut_140 = new GH1("H1MMcut_140","Rootino Missing Mass 140<Theta<160, OA-cut Helicity = +1", 200,600,1200);

    H1MMcut_160 = new GH1("H1MMcut_160","Rootino Missing Mass 160<Theta<180,  OA-cut  Helicity = +1", 200,600,1200);


    H1theta_285_305 = new GH1("H1theta_285_305","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

    H1MMcut1 = new GH1("H1MMcut1","Rootino Missing Mass with no  OA-cut Helicity = +1", 200,600,1200);

    H1MMcut1_0 = new GH1("H1MMcut1_0","Rootino Missing Mass 0<Theta<20,  OA-cut  Helicity = +1", 200,600,1200);

    H1MMcut1_20 = new GH1("0MMcut1_20","Rootino Missing Mass 20<Theta<40,  OA-cut  Helicity = +1", 200,600,1200);

    H1MMcut1_40 = new GH1("H1MMcut1_40","Rootino Missing Mass 40<Theta<60, OA-cut Helicity = +1", 200,600,1200);

    H1MMcut1_60 = new GH1("H1MMcut1_60","Rootino Missing Mass 60<Theta<80, OA-cut Helicity = +1", 200,600,1200);

    H1MMcut1_80 = new GH1("H1MMcut1_80","Rootino Missing Mass 80<Theta<100, OA-cut Helicity = +1", 200,600,1200);

    H1MMcut1_100 = new GH1("H1MMcut1_100","Rootino Missing Mass 100<Theta<120, OA-cut Helicity = +1", 200,600,1200);

    H1MMcut1_120 = new GH1("H1MMcut1_120","Rootino Missing Mass 120<Theta<140, OA-cut Helicity = +1", 200,600,1200);

    H1MMcut1_140 = new GH1("H1MMcut1_140","Rootino Missing Mass 140<Theta<160, OA-cut Helicity = +1", 200,600,1200);

    H1MMcut1_160 = new GH1("H1MMcut1_160","Rootino Missing Mass 160<Theta<180,  OA-cut  Helicity = +1", 200,600,1200);


    H1theta_305_325 = new GH1("H1theta_305_325","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

    H1MMcut2 = new GH1("H1MMcut2","Rootino Missing Mass with no  OA-cut Helicity = +1", 200,600,1200);

    H1MMcut2_0 = new GH1("H1MMcut2_0","Rootino Missing Mass 0<Theta<20,  OA-cut  Helicity = +1", 200,600,1200);

    H1MMcut2_20 = new GH1("H1MMcut2_20","Rootino Missing Mass 20<Theta<40,  OA-cut  Helicity = +1", 200,600,1200);

    H1MMcut2_40 = new GH1("H1MMcut2_40","Rootino Missing Mass 40<Theta<60, OA-cut Helicity = +1", 200,600,1200);

    H1MMcut2_60 = new GH1("H1MMcut2_60","Rootino Missing Mass 60<Theta<80, OA-cut Helicity = +1", 200,600,1200);

    H1MMcut2_80 = new GH1("H1MMcut2_80","Rootino Missing Mass 80<Theta<100, OA-cut Helicity = +1", 200,600,1200);

    H1MMcut2_100 = new GH1("H1MMcut2_100","Rootino Missing Mass 100<Theta<120, OA-cut Helicity = +1", 200,600,1200);

    H1MMcut2_120 = new GH1("H1MMcut2_120","Rootino Missing Mass 120<Theta<140, OA-cut Helicity = +1", 200,600,1200);

    H1MMcut2_140 = new GH1("H1MMcut2_140","Rootino Missing Mass 140<Theta<160, OA-cut Helicity = +1", 200,600,1200);

    H1MMcut2_160 = new GH1("H1MMcut2_160","Rootino Missing Mass 160<Theta<180,  OA-cut  Helicity = +1", 200,600,1200);

//**************************************************************************************************************
   H0theta_265_285 = new GH1("H0theta_265_285","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

   H0MMcut = new GH1("H0MMcut","Rootino Missing Mass with no  OA-cut Helicity = +1", 200,600,1200);

   H0MMcut_0 = new GH1("H0MMcut_0","Rootino Missing Mass 0<Theta<20,  OA-cut  Helicity = +1", 200,600,1200);

   H0MMcut_20 = new GH1("H0MMcut_20","Rootino Missing Mass 20<Theta<40,  OA-cut  Helicity = +1", 200,600,1200);

   H0MMcut_40 = new GH1("H0MMcut_40","Rootino Missing Mass 40<Theta<60, OA-cut Helicity = +1", 200,600,1200);

   H0MMcut_60 = new GH1("H0MMcut_60","Rootino Missing Mass 60<Theta<80, OA-cut Helicity = +1", 200,600,1200);

   H0MMcut_80 = new GH1("H0MMcut_80","Rootino Missing Mass 80<Theta<100, OA-cut Helicity = +1", 200,600,1200);

   H0MMcut_100 = new GH1("H0MMcut_100","Rootino Missing Mass 100<Theta<120, OA-cut Helicity = +1", 200,600,1200);

   H0MMcut_120 = new GH1("H0MMcut_120","Rootino Missing Mass 120<Theta<140, OA-cut Helicity = +1", 200,600,1200);

   H0MMcut_140 = new GH1("H0MMcut_140","Rootino Missing Mass 140<Theta<160, OA-cut Helicity = +1", 200,600,1200);

   H0MMcut_160 = new GH1("H0MMcut_160","Rootino Missing Mass 160<Theta<180,  OA-cut  Helicity = +1", 200,600,1200);


   H0theta_285_305 = new GH1("H0theta_285_305","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

   H0MMcut1 = new GH1("H0MMcut1","Rootino Missing Mass with no  OA-cut Helicity = +1", 200,600,1200);

   H0MMcut1_0 = new GH1("H0MMcut1_0","Rootino Missing Mass 0<Theta<20,  OA-cut  Helicity = +1", 200,600,1200);

   H0MMcut1_20 = new GH1("H0MMcut1_20","Rootino Missing Mass 20<Theta<40,  OA-cut  Helicity = +1", 200,600,1200);

   H0MMcut1_40 = new GH1("H0MMcut1_40","Rootino Missing Mass 40<Theta<60, OA-cut Helicity = +1", 200,600,1200);

   H0MMcut1_60 = new GH1("H0MMcut1_60","Rootino Missing Mass 60<Theta<80, OA-cut Helicity = +1", 200,600,1200);

   H0MMcut1_80 = new GH1("H0MMcut1_80","Rootino Missing Mass 80<Theta<100, OA-cut Helicity = +1", 200,600,1200);

   H0MMcut1_100 = new GH1("H0MMcut1_100","Rootino Missing Mass 100<Theta<120, OA-cut Helicity = +1", 200,600,1200);

   H0MMcut1_120 = new GH1("H0MMcut1_120","Rootino Missing Mass 120<Theta<140, OA-cut Helicity = +1", 200,600,1200);

   H0MMcut1_140 = new GH1("H0MMcut1_140","Rootino Missing Mass 140<Theta<160, OA-cut Helicity = +1", 200,600,1200);

   H0MMcut1_160 = new GH1("H0MMcut1_160","Rootino Missing Mass 160<Theta<180,  OA-cut  Helicity = +1", 200,600,1200);


   H0theta_305_325 = new GH1("H0theta_305_325","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

   H0MMcut2 = new GH1("H0MMcut2","Rootino Missing Mass with no  OA-cut Helicity = +1", 200,600,1200);

   H0MMcut2_0 = new GH1("H0MMcut2_0","Rootino Missing Mass 0<Theta<20,  OA-cut  Helicity = +1", 200,600,1200);

   H0MMcut2_20 = new GH1("H0MMcut2_20","Rootino Missing Mass 20<Theta<40,  OA-cut  Helicity = +1", 200,600,1200);

   H0MMcut2_40 = new GH1("H0MMcut2_40","Rootino Missing Mass 40<Theta<60, OA-cut Helicity = +1", 200,600,1200);

   H0MMcut2_60 = new GH1("H0MMcut2_60","Rootino Missing Mass 60<Theta<80, OA-cut Helicity = +1", 200,600,1200);

   H0MMcut2_80 = new GH1("H0MMcut2_80","Rootino Missing Mass 80<Theta<100, OA-cut Helicity = +1", 200,600,1200);

   H0MMcut2_100 = new GH1("H0MMcut2_100","Rootino Missing Mass 100<Theta<120, OA-cut Helicity = +1", 200,600,1200);

   H0MMcut2_120 = new GH1("H0MMcut2_120","Rootino Missing Mass 120<Theta<140, OA-cut Helicity = +1", 200,600,1200);

   H0MMcut2_140 = new GH1("H0MMcut2_140","Rootino Missing Mass 140<Theta<160, OA-cut Helicity = +1", 200,600,1200);

   H0MMcut2_160 = new GH1("H0MMcut2_160","Rootino Missing Mass 160<Theta<180,  OA-cut  Helicity = +1", 200,600,1200);



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

//******************************************************************************


   //**********************************************************************
    Int_t nerror = 0;
    nerror = GetTrigger()->GetNErrors();
    Bool_t hel = GetTrigger()->GetHelicity();
    if (nerror==0) {
    // cout << "helicity  "<< hel << endl;
        if (hel == kTRUE)
        {

                            FillTime(*GetNeutralPions(),time_hel0);
                            FillMissingMass(*GetNeutralPions(),MM_hel0, kTRUE);
                            FillDilliComp( *GetTagger(),*GetRootinos(),*GetPhotons(), 20,
                                                            H1theta_265_285, H1MMcut, H1MMcut_0, H1MMcut_20, H1MMcut_40, H1MMcut_60, H1MMcut_80, H1MMcut_100, H1MMcut_120,H1MMcut_140,H1MMcut_160,
                                                            H1theta_285_305, H1MMcut1,H1MMcut1_0,H1MMcut1_20, H1MMcut1_40,H1MMcut1_60, H1MMcut1_80, H1MMcut1_100, H1MMcut1_120, H1MMcut1_140,H1MMcut1_160,
                                                            H1theta_305_325, H1MMcut2,H1MMcut2_0,H1MMcut2_20, H1MMcut2_40,H1MMcut2_60, H1MMcut2_80, H1MMcut2_100, H1MMcut2_120, H1MMcut2_140,H1MMcut2_160);

        }
        else
        {
                             FillTime(*GetNeutralPions(),time_hel1);
                             FillMissingMass(*GetNeutralPions(),MM_hel1, kTRUE);
                             FillDilliComp( *GetTagger(), *GetRootinos(),*GetPhotons(), 20,
                                                             H0theta_265_285, H0MMcut, H0MMcut_0, H0MMcut_20, H0MMcut_40, H0MMcut_60, H0MMcut_80, H0MMcut_100, H0MMcut_120,H0MMcut_140,H0MMcut_160,
                                                             H0theta_285_305, H0MMcut1,H0MMcut1_0,H0MMcut1_20, H0MMcut1_40,H0MMcut1_60, H0MMcut1_80, H0MMcut1_100, H0MMcut1_120, H0MMcut1_140,H0MMcut1_160,
                                                             H0theta_305_325, H0MMcut2,H0MMcut2_0,H0MMcut2_20, H0MMcut2_40,H0MMcut2_60, H0MMcut2_80, H0MMcut2_100, H0MMcut2_120, H0MMcut2_140,H0MMcut2_160);


        }



    }
  //**********************************************************************


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

//************************************************************************************************************

    //cout << scale_factor_global << endl;

   // gHist->Scale(Scal_factor_target_pol);
//**************************************************************************************************************
void PMYPhysics::FillDilliComp(const GTreeTagger& taggertree, const GTreeParticle& rootinotree, const GTreeParticle& photontree, Int_t angle,
                               GH1* theta_265_285,GH1* MMcut,GH1* MMcut_0,GH1* MMcut_20, GH1* MMcut_40,GH1* MMcut_60, GH1* MMcut_80, GH1* MMcut_100,
                               GH1* MMcut_120,GH1* MMcut_140,GH1* MMcut_160,
                               GH1* theta_285_305,GH1* MMcut1,GH1* MMcut1_0,GH1* MMcut1_20, GH1* MMcut1_40,GH1* MMcut1_60, GH1* MMcut1_80, GH1* MMcut1_100,
                               GH1* MMcut1_120,GH1* MMcut1_140,GH1* MMcut1_160,
                               GH1* theta_305_325,GH1* MMcut2,GH1* MMcut2_0,GH1* MMcut2_20, GH1* MMcut2_40,GH1* MMcut2_60, GH1* MMcut2_80, GH1* MMcut2_100,
                               GH1* MMcut2_120,GH1* MMcut2_140,GH1* MMcut2_160)
{
    for (Int_t i = 0; i < photontree.GetNParticles(); i++)
    {
        for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
        {

            if ((taggertree.GetTaggedEnergy(j)>=265)&&( taggertree.GetTaggedEnergy(j)<285)&&(photontree.GetNParticles()==1))
             {
                 Double_t time;
                  time = GetTagger()->GetTaggedTime(j) - photontree.GetTime(i);



                       if ((CalcMissingMass(photontree,0,j)<970)&&(CalcMissingMass(photontree,0,j)>910))
                          {
                            theta_265_285->Fill(photontree.GetTheta(0),time);
                               // cout <<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!Dilli " << endl;

                               }

                                 if  (Opening_Angle(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
                                   {
                                           FillMissingMass(photontree,i,j,MMcut);

                                        if ((photontree.GetTheta(0)>=0)&&(photontree.GetTheta(0)<20))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut_0);
                                        }
                                        else if ((photontree.GetTheta(0)>=20)&&(photontree.GetTheta(0)<40))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut_20);
                                        }
                                        else if ((photontree.GetTheta(0)>=40)&&(photontree.GetTheta(0)<60))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut_40);
                                        }
                                        else if ((photontree.GetTheta(0)>=60)&&(photontree.GetTheta(0)<80))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut_60);
                                        }
                                        else if ((photontree.GetTheta(0)>=80)&&(photontree.GetTheta(0)<100))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut_80);
                                        }
                                        else if ((photontree.GetTheta(0)>=100)&&(photontree.GetTheta(0)<120))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut_100);
                                        }
                                        else if ((photontree.GetTheta(0)>=120)&&(photontree.GetTheta(0)<140))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut_120);
                                        }
                                        else if ((photontree.GetTheta(0)>=140)&&(photontree.GetTheta(0)<160))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut_140);
                                        }
                                        else if ((photontree.GetTheta(0)>=160)&&(photontree.GetTheta(0)<180))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut_160);
                                         }

                                      }


                      }

            if ((taggertree.GetTaggedEnergy(j)>=285)&&( taggertree.GetTaggedEnergy(j)<305)&&(photontree.GetNParticles()==1))
             {
                 Double_t time;
                  time = GetTagger()->GetTaggedTime(j) - photontree.GetTime(i);



                       if ((CalcMissingMass(photontree,0,j)<970)&&(CalcMissingMass(photontree,0,j)>910))
                          {
                            theta_285_305->Fill(photontree.GetTheta(0),time);

                               }

                                 if  (Opening_Angle(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
                                   {
                                             FillMissingMass(photontree,i,j,MMcut1);

                                        if ((photontree.GetTheta(0)>=0)&&(photontree.GetTheta(0)<20))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut1_0);
                                        }
                                        else if ((photontree.GetTheta(0)>=20)&&(photontree.GetTheta(0)<40))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut1_20);
                                        }
                                        else if ((photontree.GetTheta(0)>=40)&&(photontree.GetTheta(0)<60))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut1_40);
                                        }
                                        else if ((photontree.GetTheta(0)>=60)&&(photontree.GetTheta(0)<80))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut1_60);
                                        }
                                        else if ((photontree.GetTheta(0)>=80)&&(photontree.GetTheta(0)<100))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut1_80);
                                        }
                                        else if ((photontree.GetTheta(0)>=100)&&(photontree.GetTheta(0)<120))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut1_100);
                                        }
                                        else if ((photontree.GetTheta(0)>=120)&&(photontree.GetTheta(0)<140))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut1_120);
                                        }
                                        else if ((photontree.GetTheta(0)>=140)&&(photontree.GetTheta(0)<160))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut1_140);
                                        }
                                        else if ((photontree.GetTheta(0)>=160)&&(photontree.GetTheta(0)<180))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut1_160);
                                         }

                                      }


                      }




            if ((taggertree.GetTaggedEnergy(j)>=305)&&( taggertree.GetTaggedEnergy(j)<325)&&(photontree.GetNParticles()==1))
             {
                 Double_t time;
                  time = GetTagger()->GetTaggedTime(j) - photontree.GetTime(i);



                       if ((CalcMissingMass(photontree,0,j)<970)&&(CalcMissingMass(photontree,0,j)>910))
                          {
                            theta_305_325->Fill(photontree.GetTheta(0),time);

                               }

                                 if  (Opening_Angle(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))<angle*TMath::Pi()/180)
                                   {
                                            FillMissingMass(photontree,i,j,MMcut2);

                                        if ((photontree.GetTheta(0)>=0)&&(photontree.GetTheta(0)<20))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut2_0);
                                        }
                                        else if ((photontree.GetTheta(0)>=20)&&(photontree.GetTheta(0)<40))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut2_20);
                                        }
                                        else if ((photontree.GetTheta(0)>=40)&&(photontree.GetTheta(0)<60))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut2_40);
                                        }
                                        else if ((photontree.GetTheta(0)>=60)&&(photontree.GetTheta(0)<80))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut2_60);
                                        }
                                        else if ((photontree.GetTheta(0)>=80)&&(photontree.GetTheta(0)<100))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut2_80);
                                        }
                                        else if ((photontree.GetTheta(0)>=100)&&(photontree.GetTheta(0)<120))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut2_100);
                                        }
                                        else if ((photontree.GetTheta(0)>=120)&&(photontree.GetTheta(0)<140))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut2_120);
                                        }
                                        else if ((photontree.GetTheta(0)>=140)&&(photontree.GetTheta(0)<160))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut2_140);
                                        }
                                        else if ((photontree.GetTheta(0)>=160)&&(photontree.GetTheta(0)<180))
                                        {
                                            FillMissingMass(photontree,i,j,MMcut2_160);
                                         }

                                      }


                      }







            }
       }
}

Double_t PMYPhysics::Opening_Angle(const TLorentzVector& t1, const TLorentzVector& t2 )
       {
            TVector3 p1 = t1.Vect();
            TVector3 p2 = t2.Vect();
            return p1.Angle(p2);
       }
