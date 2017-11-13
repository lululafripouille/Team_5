#include "Allele.hpp"

Allele::Allele(){}
	 
Allele::~Allele(){}
    
void Allele::readFromFile(ostream& Data){}

std::string Allele::getSequence(){
	return sequence_;
}

double Allele::getFrequency(){
	return frequency_;
} 
