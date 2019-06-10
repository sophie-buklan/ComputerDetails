#pragma once

using namespace System;

//Ёлектроприбор
ref class ElectricalAppliance
{
public:
	String ^ name;
	double power;
	double heat;
	double volume;
	double weight;
	ElectricalAppliance(String ^ name, double power, double heat, double volume, double weight);
	virtual String ^ getInfo() = 0;
	virtual String ^ toString() = 0;
};

