#include "StandartInput.h"




StandartInput::StandartInput(String ^ name, double power, double heat, double volume, double weight, Plugs plug, int buttons)
	: Peripheral(name, power, heat, volume, weight, plug)
{
	this->buttonsCount = buttons;
}
