
#include "GSort.h"


GSort::GSort() :
     SP_n(0),
     SP_type(0),
     SP_condition(0),
     SP_theta_min(0),
     SP_theta_max(0),
     SN_n(0),
     SN_type(0),
     SN_condition(0),
     SN_theta_min(0),
     SN_theta_max(0)     
{
	SP_n 		= new Int_t[50];
	SP_type		= new Int_t[50];
	SP_condition= new Int_t[50];
	SP_theta_min= new Double_t[50];
	SP_theta_max= new Double_t[50];

	SN_n 		= new Int_t[50];
	SN_type		= new Int_t[50];
	SN_condition= new Int_t[50];
	SN_theta_min= new Double_t[50];
	SN_theta_max= new Double_t[50];
}

GSort::~GSort()
{
}

Bool_t	GSort::PostInit()
{
	// Cut on CB Energy Sum (raw data cut)
	config = ReadConfig("SortRaw-CBEnergySum");
	if (strcmp(config.c_str(), "nokey") == 0) SortRawCBESum = 0;
	else if( sscanf(config.c_str(),"%lf %s\n",&SR_CBESum, string_in1) == 2 )
	{
		CheckConfigCondition(string_in1, &SR_CBESum_condition, string_out1);
		if(SR_CBESum_condition == -1) SortRawCBESum = 0;
		else SortRawCBESum = 1;
		
		if(SortRawCBESum == 1)
			cout << "Sort: Crystal Ball Energy Sum " 
				 << SR_CBESum << " "<< string_out1 << endl;
		else 
		{
			cout << "SortRaw-CBEnergySum cut set improperly" <<endl;
			return kFALSE;
		 }
		 cout << endl;
	}	
	else {
		SortRawCBESum = 0;
	}	

	// Cut on raw number of particle tracks (raw data cut)
	config = ReadConfig("SortRaw-NParticles");
	if (strcmp(config.c_str(), "nokey") == 0) SortRawNParticles = 0;
	else if( sscanf( config.c_str(), "%d %s %d %s %d %s\n", 
		&SR_nPart_total, 	string_in1,
		&SR_nPart_CB,   	string_in2,
        &SR_nPart_TAPS,  	string_in3) == 6 )
	{		
		SortRawNParticles = 1;	

		// Total Number of particle tracks
		CheckConfigCondition(string_in1, &SR_nPart_total_condition, string_out1);
		if(SR_nPart_total_condition == -1) SortRawNParticles = 0;
		
		// Number of particle tracks in CB
		CheckConfigCondition(string_in2, &SR_nPart_CB_condition, string_out2);
		if(SR_nPart_CB_condition == -1) SortRawNParticles = 0;

		// Number of particle tracks in TAPS
		CheckConfigCondition(string_in3, &SR_nPart_TAPS_condition, string_out3);
		if(SR_nPart_TAPS_condition == -1) SortRawNParticles = 0;

		if(SortRawNParticles == 1)
		{
			cout << "Sort: Total # of Particles before reconstruction   " 
				 << SR_nPart_total << " "<< string_out1 << endl;
			cout << "Sort: # of Particles before reconstruction in CB   " 
				 << SR_nPart_CB << " "<< string_out2 << endl;
			cout << "Sort: # of Particles before reconstruction in TAPS " 
				 << SR_nPart_TAPS << " "<< string_out3 << endl;
		 }
		 else
		 {
			cout << "SortRaw-NParticles cut set improperly" <<endl;
			return kFALSE;
		 }
		 cout << endl;
	}
	else {
		SortRawNParticles = 0;
	}
	
	// Cut on reconstructed number of particles
	config = ReadConfig("Sort-NParticles");
	if (strcmp(config.c_str(), "nokey") == 0) SortNParticles = 0;
	else if( sscanf( config.c_str(), "%d %s\n", 
		&S_nParticles, string_in1) == 2 )
	{

		CheckConfigCondition(string_in1, &S_nParticles_condition, string_out1);
		if(S_nParticles_condition == -1) SortNParticles = 0;
		else SortNParticles = 1;
		
		if(SortNParticles == 1)
			cout << "Sort: Total # of Particles after reconstruction    " 
				 << S_nParticles << " "<< string_out1 << endl;
		else 
		{
			cout << "Sort-NParticles cut set improperly" <<endl;
			cout << "Continuing with this cut turned off!" << endl;
		 }
	}	
	else {
		SortNParticles = 0;
	}	
	
	// Cut on individual particle properties
	Int_t instance = 0;
	n_cut_SP = 0;
	n_cut_SN = 0;
	do
	{
		char pdg[256], cond[256];	
		Int_t num, condition;
		Double_t th_min, th_max;

		config = ReadConfig("Sort-Particle",instance);
		if( sscanf( config.c_str(), "%s %d %s %lf %lf\n", pdg, &num, cond, &th_min, &th_max) == 5 )
		{			
			CheckConfigCondition(cond, &condition, string_out1);
			
			if((strcmp(pdg,"charged") == 0) || (strcmp(pdg,"neutral") == 0))
			{
				SN_n[n_cut_SN] = num;
				if (strcmp(pdg,"charged") == 0) SN_type[n_cut_SN] = 1;
				else SN_type[n_cut_SN] = 0;
				SN_condition[n_cut_SN] = condition;
				SN_theta_min[n_cut_SN] = th_min;
				SN_theta_max[n_cut_SN] = th_max;
				n_cut_SN++;
				
				cout << "Sort: " << pdg << " (" << num << cond <<","<<th_min<<"," << th_max<<")" << endl;
			}	
			else if(pdgDB->GetParticle(pdg) != 0x0) // Check for particle in pdg database
			{
				SP_n[n_cut_SP] 		   = num;
				SP_type[n_cut_SP] 	   = pdgDB->GetParticle(pdg)->PdgCode();
				SP_condition[n_cut_SP] = condition;
				SP_theta_min[n_cut_SP] = th_min;
				SP_theta_max[n_cut_SP] = th_max;
				n_cut_SP++;
				
				cout << "Sort: " << pdg << " (" << num << cond <<","<<th_min<<"," << th_max<<")" << endl;
			}
			else{
				cout << endl << "ERROR unknown particle type ("  << pdg 
					 << ") set by Sort-Particle." << endl << endl;
				return kFALSE;
			}
		}	
		else if (strcmp(config.c_str(), "nokey") != 0)
		{
			cout << "Sort-Particle cut was set improperly" << endl;
			return kFALSE;		
		}	
		instance++;
	} while (strcmp(config.c_str(), "nokey") != 0);

	cout << endl;
	return kTRUE;
}

void	GSort::Reconstruct()
{
}

Bool_t GSort::SortAnalyseEvent()
{

	// Sort on raw variables before analysis (increases speed)
	if(SortRawNParticles == 1)
	{
		switch (SR_nPart_total_condition) 	// Total number of particles
		{
			case 0:
				if (GetNParticles() < SR_nPart_total) 	return kFALSE;
				break;
			case 1:
				if (GetNParticles() > SR_nPart_total) 	return kFALSE;
				break;
			case 2:
				if (GetNParticles() != SR_nPart_total) 	return kFALSE;
				break;
		}
		
		switch (SR_nPart_CB_condition) 	// Number of particles in CB
		{
			case 0:
				if (GetNCB() < SR_nPart_CB) 			return kFALSE;
				break;
			case 1:
				if (GetNCB() > SR_nPart_CB) 			return kFALSE;
				break;
			case 2:
				if (GetNCB() != SR_nPart_CB) 			return kFALSE;
				break;
		}
		
		switch (SR_nPart_TAPS_condition) 	// Number of particles in TAPS
		{
			case 0:
				if (GetNTAPS() < SR_nPart_TAPS) 		return kFALSE;
				break;
			case 1:
				if (GetNTAPS() > SR_nPart_TAPS) 		return kFALSE;
				break;
			case 2:
				if (GetNTAPS() != SR_nPart_TAPS)		return kFALSE;
				break;
		}
	}
	
	if(SortRawCBESum == 1)
	{
		switch (SR_CBESum_condition) 	// Crystal Ball Energy Sum
		{
			case 0:
				if (GetESum() < SR_CBESum) 				return kFALSE;
				break;
			case 1:
				if (GetESum() > SR_CBESum) 				return kFALSE;
				break;
			case 2:
				if (GetESum() != SR_CBESum)				return kFALSE;
				break;
		}
	}	
	
	return kTRUE;
}


Bool_t GSort::SortFillEvent()
{
	if(SortNParticles == 1)
	{
		switch (S_nParticles_condition) // Number of reconstructed part
		{
			case 0:
				if(GoATTree_GetNParticles() < S_nParticles)  return kFALSE;
				break;
			case 1:
				if(GoATTree_GetNParticles() > S_nParticles)  return kFALSE;
				break;
			case 2:
				if(GoATTree_GetNParticles() != S_nParticles) return kFALSE;
				break;
		}
	}

	for(Int_t i = 0; i < n_cut_SN; i++)
	{
		if(!SortOnNeutrality(SN_type[i],	
							SN_n[i], 
							SN_condition[i], 
							SN_theta_min[i], 
							SN_theta_max[i]))		return kFALSE;
	}			

	for(Int_t i = 0; i < n_cut_SP; i++)
	{
		if(!SortOnParticle( SP_type[i],	
							SP_n[i], 
							SP_condition[i], 
							SP_theta_min[i], 
							SP_theta_max[i]))		return kFALSE;
	}		
			
	// No cut failed, so return TRUE
	return kTRUE;

}


Bool_t	GSort::SortOnParticle(Int_t PDG, Int_t Num, Int_t cond, Double_t ThetaMin, Double_t ThetaMax)
{
	Int_t NumberFound = 0;
	
	for (Int_t i = 0; i < GoATTree_GetNParticles(); i++)
	{
		if (GoATTree_GetPDG(i) == PDG)
		{
			// Check theta limits
			if ((GoATTree_GetTheta(i) <= ThetaMin) || 
				(GoATTree_GetTheta(i) >= ThetaMax))
			return kFALSE;
			NumberFound++;
		}
	}

	switch (cond)
	{
		case 0:
			if (NumberFound < Num) 	return kFALSE;
			break;
		case 1:
			if (NumberFound > Num) 	return kFALSE;
			break;
		case 2:
			if (NumberFound != Num)	return kFALSE;
			break;
	}
			
	return kTRUE;
}

Bool_t	GSort::SortOnNeutrality(Int_t charge, Int_t Num, Int_t cond, Double_t ThetaMin, Double_t ThetaMax)
{
	Int_t NumberFound = 0;
	
	switch (charge)
	{
		case 0: // Neutral sort
			for (Int_t i = 0; i < GoATTree_GetNParticles(); i++)
			{
				if (GoATTree_GetCharge(i) == 0) // neutral!
				{
					//Check theta limits
					if ((GoATTree_GetTheta(i) <= ThetaMin) || 
						(GoATTree_GetTheta(i) >= ThetaMax))
					return kFALSE;
					NumberFound++;
				}
			}
			break;
			
		case 1: // Charged sort
			for (Int_t i = 0; i < GoATTree_GetNParticles(); i++)
			{
				if (GoATTree_GetCharge(i) != 0) // charged!
				{
					//Check theta limits
					if ((GoATTree_GetTheta(i) <= ThetaMin) || 
						(GoATTree_GetTheta(i) >= ThetaMax))
					return kFALSE;
					NumberFound++;
				}
			}
			break;
	}	

	switch (cond)
	{
		case 0:
			if (NumberFound < Num) 	return kFALSE;
			break;
		case 1:
			if (NumberFound > Num) 	return kFALSE;
			break;
		case 2:
			if (NumberFound != Num)	return kFALSE;
			break;
	}
			
	return kTRUE;
}

void GSort::CheckConfigCondition(char string[], int *condition, std::string& string_out)
{
		if(strcmp(string,"+") == 0) 
		{
			string_out = "or more ";
			(*condition) = 0;
		}
		else if (strcmp(string,"-") == 0) 
		{
			string_out = "or less ";
			(*condition) = 1;
		}		
		else if (strcmp(string,"=") == 0) 
		{
			string_out = "exactly ";
			(*condition) = 2;
		}
		else
		{
			string_out = "error ";
			(*condition) = -1;
		}

}
