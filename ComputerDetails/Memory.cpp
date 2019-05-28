#include "Memory.h"




Memory::Memory(String ^ name, double power, double heat, double volume, double weight, double memorySize, double accessSpeed)
	: DevicesWithMemory(name, power, heat, volume, weight, memorySize)
{
	this->accessSpeed = accessSpeed;
}
