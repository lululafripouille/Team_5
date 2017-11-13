#ifndef GENERATION_H
#define GENERATION_H

#include <vector>

/*! \class Generation
 * 
 * represents the state of all the alleles (at this point just the 
 * frequency ) after at a certain time in the simulation.
 * 
 */
 
 
class Generation
{
	private: 
	
		std::vector<Allele*> individuals_;
	
	public: 
	
		/** \fn generation constructor 
		 *
		 * */ 
		Generation(); 
		
		/** generation destructor 
		 * 
		 * */  
		~Generation();
		
		/** updates every step until the generation lenght is reached
		*@param duration of one step //could be defined as a cst somewhere else (remarque au groupe)
		*/
		void update();
		
		/**getter
		 * 
		 */
		std::vector<Allele*> getIndividuals();


};

#endif
