#pragma once
#include "DevicesWithMemory.h"
ref class ComputationalUnit :
	public DevicesWithMemory
{
public:
	int cores;
	double frequency;
	ComputationalUnit(String ^ name, double power, double heat, double volume, double weight, double memorySize, int cores, double frequency);
};

