#pragma once
#include "Peripheral.h"
ref class StandartInput :
	public Peripheral
{
public:
	int buttonsCount;
	StandartInput(String ^ name, double power, double heat, double volume, double weight, Plugs plug, int buttons);
};

