#pragma once
#include "ElectricalAppliance.h"
#include "Plugs.h"
ref class Peripheral :
	public ElectricalAppliance
{
public:
	Plugs plugType;
	Peripheral(String ^ name, double power, double heat, double volume, double weight, Plugs plug);
};

