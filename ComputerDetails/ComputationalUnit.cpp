#include "ComputationalUnit.h"




ComputationalUnit::ComputationalUnit(String ^ name, double power, double heat, double volume, double weight, double memorySize, int cores, double frequency)
	: DevicesWithMemory(name, power, heat, volume, weight, memorySize)
{
	this->cores = cores;
	this->frequency = frequency;
}
