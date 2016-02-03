
#ifndef __PPPi0Physics_h__
#define __PPPi0Physics_h__

#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

#include "GTreeManager.h"
#include "PPhysics.h"

class	PPPi0Physics  : public PPhysics
{
private:

//****************************************
    GH1*	time;
    GH1*	time_hel0;
    GH1*	time_hel1;

    GH1*	time_2g;
    GH1*	time_2g_hel0;
    GH1*	time_2g_hel1;

    GH1*	time_cut;
    GH1*	time_cut_hel0;
    GH1*	time_cut_hel1;

    GH1*	time_2g_cut;
    GH1*	time_2g_cut_hel0;
    GH1*	time_2g_cut_hel1;

//*******************************************
     GH1*	MM;
     GH1*	MM_hel0;
     GH1*	MM_hel1;

     GH1*	MM_2g;
     GH1*	MM_2g_hel0;
     GH1*	MM_2g_hel1;

     GH1*   MM_1g1r;

//********************************************
     GH1*	IM;
     GH1*	IM_hel0;
     GH1*	IM_hel1;

     GH1*	IM_2g;
     GH1*	IM_2g_hel0;
     GH1*	IM_2g_hel1;

     GH1* IM_1g1r;

//*******************************************
     GH1*    theta;
     GH1*    theta_hel0;
     GH1*    theta_hel1;

     GH1*    theta_2g;
     GH1*    theta_2g_hel0;
     GH1*    theta_2g_hel1;
//*******************************************

            GH1*    IM_hel0_0;

            GH1*    IM_hel0_20;

            GH1*    IM_hel0_40;

            GH1*    IM_hel0_60;

            GH1*    IM_hel0_80;

            GH1*    IM_hel0_100;

            GH1*    IM_hel0_120;

            GH1*    IM_hel0_140;

            GH1*    IM_hel0_160;


            GH1*    IM_hel1_0;

            GH1*    IM_hel1_20;

            GH1*    IM_hel1_40;

            GH1*    IM_hel1_60;

            GH1*    IM_hel1_80;

            GH1*    IM_hel1_100;

            GH1*    IM_hel1_120;

            GH1*    IM_hel1_140;

            GH1*    IM_hel1_160;





           GH1*  hel0_theta_nocut;
           GH1*  hel0_theta_IMcut;
           GH1*  hel0_theta_250_270;
           GH1*  hel0_theta_270_290;
           GH1*  hel0_theta_290_310;
  //         GH1*  hel0_theta_IMcut;


           GH1*  hel1_theta_nocut;
           GH1*  hel1_theta_IMcut;
           GH1*  hel1_theta_250_270;
           GH1*  hel1_theta_270_290;
           GH1*  hel1_theta_290_310;
 //          GH1*  hel1_theta_IMcut;














//******************************************
     GH1*    PhotonEnergy;
     GH1*    PhotonEnergy_hel0;
     GH1*    PhotonEnergy_hel1;

     GH1*    PhotonEnergy_2g;
     GH1*    PhotonEnergy_2g_hel0;
     GH1*    PhotonEnergy_2g_hel1;
//*******************************************
     GH1*    TaggerChannel;
     GH1*    TaggerChannel_hel0;
     GH1*    TaggerChannel_hel1;

     GH1*    TaggerChannel_2g;
     GH1*    TaggerChannel_2g_hel0;
     GH1*    TaggerChannel_2g_hel1;

    // Double_t scale_factor_global;



         GH1*      H1IMcut;
         GH1*      H1theta_265_285;
         GH1*      H1MMnocut;
         GH1*      H1MMcut;
         GH1*      H1IMcut_0;
         GH1*      H1IMcut_20;
         GH1*      H1IMcut_40;
         GH1*      H1IMcut_60;
         GH1*      H1IMcut_80;
         GH1*      H1IMcut_100;
         GH1*      H1IMcut_120;
         GH1*      H1IMcut_140;
         GH1*      H1IMcut_160;

         GH1*      H1theta_285_305;
         GH1*      H1MMnocut1;
         GH1*      H1MMcut1;
         GH1*      H1IMcut1_0;
         GH1*      H1IMcut1_20;
         GH1*      H1IMcut1_40;
         GH1*      H1IMcut1_60;
         GH1*      H1IMcut1_80;
         GH1*      H1IMcut1_100;
         GH1*      H1IMcut1_120;
         GH1*      H1IMcut1_140;
         GH1*      H1IMcut1_160;

         GH1*      H1theta_305_325;
         GH1*      H1MMnocut2;
         GH1*      H1MMcut2;
         GH1*      H1IMcut2_0;
         GH1*      H1IMcut2_20;
         GH1*      H1IMcut2_40;
         GH1*      H1IMcut2_60;
         GH1*      H1IMcut2_80;
         GH1*      H1IMcut2_100;
         GH1*      H1IMcut2_120;
         GH1*      H1IMcut2_140;
         GH1*      H1IMcut2_160;

         GH1*      H0IMcut;
         GH1*      H0theta_265_285;
         GH1*      H0MMnocut;
         GH1*      H0MMcut;
         GH1*      H0IMcut_0;
         GH1*      H0IMcut_20;
         GH1*      H0IMcut_40;
         GH1*      H0IMcut_60;
         GH1*      H0IMcut_80;
         GH1*      H0IMcut_100;
         GH1*      H0IMcut_120;
         GH1*      H0IMcut_140;
         GH1*      H0IMcut_160;

         GH1*      H0theta_285_305;
          GH1*     H0MMnocut1;
         GH1*      H0MMcut1;
         GH1*      H0IMcut1_0;
         GH1*      H0IMcut1_20;
         GH1*      H0IMcut1_40;
         GH1*      H0IMcut1_60;
         GH1*      H0IMcut1_80;
         GH1*      H0IMcut1_100;
         GH1*      H0IMcut1_120;
         GH1*      H0IMcut1_140;
         GH1*      H0IMcut1_160;

         GH1*      H0theta_305_325;
         GH1*      H0MMnocut2;
         GH1*      H0MMcut2;
         GH1*      H0IMcut2_0;
         GH1*      H0IMcut2_20;
         GH1*      H0IMcut2_40;
         GH1*      H0IMcut2_60;
         GH1*      H0IMcut2_80;
         GH1*      H0IMcut2_100;
         GH1*      H0IMcut2_120;
         GH1*      H0IMcut2_140;
         GH1*      H0IMcut2_160;



//****************2D Pointers ****************************

          GH1*    ME;

//********************************************

       Double_t Target_Pol;
       Double_t Scal_factor_target_pol;
       int eventzero = 0;
        Int_t thet;
        Int_t TC;


protected:
    virtual Bool_t  Start();
    virtual void    ProcessEvent();
    virtual void	ProcessScalerRead();
    virtual Bool_t    Write();

//*************************************************************************
       void    Filltheta(const GTreeParticle& tree, GH1* gHist, Bool_t TaggerBinning);
       void    Filltheta(const GTreeParticle& tree,  Int_t particle_index, GH1* gHist, Bool_t TaggerBinning);
       void    FillPhotonEnergy(const GTreeParticle& tree, GH1* gHist);
       void    FillPhotonEnergy(const GTreeParticle& tree,  Int_t particle_index, GH1* gHist);
       void    FillTaggerChannel(const GTreeParticle& tree, GH1* gHist);
       void    FillTaggerChannel(const GTreeParticle& tree,  Int_t particle_index, GH1* gHist);

       void FillMissingEnergy(const GTreeParticle& tree, GH1* gHist,GH2* hHist, Bool_t TaggerBinning);
       void FillMissingEnergy(const GTreeParticle& tree, Int_t particle_index, GH1* gHist, GH2* hHist, Bool_t TaggerBinning);
       void FillMissingEnergy(const GTreeParticle& tree, Int_t particle_index, Int_t tagger_index, GH1* gHist, GH2* hHist, Bool_t TaggerBinning);



       void     FillDilliAsym(const GTreeTagger& taggertree,  const GTreeMeson& pi0tree, GH1* IMcut,
                                      GH1* MMnocut, GH1* MMcut, GH1* theta_265_285, GH1* IMcut_0,GH1* IMcut_20, GH1* IMcut_40,GH1* IMcut_60, GH1* IMcut_80, GH1* IMcut_100,
                                      GH1* IMcut_120,GH1* IMcut_140,GH1* IMcut_160,
                                      GH1* MMnocut1,GH1* MMcut1,  GH1* theta_285_305, GH1* IMcut1_0,GH1* IMcut1_20, GH1* IMcut1_40,GH1* IMcut1_60, GH1* IMcut1_80, GH1* IMcut1_100,
                                      GH1* IMcut1_120,GH1* IMcut1_140,GH1* IMcut1_160,
                                      GH1* MMnocut2, GH1* MMcut2,  GH1* theta_305_325, GH1* IMcut2_0,GH1* IMcut2_20, GH1* IMcut2_40,GH1* IMcut2_60, GH1* IMcut2_80, GH1* IMcut2_100,
                                      GH1* IMcut2_120,GH1* IMcut2_140,GH1* IMcut2_160,  Bool_t TaggerBinning);


//*************************************************************************
			
public:
    PPPi0Physics();
    virtual ~PPPi0Physics();
    virtual Bool_t  Init();

};
#endif


