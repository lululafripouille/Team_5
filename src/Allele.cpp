#include "Allele.hpp"

Allele::Allele(std::string sequence, double frequency)
: sequence_(sequence), frequency_(frequency) {}
	 
Allele::~Allele(){}
    
void Allele::readFromFile(std::ostream& Data){}

std::string Allele::getSequence(){
	return sequence_;
}

double Allele::getFrequency(){
	return frequency_;
} 

void Allele::setFrequency(double freq) {
	frequency_ = freq;
}


