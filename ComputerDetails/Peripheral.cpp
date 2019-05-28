#include "Peripheral.h"



Peripheral::Peripheral(String ^ name, double power, double heat, double volume, double weight, Plugs plug) : ElectricalAppliance(name, power, heat, volume, weight)
{
	this->plugType = plug;
}
