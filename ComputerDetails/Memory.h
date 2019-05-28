#pragma once
#include "DevicesWithMemory.h"
ref class Memory :
	public DevicesWithMemory
{
public:
	double accessSpeed;
	Memory(String ^ name, double power, double heat, double volume, double weight, double memorySize, double accessSpeed);
};

