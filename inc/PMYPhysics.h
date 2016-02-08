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


     GH1*	  MM_hel0;
     GH1*	  MM_hel1;

     GH1*      H1theta_265_285;
     GH1*      H1MMcut;
     GH1*      H1MMcut_0;
     GH1*      H1MMcut_20;
     GH1*      H1MMcut_40;
     GH1*      H1MMcut_60;
     GH1*      H1MMcut_80;
     GH1*      H1MMcut_100;
     GH1*      H1MMcut_120;
     GH1*      H1MMcut_140;
     GH1*      H1MMcut_160;

     GH1*      H1theta_285_305;\
     GH1*      H1MMcut1;
     GH1*      H1MMcut1_0;
     GH1*      H1MMcut1_20;
     GH1*      H1MMcut1_40;
     GH1*      H1MMcut1_60;
     GH1*      H1MMcut1_80;
     GH1*      H1MMcut1_100;
     GH1*      H1MMcut1_120;
     GH1*      H1MMcut1_140;
     GH1*      H1MMcut1_160;

     GH1*      H1theta_305_325;
     GH1*      H1MMcut2;
     GH1*      H1MMcut2_0;
     GH1*      H1MMcut2_20;
     GH1*      H1MMcut2_40;
     GH1*      H1MMcut2_60;
     GH1*      H1MMcut2_80;
     GH1*      H1MMcut2_100;
     GH1*      H1MMcut2_120;
     GH1*      H1MMcut2_140;
     GH1*      H1MMcut2_160;

     GH1*      H0theta_265_285;
     GH1*      H0MMcut;
     GH1*      H0MMcut_0;
     GH1*      H0MMcut_20;
     GH1*      H0MMcut_40;
     GH1*      H0MMcut_60;
     GH1*      H0MMcut_80;
     GH1*      H0MMcut_100;
     GH1*      H0MMcut_120;
     GH1*      H0MMcut_140;
     GH1*      H0MMcut_160;

     GH1*      H0theta_285_305;\
     GH1*      H0MMcut1;
     GH1*      H0MMcut1_0;
     GH1*      H0MMcut1_20;
     GH1*      H0MMcut1_40;
     GH1*      H0MMcut1_60;
     GH1*      H0MMcut1_80;
     GH1*      H0MMcut1_100;
     GH1*      H0MMcut1_120;
     GH1*      H0MMcut1_140;
     GH1*      H0MMcut1_160;

     GH1*      H0theta_305_325;
     GH1*      H0MMcut2;
     GH1*      H0MMcut2_0;
     GH1*      H0MMcut2_20;
     GH1*      H0MMcut2_40;
     GH1*      H0MMcut2_60;
     GH1*      H0MMcut2_80;
     GH1*      H0MMcut2_100;
     GH1*      H0MMcut2_120;
     GH1*      H0MMcut2_140;
     GH1*      H0MMcut2_160;


//*******************************************


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

       void    FillPhotonEnergy(const GTreeParticle& tree, GH1* gHist);
       void    FillPhotonEnergy(const GTreeParticle& tree,  Int_t particle_index, GH1* gHist);
       void    FillTaggerChannel(const GTreeParticle& tree, GH1* gHist);
       void    FillTaggerChannel(const GTreeParticle& tree,  Int_t particle_index, GH1* gHist);



      virtual  Double_t Opening_Angle(const TLorentzVector& t1, const TLorentzVector& t2 );
      virtual void     FillDilliComp(const GTreeTagger& taggertree, const GTreeParticle& rootinotree, const GTreeParticle& photontree, Int_t angle,
                                      GH1* theta_265_285,GH1* MMcut,GH1* MMcut_0,GH1* MMcut_20, GH1* MMcut_40,GH1* MMcut_60, GH1* MMcut_80, GH1* MMcut_100,
                                      GH1* MMcut_120,GH1* MMcut_140,GH1* MMcut_160,
                                      GH1* theta_285_305,GH1* MMcut1,GH1* MMcut1_0,GH1* MMcut1_20, GH1* MMcut1_40,GH1* MMcut1_60, GH1* MMcut1_80, GH1* MMcut1_100,
                                      GH1* MMcut1_120,GH1* MMcut1_140,GH1* MMcut1_160,
                                      GH1* theta_305_325,GH1* MMcut2,GH1* MMcut2_0,GH1* MMcut2_20, GH1* MMcut2_40,GH1* MMcut2_60, GH1* MMcut2_80, GH1* MMcut2_100,
                                      GH1* MMcut2_120,GH1* MMcut2_140,GH1* MMcut2_160);
//*************************************************************************
			
public:
    PMYPhysics();
    virtual ~PMYPhysics();
    virtual Bool_t  Init();

};
#endif
