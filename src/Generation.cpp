#include "Generation.hpp"

Generation::Generation(){}
		
Generation::~Generation(){}
	
void Generation::update(){}

std::vector<Allele*> Generation::getIndividual(){
	return individuals_;
}
