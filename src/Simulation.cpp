#include "Simulation.hpp"

Simulation::Simulation()
{}

std::vector<Generation*> Simulation::getEvolutionPop(){
	return evolution_pop_;
}
