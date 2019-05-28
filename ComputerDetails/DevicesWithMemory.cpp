#include "DevicesWithMemory.h"



DevicesWithMemory::DevicesWithMemory(String ^ name, double power, double heat, double volume, double weight, double memorySize)
	: ElectricalAppliance(name, power, heat, volume, weight)
{
	this->memorySize = memorySize;
}
