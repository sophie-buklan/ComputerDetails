#pragma once
#include "Peripheral.h"
ref class VideoDevices :
	public Peripheral
{
public:
	double frameRate;
	int dotsHeight;
	int dotsWidth;
	VideoDevices(String ^ name, double power, double heat, double volume, double weight, Plugs plug, double frameRate, int dotsHeight, int dotsWidth);
};

