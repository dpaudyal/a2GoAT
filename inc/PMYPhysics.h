#ifndef __PMYPhysics_h__
#define __PMYPhysics_h__

#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

#include "GTreeManager.h"
#include "PPhysics.h"

class	PMYPhysics  : public PPhysics
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

        GH1*    phi_all;
        GH1*    phi_2g;
         GH1*    phiBM;
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


//****************2D Pointers ****************************
      GH2* MM_IM;
      GH2* TC_MM;
      GH2*    theta_phi_all;
      GH2*    theta_phi_2g;
     GH1*    ME;
     GH2* MM_ME;
     GH3*      MMTCTheta;
     TH3*      MMTCThetaP;
     TH3*      MMTCThetaR;
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
       void    Fillphi(const GTreeParticle& tree, GH1* gHist, Bool_t TaggerBinning);
       void    Fillphi(const GTreeParticle& tree,  Int_t particle_index, GH1* gHist, Bool_t TaggerBinning);
       void	FillIMMM(const GTreeParticle& tree, GH2* gHist, Bool_t TaggerBinning = kFALSE);
       void	FillIMMM(const GTreeParticle& tree, Int_t particle_index, GH2* gHist, Bool_t TaggerBinning = kFALSE);
       void FillIMMM(const GTreeParticle& tree, Int_t particle_index, Int_t tagger_index, GH2* gHist, Bool_t TaggerBinning = kFALSE);
       void FillThetaPhi(const GTreeParticle& tree, GH1* hHist, GH2* ghHist);
       void FillThetaPhi(const GTreeParticle& tree, Int_t particle_index, GH1* hHist, GH2* ghHist);
       void FillMissingEnergy(const GTreeParticle& tree, GH1* gHist,GH2* hHist, Bool_t TaggerBinning);
       void FillMissingEnergy(const GTreeParticle& tree, Int_t particle_index, GH1* gHist, GH2* hHist, Bool_t TaggerBinning);
       void FillMissingEnergy(const GTreeParticle& tree, Int_t particle_index, Int_t tagger_index, GH1* gHist, GH2* hHist, Bool_t TaggerBinning);
       void      FillThetaTCMM(const GTreeParticle& tree, TH3* gHistPrompt, TH3* gHistRandom);
       void      FillThetaTCMM(const GTreeParticle& tree, Int_t particle_index, TH3* gHistPrompt, TH3* gHistRandom);
       void      FillThetaTCMM(const GTreeParticle& tree, Int_t particle_index,  Int_t tagger_index, TH3* gHistPrompt, TH3* gHistRandom);

//*************************************************************************
			
public:
    PMYPhysics();
    virtual ~PMYPhysics();
    virtual Bool_t  Init();

};
#endif
