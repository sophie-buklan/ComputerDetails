#pragma once
#include "ElectricalAppliance.h"

//Устройства с памятью
ref class DevicesWithMemory :
	public ElectricalAppliance
{
public:
	double memorySize;
	DevicesWithMemory(String ^ name, double power, double heat, double volume, double weight, double memorySize);
};

