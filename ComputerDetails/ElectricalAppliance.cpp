#include "ElectricalAppliance.h"


ElectricalAppliance::ElectricalAppliance(String ^ name, double power, double heat, double volume, double weight)
{
	this->name = name;
	this->power = power;
	this->heat = heat;
	this->volume = volume;
	this->weight = weight;
}
