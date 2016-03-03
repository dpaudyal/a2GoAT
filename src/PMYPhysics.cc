#include "PMYPhysics.h"

PMYPhysics::PMYPhysics()
{

//************************1D Histograms*******************************************************
//time 	= new GH1("time", 	"time", 	1400, -700, 700);
//time_hel0 	= new GH1("time_hel0", 	"time_hel0", 	1400, -700, 700);
//time_hel1 	= new GH1("time_hel1", 	"time_hel1", 	1400, -700, 700);
//***********************************************************************************************
//MM		= new GH1("MM", 	"MM", 	 	500,   700, 1200);
//MM_hel0		= new GH1("MM_hel0", 	"MM_hel0", 	 	500,   700, 1200);
//MM_hel1		= new GH1("MM_hel1", 	"MM_hel1", 	 	500,   700, 1200);

//*********************************************************************************************
//********************************************************************************************
       H1MM_nocut               = new GH1("H1MM_nocut","Rootino Missing Mass with no cut Helicity = +1", 200,600,1200);

       H1Cop_phi_diff_nocut     = new GH1("H1Cop_phi_diff_nocut", "Coplanarity angle for Helicity = +1 ",360,0,360);

       H1OA_nocut		     = new GH1("H1OA_nocut",	"Opening Angle for Helicity = +1" ,180,0, 180);

       H1theta_nocut            = new GH1("H1theta_nocut","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

       H1MM_Egcut               = new GH1("H1MM_Egcut","Rootino Missing Mass with Eg cut Helicity = +1", 200,600,1200);

       H1Cop_phi_diff_Egcut     = new GH1("H1Cop_phi_diff_Egcut", "Coplanarity angle for Helicity = +1 ",360,0,360);

       H1OA_Egcut		     = new GH1("H1OA_Egcut",	"Opening Angle for Helicity = +1" ,180,0, 180);

       H1theta_Egcut            = new GH1("H1theta_Egcut","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

       H1MM_EgMMcut             = new GH1("H1MM_EgMMcut","Rootino Missing Mass with Eg and MM cut Helicity = +1", 200,600,1200);

       H1Cop_phi_diff_EgMMcut   = new GH1("H1Cop_phi_diff_EgMMcut", "Coplanarity angle for Helicity = +1 ",360,0,360);

       H1OA_EgMMcut             = new GH1("H1OA_EgMMcut",	"Opening Angle for Helicity = +1" ,180,0, 180);

       H1theta_EgMMcut          = new GH1("H1theta_EgMMcut","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

       H1MM_EgMMOAcut           = new GH1("H1MM_EgMMOAcut","Rootino Missing Mass with   Eg,MM and OA cut Helicity = +1", 200,600,1200);

       H1Cop_phi_diff_EgMMOAcut = new GH1("H1Cop_phi_diff_EgMMOAcut", "Coplanarity angle for Helicity = +1 ",360,0,360);

       H1OA_EgMMOAcut           = new GH1("H1OA_EgMMOAcut",	"Opening Angle for Helicity = +1" ,180,0, 180);

       H1theta_EgMMOAcut        = new GH1("H1theta_EgMMOAcut","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

       H1ctheta_EgMMOAcut       = new GH1("H1ctheta_EgMMOAcut","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

       H1MMcut_0                = new GH1("H1MMcut_0","Rootino Missing Mass 0<Theta<20,  OA-cut  Helicity = +1", 200,600,1200);

       H1MMcut_20               = new GH1("H1MMcut_20","Rootino Missing Mass 20<Theta<40,  OA-cut  Helicity = +1", 200,600,1200);

       H1MMcut_40               = new GH1("H1MMcut_40","Rootino Missing Mass 40<Theta<60, OA-cut Helicity = +1", 200,600,1200);

       H1MMcut_60               = new GH1("H1MMcut_60","Rootino Missing Mass 60<Theta<80, OA-cut Helicity = +1", 200,600,1200);

       H1MMcut_80               = new GH1("H1MMcut_80","Rootino Missing Mass 80<Theta<100, OA-cut Helicity = +1", 200,600,1200);

       H1MMcut_100              = new GH1("H1MMcut_100","Rootino Missing Mass 100<Theta<120, OA-cut Helicity = +1", 200,600,1200);

       H1MMcut_120              = new GH1("H1MMcut_120","Rootino Missing Mass 120<Theta<140, OA-cut Helicity = +1", 200,600,1200);

       H1MMcut_140              = new GH1("H1MMcut_140","Rootino Missing Mass 140<Theta<160, OA-cut Helicity = +1", 200,600,1200);

       H1MMcut_160              = new GH1("H1MMcut_160","Rootino Missing Mass 160<Theta<180,  OA-cut  Helicity = +1", 200,600,1200);


       H1MM_Egcut1               = new GH1("H1MM_Egcut1","Rootino Missing Mass with Eg cut Helicity = +1", 200,600,1200);

       H1Cop_phi_diff_Egcut1     = new GH1("H1Cop_phi_diff_Egcut1", "Coplanarity angle for Helicity = +1 ",360,0,360);

       H1OA_Egcut1		     = new GH1("H1OA_Egcut1",	"Opening Angle for Helicity = +1" ,180,0, 180);

       H1theta_Egcut1            = new GH1("H1theta_Egcut1","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

       H1MM_EgMMcut1             = new GH1("H1MM_EgMMcut1","Rootino Missing Mass with Eg and MM cut Helicity = +1", 200,600,1200);

       H1Cop_phi_diff_EgMMcut1   = new GH1("H1Cop_phi_diff_EgMMcut1", "Coplanarity angle for Helicity = +1 ",360,0,360);

       H1OA_EgMMcut1             = new GH1("H1OA_EgMMcut1",	"Opening Angle for Helicity = +1" ,180,0, 180);

       H1theta_EgMMcut1          = new GH1("H1theta_EgMMcut1","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

       H1MM_EgMMOAcut1           = new GH1("H1MM_EgMMOAcut1","Rootino Missing Mass with  Eg, MM and  OA cut Helicity = +1", 200,600,1200);

       H1Cop_phi_diff_EgMMOAcut1 = new GH1("H1Cop_phi_diff_EgMMOAcut1", "Coplanarity angle for Helicity = +1 ",360,0,360);

       H1OA_EgMMOAcut1           = new GH1("H1OA_EgMMOAcut1",	"Opening Angle for Helicity = +1" ,180,0, 180);

       H1theta_EgMMOAcut1        = new GH1("H1theta_EgMMOAcut1","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

       H1ctheta_EgMMOAcut1       = new GH1("H1ctheta_EgMMOAcut1","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);



       H1MMcut1_0                = new GH1("H1MMcut1_0","Rootino Missing Mass 0<Theta<20,  OA-cut  Helicity = +1", 200,600,1200);

       H1MMcut1_20               = new GH1("H1MMcut1_20","Rootino Missing Mass 20<Theta<40,  OA-cut  Helicity = +1", 200,600,1200);

       H1MMcut1_40               = new GH1("H1MMcut1_40","Rootino Missing Mass 40<Theta<60, OA-cut Helicity = +1", 200,600,1200);

       H1MMcut1_60               = new GH1("H1MMcut1_60","Rootino Missing Mass 60<Theta<80, OA-cut Helicity = +1", 200,600,1200);

       H1MMcut1_80               = new GH1("H1MMcut1_80","Rootino Missing Mass 80<Theta<100, OA-cut Helicity = +1", 200,600,1200);

       H1MMcut1_100              = new GH1("H1MMcut1_100","Rootino Missing Mass 100<Theta<120, OA-cut Helicity = +1", 200,600,1200);

       H1MMcut1_120              = new GH1("H1MMcut1_120","Rootino Missing Mass 120<Theta<140, OA-cut Helicity = +1", 200,600,1200);

       H1MMcut1_140              = new GH1("H1MMcut1_140","Rootino Missing Mass 140<Theta<160, OA-cut Helicity = +1", 200,600,1200);

       H1MMcut1_160              = new GH1("H1MMcut1_160","Rootino Missing Mass 160<Theta<180,  OA-cut  Helicity = +1", 200,600,1200);


       H1MM_Egcut2               = new GH1("H1MM_Egcut2","Rootino Missing Mass with Eg  cut Helicity = +1", 200,600,1200);

       H1Cop_phi_diff_Egcut2     = new GH1("H1Cop_phi_diff_Egcut2", "Coplanarity angle for Helicity = +1 ",360,0,360);

       H1OA_Egcut2		     = new GH1("H1OA_Egcut2",	"Opening Angle for Helicity = +1" ,180,0, 180);

       H1theta_Egcut2            = new GH1("H1theta_Egcut2","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

       H1MM_EgMMcut2             = new GH1("H1MM_EgMMcut2","Rootino Missing Mass with Eg and MM cut Helicity = +1", 200,600,1200);

       H1Cop_phi_diff_EgMMcut2   = new GH1("H1Cop_phi_diff_EgMMcut2", "Coplanarity angle for Helicity = +1 ",360,0,360);

       H1OA_EgMMcut2             = new GH1("H1OA_EgMMcut2",	"Opening Angle for Helicity = +1" ,180,0, 180);

       H1theta_EgMMcut2          = new GH1("H1theta_EgMMcut2","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

       H1MM_EgMMOAcut2           = new GH1("H1MM_EgMMOAcut2","Rootino Missing Mass with Eg, MM and  OA cut Helicity = +1", 200,600,1200);

       H1Cop_phi_diff_EgMMOAcut2 = new GH1("H1Cop_phi_diff_EgMMOAcut2", "Coplanarity angle for Helicity = +1 ",360,0,360);

       H1OA_EgMMOAcut2           = new GH1("H1OA_EgMMOAcut2",	"Opening Angle for Helicity = +1" ,180,0, 180);

       H1theta_EgMMOAcut2        = new GH1("H1theta_EgMMOAcut2","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

       H1ctheta_EgMMOAcut2       = new GH1("H1ctheta_EgMMOAcut2","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

       H1MMcut2_0                = new GH1("H1MMcut2_0","Rootino Missing Mass 0<Theta<20,  OA-cut  Helicity = +1", 200,600,1200);

       H1MMcut2_20               = new GH1("H1MMcut2_20","Rootino Missing Mass 20<Theta<40,  OA-cut  Helicity = +1", 200,600,1200);

       H1MMcut2_40               = new GH1("H1MMcut2_40","Rootino Missing Mass 40<Theta<60, OA-cut Helicity = +1", 200,600,1200);

       H1MMcut2_60               = new GH1("H1MMcut2_60","Rootino Missing Mass 60<Theta<80, OA-cut Helicity = +1", 200,600,1200);

       H1MMcut2_80               = new GH1("H1MMcut2_80","Rootino Missing Mass 80<Theta<100, OA-cut Helicity = +1", 200,600,1200);

       H1MMcut2_100              = new GH1("H1MMcut2_100","Rootino Missing Mass 100<Theta<120, OA-cut Helicity = +1", 200,600,1200);

       H1MMcut2_120              = new GH1("H1MMcut2_120","Rootino Missing Mass 120<Theta<140, OA-cut Helicity = +1", 200,600,1200);

       H1MMcut2_140              = new GH1("H1MMcut2_140","Rootino Missing Mass 140<Theta<160, OA-cut Helicity = +1", 200,600,1200);

       H1MMcut2_160              = new GH1("H1MMcut2_160","Rootino Missing Mass 160<Theta<180,  OA-cut  Helicity = +1", 200,600,1200);

          H0MM_nocut                = new GH1("H0MM_nocut","Rootino Missing Mass with no  cut Helicity = +1", 200,600,1200);

          H0Cop_phi_diff_nocut     = new GH1("H0Cop_phi_diff_nocut", "Coplanarity angle for Helicity = +1 ",360,0,360);

          H0OA_nocut		     = new GH1("H0OA_nocut",	"Opening Angle for Helicity = +1" ,180,0, 180);

          H0theta_nocut            = new GH1("H0theta_nocut","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

          H0MM_Egcut               = new GH1("H0MM_Egcut","Rootino Missing Mass with Eg  cut Helicity = +1", 200,600,1200);

          H0Cop_phi_diff_Egcut     = new GH1("H0Cop_phi_diff_Egcut", "Coplanarity angle for Helicity = +1 ",360,0,360);

          H0OA_Egcut		     = new GH1("H0OA_Egcut",	"Opening Angle for Helicity = +1" ,180,0, 180);

          H0theta_Egcut            = new GH1("H0theta_Egcut","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

          H0MM_EgMMcut             = new GH1("H0MM_EgMMcut","Rootino Missing Mass with Eg and MM cut Helicity = +1", 200,600,1200);

          H0Cop_phi_diff_EgMMcut   = new GH1("H0Cop_phi_diff_EgMMcut", "Coplanarity angle for Helicity = +1 ",360,0,360);

          H0OA_EgMMcut             = new GH1("H0OA_EgMMcut",	"Opening Angle for Helicity = +1" ,180,0, 180);

          H0theta_EgMMcut          = new GH1("H0theta_EgMMcut","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

          H0MM_EgMMOAcut           = new GH1("H0MM_EgMMOAcut","Rootino Missing Mass with Eg, MM and OA cut Helicity = +1", 200,600,1200);

          H0Cop_phi_diff_EgMMOAcut = new GH1("H0Cop_phi_diff_EgMMOAcut", "Coplanarity angle for Helicity = +1 ",360,0,360);

          H0OA_EgMMOAcut           = new GH1("H0OA_EgMMOAcut",	"Opening Angle for Helicity = +1" ,180,0, 180);

          H0theta_EgMMOAcut        = new GH1("H0theta_EgMMOAcut","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

          H0ctheta_EgMMOAcut       = new GH1("H0ctheta_EgMMOAcut","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

          H0MMcut_0                = new GH1("H0MMcut_0","Rootino Missing Mass 0<Theta<20,  OA-cut  Helicity = +1", 200,600,1200);

          H0MMcut_20               = new GH1("H0MMcut_20","Rootino Missing Mass 20<Theta<40,  OA-cut  Helicity = +1", 200,600,1200);

          H0MMcut_40               = new GH1("H0MMcut_40","Rootino Missing Mass 40<Theta<60, OA-cut Helicity = +1", 200,600,1200);

          H0MMcut_60               = new GH1("H0MMcut_60","Rootino Missing Mass 60<Theta<80, OA-cut Helicity = +1", 200,600,1200);

          H0MMcut_80               = new GH1("H0MMcut_80","Rootino Missing Mass 80<Theta<100, OA-cut Helicity = +1", 200,600,1200);

          H0MMcut_100              = new GH1("H0MMcut_100","Rootino Missing Mass 100<Theta<120, OA-cut Helicity = +1", 200,600,1200);

          H0MMcut_120              = new GH1("H0MMcut_120","Rootino Missing Mass 120<Theta<140, OA-cut Helicity = +1", 200,600,1200);

          H0MMcut_140              = new GH1("H0MMcut_140","Rootino Missing Mass 140<Theta<160, OA-cut Helicity = +1", 200,600,1200);

          H0MMcut_160              = new GH1("H0MMcut_160","Rootino Missing Mass 160<Theta<180,  OA-cut  Helicity = +1", 200,600,1200);


          H0MM_Egcut1               = new GH1("H0MM_Egcut1","Rootino Missing Mass with Eg cut Helicity = +1", 200,600,1200);

          H0Cop_phi_diff_Egcut1     = new GH1("H0Cop_phi_diff_Egcut1", "Coplanarity angle for Helicity = +1 ",360,0,360);

          H0OA_Egcut1		     = new GH1("H0OA_Egcut1",	"Opening Angle for Helicity = +1" ,180,0, 180);

          H0theta_Egcut1            = new GH1("H0theta_Egcut1","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

          H0MM_EgMMcut1             = new GH1("H0MM_EgMMcut1","Rootino Missing Mass with Eg and MM  cut Helicity = +1", 200,600,1200);

          H0Cop_phi_diff_EgMMcut1   = new GH1("H0Cop_phi_diff_EgMMcut1", "Coplanarity angle for Helicity = +1 ",360,0,360);

          H0OA_EgMMcut1             = new GH1("H0OA_EgMMcut1",	"Opening Angle for Helicity = +1" ,180,0, 180);

          H0theta_EgMMcut1          = new GH1("H0theta_EgMMcut1","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

          H0MM_EgMMOAcut1           = new GH1("H0MM_EgMMOAcut1","Rootino Missing Mass with Eg, MM and OA cut Helicity = +1", 200,600,1200);

          H0Cop_phi_diff_EgMMOAcut1 = new GH1("H0Cop_phi_diff_EgMMOAcut1", "Coplanarity angle for Helicity = +1 ",360,0,360);

          H0OA_EgMMOAcut1           = new GH1("H0OA_EgMMOAcut1",	"Opening Angle for Helicity = +1" ,180,0, 180);

          H0theta_EgMMOAcut1        = new GH1("H0theta_EgMMOAcut1","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

          H0ctheta_EgMMOAcut1       = new GH1("H0ctheta_EgMMOAcut1","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);



          H0MMcut1_0                = new GH1("H0MMcut1_0","Rootino Missing Mass 0<Theta<20,  OA-cut  Helicity = +1", 200,600,1200);

          H0MMcut1_20               = new GH1("H0MMcut1_20","Rootino Missing Mass 20<Theta<40,  OA-cut  Helicity = +1", 200,600,1200);

          H0MMcut1_40               = new GH1("H0MMcut1_40","Rootino Missing Mass 40<Theta<60, OA-cut Helicity = +1", 200,600,1200);

          H0MMcut1_60               = new GH1("H0MMcut1_60","Rootino Missing Mass 60<Theta<80, OA-cut Helicity = +1", 200,600,1200);

          H0MMcut1_80               = new GH1("H0MMcut1_80","Rootino Missing Mass 80<Theta<100, OA-cut Helicity = +1", 200,600,1200);

          H0MMcut1_100              = new GH1("H0MMcut1_100","Rootino Missing Mass 100<Theta<120, OA-cut Helicity = +1", 200,600,1200);

          H0MMcut1_120              = new GH1("H0MMcut1_120","Rootino Missing Mass 120<Theta<140, OA-cut Helicity = +1", 200,600,1200);

          H0MMcut1_140              = new GH1("H0MMcut1_140","Rootino Missing Mass 140<Theta<160, OA-cut Helicity = +1", 200,600,1200);

          H0MMcut1_160              = new GH1("H0MMcut1_160","Rootino Missing Mass 160<Theta<180,  OA-cut  Helicity = +1", 200,600,1200);


          H0MM_Egcut2               = new GH1("H0MM_Egcut2","Rootino Missing Mass with Eg cut Helicity = +1", 200,600,1200);

          H0Cop_phi_diff_Egcut2     = new GH1("H0Cop_phi_diff_Egcut2", "Coplanarity angle for Helicity = +1 ",360,0,360);

          H0OA_Egcut2		     = new GH1("H0OA_Egcut2",	"Opening Angle for Helicity = +1" ,180,0, 180);

          H0theta_Egcut2            = new GH1("H0theta_Egcut2","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

          H0MM_EgMMcut2             = new GH1("H0MM_EgMMcut2","Rootino Missing Mass with Eg and MM cut Helicity = +1", 200,600,1200);

          H0Cop_phi_diff_EgMMcut2   = new GH1("H0Cop_phi_diff_EgMMcut2", "Coplanarity angle for Helicity = +1 ",360,0,360);

          H0OA_EgMMcut2             = new GH1("H0OA_EgMMcut2",	"Opening Angle for Helicity = +1" ,180,0, 180);

          H0theta_EgMMcut2          = new GH1("H0theta_EgMMcut2","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

          H0MM_EgMMOAcut2           = new GH1("H0MM_EgMMOAcut2","Rootino Missing Mass with Eg, MM and OA cut Helicity = +1", 200,600,1200);

          H0Cop_phi_diff_EgMMOAcut2 = new GH1("H0Cop_phi_diff_EgMMOAcut2", "Coplanarity angle for Helicity = +1 ",360,0,360);

          H0OA_EgMMOAcut2           = new GH1("H0OA_EgMMOAcut2",	"Opening Angle for Helicity = +1" ,180,0, 180);

          H0theta_EgMMOAcut2        = new GH1("H0theta_EgMMOAcut2","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

          H0ctheta_EgMMOAcut2       = new GH1("H0ctheta_EgMMOAcut2","Theta Distribution  0<Photon.Theta<180   Helicity=+1",36,0,180);

          H0MMcut2_0                = new GH1("H0MMcut2_0","Rootino Missing Mass 0<Theta<20,  OA-cut  Helicity = +1", 200,600,1200);

          H0MMcut2_20               = new GH1("H0MMcut2_20","Rootino Missing Mass 20<Theta<40,  OA-cut  Helicity = +1", 200,600,1200);

          H0MMcut2_40               = new GH1("H0MMcut2_40","Rootino Missing Mass 40<Theta<60, OA-cut Helicity = +1", 200,600,1200);

          H0MMcut2_60               = new GH1("H0MMcut2_60","Rootino Missing Mass 60<Theta<80, OA-cut Helicity = +1", 200,600,1200);

          H0MMcut2_80               = new GH1("H0MMcut2_80","Rootino Missing Mass 80<Theta<100, OA-cut Helicity = +1", 200,600,1200);

          H0MMcut2_100              = new GH1("H0MMcut2_100","Rootino Missing Mass 100<Theta<120, OA-cut Helicity = +1", 200,600,1200);

          H0MMcut2_120              = new GH1("H0MMcut2_120","Rootino Missing Mass 120<Theta<140, OA-cut Helicity = +1", 200,600,1200);

          H0MMcut2_140              = new GH1("H0MMcut2_140","Rootino Missing Mass 140<Theta<160, OA-cut Helicity = +1", 200,600,1200);

          H0MMcut2_160              = new GH1("H0MMcut2_160","Rootino Missing Mass 160<Theta<180,  OA-cut  Helicity = +1", 200,600,1200);





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


//********************************************************************************************************

//************************************************************************************************************

    //cout << scale_factor_global << endl;

   // gHist->Scale(Scal_factor_target_pol);
//**************************************************************************************************************
void PMYPhysics::FillDilliComp(const GTreeTagger& taggertree, const GTreeParticle& rootinotree, const GTreeParticle& photontree,
                GH1* MM_nocut,       GH1* Cop_phi_diff_nocut,       GH1* OA_nocut,     GH1* theta_nocut,
                GH1* MM_Egcut,       GH1* Cop_phi_diff_Egcut,       GH1* OA_Egcut,     GH1* theta_Egcut,
                GH1* MM_EgMMcut,     GH1* Cop_phi_diff_EgMMcut,     GH1* OA_EgMMcut,   GH1* theta_EgMMcut,  Int_t angle,
                GH1* MM_EgMMOAcut,   GH1* Cop_phi_diff_EgMMOAcut,   GH1* OA_EgMMOAcut, GH1* theta_EgMMOAcut,  GH1* ctheta_EgMMOAcut,
                GH1* MMcut_0,        GH1* MMcut_20,     GH1* MMcut_40,  GH1* MMcut_60,  GH1* MMcut_80,  GH1* MMcut_100,  GH1* MMcut_120,    GH1* MMcut_140,   GH1* MMcut_160,
                GH1* MM_Egcut1,       GH1* Cop_phi_diff_Egcut1,       GH1* OA_Egcut1,     GH1* theta_Egcut1,
                GH1* MM_EgMMcut1,     GH1* Cop_phi_diff_EgMMcut1,     GH1* OA_EgMMcut1,   GH1* theta_EgMMcut1,
                GH1* MM_EgMMOAcut1,   GH1* Cop_phi_diff_EgMMOAcut1,   GH1* OA_EgMMOAcut1, GH1* theta_EgMMOAcut1,  GH1* ctheta_EgMMOAcut1,
                GH1* MMcut1_0,        GH1* MMcut1_20,    GH1* MMcut1_40, GH1* MMcut1_60, GH1* MMcut1_80, GH1* MMcut1_100, GH1* MMcut1_120,   GH1* MMcut1_140,  GH1* MMcut1_160,
                GH1* MM_Egcut2,       GH1* Cop_phi_diff_Egcut2,       GH1* OA_Egcut2,     GH1* theta_Egcut2,
                GH1* MM_EgMMcut2,     GH1* Cop_phi_diff_EgMMcut2,     GH1* OA_EgMMcut2,   GH1* theta_EgMMcut2,
                GH1* MM_EgMMOAcut2,   GH1* Cop_phi_diff_EgMMOAcut2,   GH1* OA_EgMMOAcut2, GH1* theta_EgMMOAcut2,  GH1* ctheta_EgMMOAcut2,
                GH1* MMcut2_0,        GH1* MMcut2_20,    GH1* MMcut2_40, GH1* MMcut2_60, GH1* MMcut2_80, GH1* MMcut2_100, GH1* MMcut2_120,   GH1* MMcut2_140,  GH1* MMcut2_160)
{
 for (Int_t j = 0; j < GetTagger()->GetNTagged(); j++)
   {
    for (Int_t i = 0; i < photontree.GetNParticles(); i++)
      {
       // if ((photontree.GetNParticles()==1)&&(rootinotree.GetNParticles()!=0))
        if ((photontree.GetNParticles()==1)&&(rootinotree.GetNParticles()==1))
           {
             Double_t time = GetTagger()->GetTaggedTime(j) - photontree.GetTime(i);
             FillMissingMass(photontree,i,j,MM_nocut,time);
             Double_t phidiff =  TMath::Abs(photontree.GetPhi(0) - rootinotree.GetPhi(0));
              if ((phidiff < 170) && (phidiff > 190));
               {
             Cop_phi_diff_nocut->Fill(TMath::Abs(photontree.GetPhi(0) - rootinotree.GetPhi(0)),time);
            // OA_nocut->Fill(Opening_Angle(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))*TMath::RadToDeg(),time);
              TLorentzVector p4 	= CalcMissingP4(photontree,i,j);
             OA_nocut->Fill (p4.Vect().Angle(rootinotree.Particle(0).Vect())*TMath::RadToDeg(),time);
             theta_nocut->Fill(photontree.GetTheta(0),time);
             //// ***************************************************************************************
            if ((taggertree.GetTaggedEnergy(j)>=265)&&( taggertree.GetTaggedEnergy(j)<285))
              {
                FillMissingMass(photontree,i,j,MM_Egcut,time);
                Cop_phi_diff_Egcut->Fill(TMath::Abs(photontree.GetPhi(0) - rootinotree.GetPhi(0)),time);
                //OA_Egcut->Fill(Opening_Angle(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))*TMath::RadToDeg(),time);
                OA_Egcut->Fill (p4.Vect().Angle(rootinotree.Particle(0).Vect())*TMath::RadToDeg(),time);
                theta_Egcut->Fill(photontree.GetTheta(0),time);
                if ((CalcMissingMass(photontree,i,j)<970)&&(CalcMissingMass(photontree,i,j)>910))
                 {
                     FillMissingMass(photontree,i,j,MM_EgMMcut,time);
                     Cop_phi_diff_EgMMcut->Fill(TMath::Abs(photontree.GetPhi(0) - rootinotree.GetPhi(0)),time);
                     //OA_EgMMcut->Fill(Opening_Angle(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))*TMath::RadToDeg(),time);
                     OA_EgMMcut->Fill (p4.Vect().Angle(rootinotree.Particle(0).Vect())*TMath::RadToDeg(),time);
                     theta_EgMMcut->Fill(photontree.GetTheta(0),time);
                    if  (Opening_Angle(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))<angle*TMath::RadToDeg())
                      {
                       FillMissingMass(photontree,i,j,MM_EgMMOAcut,time);
                       Cop_phi_diff_EgMMOAcut->Fill(TMath::Abs(photontree.GetPhi(0) - rootinotree.GetPhi(0)),time);
                       //OA_EgMMOAcut->Fill(Opening_Angle(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))*TMath::RadToDeg(),time);
                       OA_EgMMOAcut->Fill (p4.Vect().Angle(rootinotree.Particle(0).Vect())*TMath::RadToDeg(),time);
                       theta_EgMMOAcut->Fill(photontree.GetTheta(0),time);
                       ctheta_EgMMOAcut->Fill(rootinotree.GetTheta(0),time);
                        //// ***********************************************************************************
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
                                           FillMissingMass(photontree,i, j,MMcut_60);
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
                           }

             else if ((taggertree.GetTaggedEnergy(j)>=285)&&( taggertree.GetTaggedEnergy(j)<305))
               {
                 FillMissingMass(photontree,i,j,MM_Egcut1,time);
                 Cop_phi_diff_Egcut1->Fill(TMath::Abs(photontree.GetPhi(0) - rootinotree.GetPhi(0)),time);
                // OA_Egcut1->Fill(Opening_Angle(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))*TMath::RadToDeg(),time);
                 OA_Egcut1->Fill (p4.Vect().Angle(rootinotree.Particle(0).Vect())*TMath::RadToDeg(),time);
                 theta_Egcut1->Fill(photontree.GetTheta(0),time);
                 if ((CalcMissingMass(photontree,i,j)<970)&&(CalcMissingMass(photontree,i,j)>910))
                   {
                      FillMissingMass(photontree,i,j,MM_EgMMcut1,time);
                      Cop_phi_diff_EgMMcut1->Fill(TMath::Abs(photontree.GetPhi(0) - rootinotree.GetPhi(0)),time);
                      //OA_EgMMcut1->Fill(Opening_Angle(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))*TMath::RadToDeg(),time);
                      OA_EgMMcut1->Fill (p4.Vect().Angle(rootinotree.Particle(0).Vect())*TMath::RadToDeg(),time);
                      theta_EgMMcut1->Fill(photontree.GetTheta(0),time);
                     if  (Opening_Angle(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))<angle*TMath::RadToDeg())
                       {
                        FillMissingMass(photontree,i,j,MM_EgMMOAcut1,time);
                        Cop_phi_diff_EgMMOAcut1->Fill(TMath::Abs(photontree.GetPhi(0) - rootinotree.GetPhi(0)),time);
                        //OA_EgMMOAcut1->Fill(Opening_Angle(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))*TMath::RadToDeg(),time);
                        OA_EgMMOAcut1->Fill (p4.Vect().Angle(rootinotree.Particle(0).Vect())*TMath::RadToDeg(),time);
                        theta_EgMMOAcut1->Fill(photontree.GetTheta(0),time);
                         ctheta_EgMMOAcut1->Fill(rootinotree.GetTheta(0),time);
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
                            }
                else if ((taggertree.GetTaggedEnergy(j)>=305)&&( taggertree.GetTaggedEnergy(j)<325))
                  {
                    FillMissingMass(photontree,i,j,MM_Egcut2,time);
                    Cop_phi_diff_Egcut2->Fill(TMath::Abs(photontree.GetPhi(0) - rootinotree.GetPhi(0)),time);
                    //OA_Egcut2->Fill(Opening_Angle(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))*TMath::RadToDeg(),time);
                    OA_Egcut2->Fill (p4.Vect().Angle(rootinotree.Particle(0).Vect())*TMath::RadToDeg(),time);
                    theta_Egcut2->Fill(photontree.GetTheta(0),time);
                    if ((CalcMissingMass(photontree,i,j)<970)&&(CalcMissingMass(photontree,i,j)>910))
                     {
                         FillMissingMass(photontree,i,j,MM_EgMMcut2,time);
                         Cop_phi_diff_EgMMcut2->Fill(TMath::Abs(photontree.GetPhi(0) - rootinotree.GetPhi(0)),time);
                         //OA_EgMMcut2->Fill(Opening_Angle(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))*TMath::RadToDeg(),time);
                         OA_EgMMcut2->Fill (p4.Vect().Angle(rootinotree.Particle(0).Vect())*TMath::RadToDeg(),time);
                         theta_EgMMcut2->Fill(photontree.GetTheta(0),time);
                        if  (Opening_Angle(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))<angle*TMath::RadToDeg())
                          {
                           FillMissingMass(photontree,i,j,MM_EgMMOAcut2,time);
                           Cop_phi_diff_EgMMOAcut2->Fill(TMath::Abs(photontree.GetPhi(0) - rootinotree.GetPhi(0)),time);
                          // OA_EgMMOAcut2->Fill(Opening_Angle(CalcMissingP4(photontree,i,j),rootinotree.Particle(0))*TMath::RadToDeg(),time);
                           OA_EgMMOAcut2->Fill (p4.Vect().Angle(rootinotree.Particle(0).Vect())*TMath::RadToDeg(),time);
                           theta_EgMMOAcut2->Fill(photontree.GetTheta(0),time);
                            ctheta_EgMMOAcut2->Fill(rootinotree.GetTheta(0),time);
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
        }
    }
}
//************************************************************************
void	PMYPhysics::ProcessEvent()
{

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
     //cout << "helicity  "<< hel << endl;
        if (hel == kTRUE)
                           {
                           // FillTime(*GetNeutralPions(),time_hel0);
                           // FillMissingMass(*GetNeutralPions(),MM_hel0, kTRUE);
                            FillDilliComp( *GetTagger(),*GetRootinos(),*GetPhotons(),
                                           H0MM_nocut,      H0Cop_phi_diff_nocut,      H0OA_nocut,      H0theta_nocut ,      H0MM_Egcut ,          H0Cop_phi_diff_Egcut ,     H0OA_Egcut,       H0theta_Egcut ,
                                           H0MM_EgMMcut ,   H0Cop_phi_diff_EgMMcut ,   H0OA_EgMMcut,    H0theta_EgMMcut, 10, H0MM_EgMMOAcut,       H0Cop_phi_diff_EgMMOAcut , H0OA_EgMMOAcut,   H0theta_EgMMOAcut,  H0ctheta_EgMMOAcut ,
                                           H0MMcut_0,       H0MMcut_20,                H0MMcut_40,      H0MMcut_60,          H0MMcut_80,           H0MMcut_100,               H0MMcut_120 ,     H0MMcut_140 ,       H0MMcut_160,
                                           H0MM_Egcut1,     H0Cop_phi_diff_Egcut1,     H0OA_Egcut1,     H0theta_Egcut1,      H0MM_EgMMcut1,        H0Cop_phi_diff_EgMMcut1 ,  H0OA_EgMMcut1 ,   H0theta_EgMMcut1,
                                           H0MM_EgMMOAcut1, H0Cop_phi_diff_EgMMOAcut1, H0OA_EgMMOAcut1, H0theta_EgMMOAcut1,  H0ctheta_EgMMOAcut1 ,
                                           H0MMcut1_0,      H0MMcut1_20,               H0MMcut1_40,     H0MMcut1_60,         H0MMcut1_80,          H0MMcut1_100,              H0MMcut1_120,     H0MMcut1_140 ,      H0MMcut1_160,
                                           H0MM_Egcut2,     H0Cop_phi_diff_Egcut2 ,    H0OA_Egcut2,     H0theta_Egcut2,      H0MM_EgMMcut2,        H0Cop_phi_diff_EgMMcut2 ,  H0OA_EgMMcut2,    H0theta_EgMMcut2,
                                           H0MM_EgMMOAcut2, H0Cop_phi_diff_EgMMOAcut2, H0OA_EgMMOAcut2, H0theta_EgMMOAcut2 , H0ctheta_EgMMOAcut2,
                                           H0MMcut2_0 ,     H0MMcut2_20,               H0MMcut2_40,    H0MMcut2_60,         H0MMcut2_80 ,         H0MMcut2_100,              H0MMcut2_120,     H0MMcut2_140 ,      H0MMcut2_160 );

                             }
                    else
                             {
                            // FillTime(*GetNeutralPions(),time_hel1);
                            // FillMissingMass(*GetNeutralPions(),MM_hel1, kTRUE);
                             FillDilliComp( *GetTagger(), *GetRootinos(),*GetPhotons(),
                                            H1MM_nocut,      H1Cop_phi_diff_nocut,      H1OA_nocut,      H1theta_nocut ,      H1MM_Egcut ,          H1Cop_phi_diff_Egcut ,     H1OA_Egcut,       H1theta_Egcut ,
                                            H1MM_EgMMcut ,   H1Cop_phi_diff_EgMMcut ,   H1OA_EgMMcut,    H1theta_EgMMcut, 10, H1MM_EgMMOAcut,       H1Cop_phi_diff_EgMMOAcut , H1OA_EgMMOAcut,   H1theta_EgMMOAcut,  H1ctheta_EgMMOAcut ,
                                            H1MMcut_0,       H1MMcut_20,                H1MMcut_40,      H1MMcut_60,          H1MMcut_80,           H1MMcut_100,               H1MMcut_120 ,     H1MMcut_140 ,       H1MMcut_160,
                                            H1MM_Egcut1,     H1Cop_phi_diff_Egcut1,     H1OA_Egcut1,     H1theta_Egcut1,      H1MM_EgMMcut1,        H1Cop_phi_diff_EgMMcut1 ,  H1OA_EgMMcut1 ,   H1theta_EgMMcut1,
                                            H1MM_EgMMOAcut1, H1Cop_phi_diff_EgMMOAcut1, H1OA_EgMMOAcut1, H1theta_EgMMOAcut1,  H1ctheta_EgMMOAcut1,
                                            H1MMcut1_0,      H1MMcut1_20,               H1MMcut1_40,     H1MMcut1_60,         H1MMcut1_80,          H1MMcut1_100,              H1MMcut1_120,     H1MMcut1_140 ,      H1MMcut1_160,
                                            H1MM_Egcut2,     H1Cop_phi_diff_Egcut2 ,    H1OA_Egcut2,     H1theta_Egcut2,      H1MM_EgMMcut2,        H1Cop_phi_diff_EgMMcut2 ,  H1OA_EgMMcut2,    H1theta_EgMMcut2,
                                            H1MM_EgMMOAcut2, H1Cop_phi_diff_EgMMOAcut2, H1OA_EgMMOAcut2, H1theta_EgMMOAcut2 , H1ctheta_EgMMOAcut2,
                                            H1MMcut2_0 ,     H1MMcut2_20,               H1MMcut2_40,    H1MMcut2_60,         H1MMcut2_80 ,          H1MMcut2_100,              H1MMcut2_120,     H1MMcut2_140 ,      H1MMcut2_160 );


                             }



                   }



 }

//*************************************************************************************************

void	PMYPhysics::ProcessScalerRead()
{
    PPhysics::ProcessScalerRead();
}

Bool_t	PMYPhysics::Write()
{
    // Write all GH1's and TObjects defined in this class
    return GTreeManager::Write();
}




Double_t PMYPhysics::Opening_Angle(const TLorentzVector& t1, const TLorentzVector& t2 )
       {
            TVector3 p1 = t1.Vect();
            TVector3 p2 = t2.Vect();
            return   p1.Angle(p2);
            //oang = p1.Angle(p2)*TMath::RadToDeg();
       }
