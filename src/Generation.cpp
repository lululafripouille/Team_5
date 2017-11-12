#include "Generation.hpp"

Generation::Generation(){}
		
Generation::~Generation(){}
	
void Generation::update(double step){}

std::vector<Allele*> Generation::getIndividual(){
	return individual_;
}

std::vector<double> Generation::getFrequency(){
	return frequency_;
}
		
double Generation::getGenerationLength(){
	return generation_length_;
}	
