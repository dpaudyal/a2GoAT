#ifndef __GInputTreeManager_h__
#define __GInputTreeManager_h__


#include "TFile.h"
#include "TTree.h"
#include "TLeaf.h"
#include "TLorentzVector.h"
#include<iostream>
using namespace std;

#define GINPUTTREEMANAGER_MAX_TAGGER		1024
#define GINPUTTREEMANAGER_MAX_PARTICLE	128
#define GINPUTTREEMANAGER_MAX_HITS		860


class	GInputTreeManager
{
private:
	TFile*		file;			// outFile
	TTree*		treeRawEvent;		// Raw particle information (filled each event)
	TTree*		treeTagger;		// Tagger information (filled each event)
	TTree* 		treeTrigger;		// Trigger information (filled each event)
	TTree* 		treeDetectorHits;	// Detector system hit patterns (filled each event)
	TTree*		treeScaler; 		// Scaler read information (filled each scaler read)

    //Particles    
    Int_t		nParticles;
    Double_t*	Px;
    Double_t*	Py;
   	Double_t*	Pz;
    Double_t*	E;
   	Double_t*	time;
    UChar_t*    clusterSize;
    
    //Tagger
    Int_t		nTagged;
    Int_t*		tagged_ch;
    Double_t*	tagged_t;
    
    //Apparatus
    UChar_t*	Apparatus;
    
    //Charged detector energies
    Double_t*	d_E;
    Double_t*	WC0_E;
    Double_t*	WC1_E;

	//Wire Chamber vertex reconstruction
   	Double_t* 	WC_Vertex_X;
   	Double_t* 	WC_Vertex_Y;
   	Double_t* 	WC_Vertex_Z;
    
   	//Hits
   	Int_t		nNaI_Hits;
   	Int_t*		NaI_Hits;
   	Int_t		nPID_Hits;
   	Int_t*		PID_Hits;
   	Int_t		nWC_Hits;
   	Int_t*		WC_Hits;
   	Int_t		nBaF2_PbWO4_Hits;
   	Int_t*		BaF2_PbWO4_Hits;
   	Int_t		nVeto_Hits;
   	Int_t*		Veto_Hits;
    
   	//Trigger
   	Double_t 	ESum;
   	Int_t 		Mult;
	
    //Scalers
    Int_t		EventNumber;
    Int_t		EventID;
    UInt_t*		Scaler;
    Int_t		NScaler;

	//protected members
    Int_t		firstValidEvent;
    Int_t		lastValidEvent;
    Int_t		actualEvent;
    
protected:
	void    CheckRange(Int_t& min, Int_t& max);
    void 	GetInputEntryFast();                // without testing index
    void	TraverseInputEntries(const Int_t min, const Int_t max);
    void	TraverseInputEntries(const Int_t max) 					{TraverseInputEntries(firstValidEvent, max);}
    void	TraverseInputEntries()		 							{TraverseInputEntries(firstValidEvent, lastValidEvent);}
	
public:
    GInputTreeManager();
    virtual ~GInputTreeManager();

    Bool_t	OpenInputFile(const char* treefile);
	Bool_t	OpenTreeRawEvent();
	Bool_t	OpenTreeTagger();
	Bool_t	OpenTreeTrigger();
	Bool_t	OpenTreeDetectorHits();
	Bool_t	OpenTreeScaler();
    Bool_t	FindValidEvents();
	Bool_t	GetInputEntry();
	Bool_t	GetInputEntry(const Int_t index);
    virtual void	Reset();
    virtual Bool_t	Analyse(const char* intreefile, const char* outtreefile, const Int_t Min = -1, const Int_t Max = -1) = 0;
    virtual void    Reconstruct() = 0;
    virtual	void	Print();
	
    		Int_t		GetNParticles()             const	{return nParticles;}
    const	Double_t*	GetPx()                     const	{return Px;}
    		Double_t	GetPx(const Int_t index)	const	{return Px[index];}
    const	Double_t*	GetPy()                     const	{return Py;}
    		Double_t	GetPy(const Int_t index)	const	{return Py[index];}
    const	Double_t*	GetPz()                     const	{return Pz;}
    		Double_t	GetPz(const Int_t index)	const	{return Pz[index];}
    const	Double_t*	GetE()                      const	{return E;}
    		Double_t	GetE(const Int_t index)		const	{return E[index];}
    const	Double_t*	GetTime()                   const	{return time;}
    		Double_t	GetTime(const Int_t index)	const	{return time[index];}
    
    TLorentzVector	GetVector(const Int_t index)	const	{return TLorentzVector(Px[index], Py[index], Pz[index], E[index]);}
    
    		Int_t		GetNTagged()                    const	{return nTagged;}
    const	Int_t*		GetTagged_ch()               	const	{return tagged_ch;}
    		Int_t		GetTagged_ch(const Int_t index)	const	{return tagged_ch[index];}
    const	Double_t*	GetTagged_t()                   const	{return tagged_t;}
    		Double_t	GetTagged_t(const Int_t index)	const	{return tagged_t[index];}
    
    const	UChar_t*	GetApparatus()                  const	{return Apparatus;}
    		UChar_t		GetApparatus(const Int_t index)	const	{return Apparatus[index];}

    const	Double_t*	Get_dE()                    const	{return d_E;}
    		Double_t	Get_dE(const Int_t index)	const	{return d_E[index];}
    const	Double_t*	GetWC0_E()                  const	{return WC0_E;}
    		Double_t	GetWC0_E(const Int_t index)	const	{return WC0_E[index];}
    const	Double_t*	GetWC1_E()                  const	{return WC1_E;}
    		Double_t	GetWC1_E(const Int_t index)	const	{return WC1_E[index];}
    
    const	Double_t* 	GetWC_Vertex_X()                    const	{return WC_Vertex_X;}
   			Double_t 	GetWC_Vertex_X(const Int_t index)	const	{return WC_Vertex_X[index];}
    const	Double_t* 	GetWC_Vertex_Y()                    const	{return WC_Vertex_Y;}
    		Double_t 	GetWC_Vertex_Y(const Int_t index)	const	{return WC_Vertex_Y[index];}
    const	Double_t* 	GetWC_Vertex_Z()                    const	{return WC_Vertex_Z;}
    		Double_t 	GetWC_Vertex_Z(const Int_t index)	const	{return WC_Vertex_Z[index];}
    
			Double_t 	GetESum()	const	{return ESum;}
			Int_t	 	GetMult()	const	{return Mult;}	
    
    		Int_t 		GetNScaler()    			const	{return NScaler;}
    		Int_t 		GetEventID()        		const	{return EventID;}
    		Int_t 		GetEventNumber()        	const	{return EventNumber;}
    const	UInt_t*		GetScaler()                 const	{return	Scaler;}
    		UInt_t		GetScaler(const Int_t index)const	{return	Scaler[index];}

    		Int_t		GetNNaI_Hits()              	const	{return nNaI_Hits;}
    const	Int_t*		GetNaI_Hits()           		const	{return NaI_Hits;}
    		Int_t		GetNaI_Hits(const Int_t index)	const	{return NaI_Hits[index];}

    		Int_t		GetNPID_Hits()      			const	{return nPID_Hits;}
    const	Int_t*		GetPID_Hits()               	const	{return PID_Hits;}
    		Int_t		GetPID_Hits(const Int_t index)	const	{return PID_Hits[index];}

    		Int_t		GetNWC_Hits()       			const	{return nWC_Hits;}
    const	Int_t*		GetWC_Hits()                	const	{return WC_Hits;}
    		Int_t		GetWC_Hits(const Int_t index)	const	{return WC_Hits[index];}

    		Int_t		GetNBaF2_PbWO4_Hits()                   const	{return nBaF2_PbWO4_Hits;}
    const	Int_t*		GetBaF2_PbWO4_Hits()                    const	{return BaF2_PbWO4_Hits;}
    		Int_t		GetBaF2_PbWO4_Hits(const Int_t index)	const	{return BaF2_PbWO4_Hits[index];}

			Int_t		GetNVeto_Hits()                 const	{return nVeto_Hits;}
    const	Int_t*		GetVeto_Hits()                  const	{return Veto_Hits;}
    		Int_t		GetVeto_Hits(const Int_t index)	const	{return Veto_Hits[index];}
    		
			Int_t		GetActualEvent()	const	{return actualEvent;}
};


#endif