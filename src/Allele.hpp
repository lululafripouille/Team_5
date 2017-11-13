#ifndef ALLELE_H
#define ALLELE_H

#include <vector>
#include <fstream> 

typedef std::vector<std::vector<char>> DNAbases;


/*! \class Allele
 * 
 * this class gathers the characteristics of each allele 
 * retrieved from the data base
 * 
 */
 
 
class Allele
{
	private: 
	
		DNAbases sequences_;
		std::vector<double> frequences_; 
		unsigned int nb_allele_;
		
		/** retrieves the DNA sequence of the alleles contained 
		 * in the genotype-database and initialises the attribut sequences_
		 *   
		 * */ 
		void readFromFile(ostream& Data);
	
	public: 
	
		/** \fn allele constructor 
		 *
		 * */ 
		Allele(); 
		
		/** allele destructor 
		 *  
		 * 
		 * */  
		 ~Allele(); 
		 
		 DNAbases getSequences();

		 std::vector<double> getFrequences();

		 /**get number of allele
		  */
		 unsigned int getNbAllele();

};

