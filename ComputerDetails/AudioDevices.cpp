#include "AudioDevices.h"




AudioDevices::AudioDevices(String ^ name, double power, double heat, double volume, double weight, Plugs plug, double lowestFrequency, double highestFrequency, double impedance)
	: Peripheral(name, power, heat, volume, weight, plug)
{
	this->highestFrequency = highestFrequency;
	this->lowestFrequency = lowestFrequency;
	this->impedance = impedance;
}
