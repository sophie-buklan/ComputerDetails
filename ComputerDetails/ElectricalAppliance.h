#pragma once

using namespace System;

ref class ElectricalAppliance
{
public:
	String ^ name;
	double power;
	double heat;
	double volume;
	double weight;
	ElectricalAppliance(String ^ name, double power, double heat, double volume, double weight);
};

