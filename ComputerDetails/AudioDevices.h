#pragma once
#include "Peripheral.h"
ref class AudioDevices :
	public Peripheral
{
public:
	double lowestFrequency;
	double highestFrequency;
	double impedance;
	AudioDevices(String ^ name, double power, double heat, double volume, double weight, Plugs plug, double lowestFrequency, double highestFrequency, double impedance);
};

