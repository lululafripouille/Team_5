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
	
		std::vector<Allele*> individual_;
		std::vector<double> frequency_;
		
		double generation_length_; 
	
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
		void update(double step);
		
		/**getter
		 */
		std::vector<Allele*> getIndividual();
		/**getter of frequency
		*/
		std::vector<double> getFrequency();
		/**getter of the lenght of one generation
		 */
		double getGenerationLength();	

};

#endif
