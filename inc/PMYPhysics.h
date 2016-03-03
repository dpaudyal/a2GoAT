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

     GH1*     H1MM_nocut ;

      GH1*     H1Cop_phi_diff_nocut;

      GH1*     H1OA_nocut;

      GH1*     H1theta_nocut;

      GH1*     H1MM_Egcut;

      GH1*     H1Cop_phi_diff_Egcut;

      GH1*     H1OA_Egcut;

      GH1*     H1theta_Egcut;

      GH1*     H1MM_EgMMcut ;

      GH1*     H1Cop_phi_diff_EgMMcut ;

      GH1*     H1OA_EgMMcut;

      GH1*     H1theta_EgMMcut;

      GH1*     H1MM_EgMMOAcut ;

      GH1*     H1Cop_phi_diff_EgMMOAcut ;

      GH1*     H1OA_EgMMOAcut;

      GH1*     H1theta_EgMMOAcut;

      GH1*     H1ctheta_EgMMOAcut;

      GH1*     H1MMcut_0 ;

      GH1*     H1MMcut_20 ;

      GH1*     H1MMcut_40;

      GH1*     H1MMcut_60 ;

      GH1*     H1MMcut_80 ;

      GH1*     H1MMcut_100 ;

      GH1*     H1MMcut_120 ;

      GH1*     H1MMcut_140 ;

      GH1*     H1MMcut_160;


      GH1*     H1MM_Egcut1 ;

      GH1*     H1Cop_phi_diff_Egcut1;

      GH1*     H1OA_Egcut1;

      GH1*     H1theta_Egcut1;

      GH1*     H1MM_EgMMcut1 ;

      GH1*     H1Cop_phi_diff_EgMMcut1 ;

      GH1*     H1OA_EgMMcut1 ;

      GH1*     H1theta_EgMMcut1 ;

      GH1*     H1MM_EgMMOAcut1 ;

      GH1*     H1Cop_phi_diff_EgMMOAcut1;

      GH1*     H1OA_EgMMOAcut1 ;

      GH1*     H1theta_EgMMOAcut1 ;

      GH1*     H1ctheta_EgMMOAcut1 ;



      GH1*     H1MMcut1_0  ;

      GH1*     H1MMcut1_20 ;

      GH1*     H1MMcut1_40 ;

      GH1*     H1MMcut1_60 ;

      GH1*     H1MMcut1_80 ;

      GH1*     H1MMcut1_100;

      GH1*     H1MMcut1_120 ;

      GH1*     H1MMcut1_140 ;

      GH1*     H1MMcut1_160 ;


      GH1*     H1MM_Egcut2 ;

      GH1*     H1Cop_phi_diff_Egcut2;

      GH1*     H1OA_Egcut2;

      GH1*     H1theta_Egcut2 ;

      GH1*     H1MM_EgMMcut2;

      GH1*     H1Cop_phi_diff_EgMMcut2;

      GH1*     H1OA_EgMMcut2;

      GH1*     H1theta_EgMMcut2;

      GH1*     H1MM_EgMMOAcut2 ;

      GH1*     H1Cop_phi_diff_EgMMOAcut2;

      GH1*     H1OA_EgMMOAcut2;

      GH1*     H1theta_EgMMOAcut2 ;

      GH1*     H1ctheta_EgMMOAcut2 ;

      GH1*     H1MMcut2_0 ;

      GH1*     H1MMcut2_20 ;

      GH1*     H1MMcut2_40  ;

      GH1*     H1MMcut2_60 ;

      GH1*     H1MMcut2_80;

      GH1*     H1MMcut2_100;

      GH1*     H1MMcut2_120;

      GH1*     H1MMcut2_140;

      GH1*     H1MMcut2_160;


      GH1*     H0MM_nocut ;

      GH1*     H0Cop_phi_diff_nocut;

      GH1*     H0OA_nocut;

      GH1*     H0theta_nocut;

      GH1*     H0MM_Egcut;

      GH1*     H0Cop_phi_diff_Egcut;

      GH1*     H0OA_Egcut;

      GH1*     H0theta_Egcut;

      GH1*     H0MM_EgMMcut ;

      GH1*     H0Cop_phi_diff_EgMMcut ;

      GH1*     H0OA_EgMMcut;

      GH1*     H0theta_EgMMcut;

      GH1*     H0MM_EgMMOAcut ;

      GH1*     H0Cop_phi_diff_EgMMOAcut ;

      GH1*     H0OA_EgMMOAcut;

      GH1*     H0theta_EgMMOAcut;

      GH1*     H0ctheta_EgMMOAcut;

      GH1*     H0MMcut_0 ;

      GH1*     H0MMcut_20 ;

      GH1*     H0MMcut_40;

      GH1*     H0MMcut_60 ;

      GH1*     H0MMcut_80 ;

      GH1*     H0MMcut_100 ;

      GH1*     H0MMcut_120 ;

      GH1*     H0MMcut_140 ;

      GH1*     H0MMcut_160;


      GH1*     H0MM_Egcut1 ;

      GH1*     H0Cop_phi_diff_Egcut1;

      GH1*     H0OA_Egcut1;

      GH1*     H0theta_Egcut1;

      GH1*     H0MM_EgMMcut1 ;

      GH1*     H0Cop_phi_diff_EgMMcut1 ;

      GH1*     H0OA_EgMMcut1 ;

      GH1*     H0theta_EgMMcut1 ;

      GH1*     H0MM_EgMMOAcut1 ;

      GH1*     H0Cop_phi_diff_EgMMOAcut1;

      GH1*     H0OA_EgMMOAcut1 ;

      GH1*     H0theta_EgMMOAcut1 ;

      GH1*     H0ctheta_EgMMOAcut1 ;



      GH1*     H0MMcut1_0  ;

      GH1*     H0MMcut1_20 ;

      GH1*     H0MMcut1_40 ;

      GH1*     H0MMcut1_60 ;

      GH1*     H0MMcut1_80 ;

      GH1*     H0MMcut1_100;

      GH1*     H0MMcut1_120 ;

      GH1*     H0MMcut1_140 ;

      GH1*     H0MMcut1_160 ;


      GH1*     H0MM_Egcut2 ;

      GH1*     H0Cop_phi_diff_Egcut2;

      GH1*     H0OA_Egcut2;

      GH1*     H0theta_Egcut2 ;

      GH1*     H0MM_EgMMcut2;

      GH1*     H0Cop_phi_diff_EgMMcut2;

      GH1*     H0OA_EgMMcut2;

      GH1*     H0theta_EgMMcut2;

      GH1*     H0MM_EgMMOAcut2 ;

      GH1*     H0Cop_phi_diff_EgMMOAcut2;

      GH1*     H0OA_EgMMOAcut2;

      GH1*     H0theta_EgMMOAcut2 ;

      GH1*     H0ctheta_EgMMOAcut2 ;

      GH1*     H0MMcut2_0 ;

      GH1*     H0MMcut2_20 ;

      GH1*     H0MMcut2_40  ;

      GH1*     H0MMcut2_60 ;

      GH1*     H0MMcut2_80;

      GH1*     H0MMcut2_100;

      GH1*     H0MMcut2_120;

      GH1*     H0MMcut2_140;

      GH1*     H0MMcut2_160;



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
      virtual  void  FillDilliComp(const GTreeTagger& taggertree, const GTreeParticle& rootinotree, const GTreeParticle& photontree,
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
                       GH1* MMcut2_0,        GH1* MMcut2_20,    GH1* MMcut2_40, GH1* MMcut2_60, GH1* MMcut2_80, GH1* MMcut2_100, GH1* MMcut2_120,   GH1* MMcut2_140,  GH1* MMcut2_160);
//*************************************************************************

public:
    PMYPhysics();
    virtual ~PMYPhysics();
    virtual Bool_t  Init();

};
#endif
