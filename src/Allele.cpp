#include "Allele.hpp"

Allele::Allele(){}
	 
Allele::~Allele(){}
    
void Allele::readFromFile(ostream& Data){}

DNAbases Allele::getSequences(){
	return sequences_;
}

std::vector<double> Allele::getFrequences(){
	return frequences_;
} 

unsigned int Allele::getNbAllele(){
	return nb_allele_;
}
