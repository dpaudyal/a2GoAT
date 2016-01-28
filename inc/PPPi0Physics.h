
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
           GH1*  hel0_theta_MMcut;


           GH1*  hel1_theta_nocut;
           GH1*  hel1_theta_IMcut;
           GH1*  hel1_theta_250_270;
           GH1*  hel1_theta_270_290;
           GH1*  hel1_theta_290_310;
           GH1*  hel1_theta_MMcut;














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


//****************2D Pointers ****************************
    //  GH2* MM_IM;
     // GH2* MM_TC;
      //GH2* MM_TC_hel0;
     // GH2* MM_TC_hel1;
     // GH2* MM_TC_2g;
     // GH2* MM_TC_2g_hel0;
     // GH2* MM_TC_2g_hel1;
      //GH2*    theta_phi_all;
     // GH2*    theta_phi_2g;
     GH1*    ME;
    // GH2* MM_ME;
     //GH3*      MMTCTheta;
     //TH3*      MMTCThetaP;
    // TH3*      MMTCThetaR;
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
      // void    Fillphi(const GTreeParticle& tree, GH1* gHist, Bool_t TaggerBinning);
      // void    Fillphi(const GTreeParticle& tree,  Int_t particle_index,  GH1* gHist, Bool_t TaggerBinning);
      // void	FillIMMM(const GTreeParticle& tree, GH2* gHist, Bool_t TaggerBinning = kFALSE);
      // void	FillIMMM(const GTreeParticle& tree, Int_t particle_index, GH2* gHist, Bool_t TaggerBinning = kFALSE);
     //  void FillIMMM(const GTreeParticle& tree, Int_t particle_index, Int_t tagger_index, GH2* gHist, Bool_t TaggerBinning = kFALSE);
       //void FillThetaPhi(const GTreeParticle& tree, GH1* hHist, GH2* ghHist);
      // void FillThetaPhi(const GTreeParticle& tree, Int_t particle_index, GH1* hHist, GH2* ghHist);
       void FillMissingEnergy(const GTreeParticle& tree, GH1* gHist,GH2* hHist, Bool_t TaggerBinning);
       void FillMissingEnergy(const GTreeParticle& tree, Int_t particle_index, GH1* gHist, GH2* hHist, Bool_t TaggerBinning);
       void FillMissingEnergy(const GTreeParticle& tree, Int_t particle_index, Int_t tagger_index, GH1* gHist, GH2* hHist, Bool_t TaggerBinning);
      // void      FillThetaTCMM(const GTreeParticle& tree, TH3* gHistPrompt, TH3* gHistRandom);
      // void      FillThetaTCMM(const GTreeParticle& tree, Int_t particle_index, TH3* gHistPrompt, TH3* gHistRandom);
       //void      FillThetaTCMM(const GTreeParticle& tree, Int_t particle_index,  Int_t tagger_index, TH3* gHistPrompt, TH3* gHistRandom);
      // void  FillMMTC(const GTreeParticle& tree,  GH2* gHistMMTC, Bool_t TaggerBinning);
      // void  FillMMTC(const GTreeParticle& tree, Int_t particle_index,  GH2* gHistMMTC, Bool_t TaggerBinning );
      // void  FillMMTC(const GTreeParticle& tree, Int_t particle_index,  Int_t tagger_index, GH2* gHistMMTC, Bool_t TaggerBinning);

      // void FillDilliAsym(const GTreeParticle& tree, Int_t particle_index, Int_t en_low,Int_t en_high,GH1* gHist,
       //                               GH1* theta_imcut,GH1* imgg_0,GH1* imgg_10, GH1* imgg_20,GH1* imgg_30, GH1* imgg_40, GH1* imgg_50, GH1* imgg_60,GH1* imgg_70,GH1* imgg_80,
      //                                GH1* imgg_90, GH1* imgg_100,GH1* imgg_110, GH1* imgg_120,GH1* imgg_130, GH1* imgg_140, GH1* imgg_150, GH1* imgg_160,GH1* imgg_170,Bool_t TaggerBinning);


       void FillDilliAsym(const GTreeMeson& tree, const GTreeTagger& taggertree, GH1* gHist,
                                      GH1* theta_imcut,GH1* theta_250_270,GH1* theta_270_290, GH1* theta_290_310,GH1* theta_MMcut, GH1* imgg_0, GH1* imgg_20,
                                      GH1* imgg_40,GH1* imgg_60,GH1* imgg_80, GH1* imgg_100, GH1* imgg_120,GH1* imgg_140, GH1* imgg_160);


//*************************************************************************
			
public:
    PPPi0Physics();
    virtual ~PPPi0Physics();
    virtual Bool_t  Init();

};
#endif


