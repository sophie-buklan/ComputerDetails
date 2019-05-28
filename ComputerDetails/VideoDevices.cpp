#include "VideoDevices.h"


VideoDevices::VideoDevices(String ^ name, double power, double heat, double volume, double weight, Plugs plug, double frameRate, int dotsHeight, int dotsWidth)
	: Peripheral(name, power, heat, volume, weight, plug)
{
	this->frameRate = frameRate;
	this->dotsHeight = dotsHeight;
	this->dotsWidth = dotsWidth;
}
