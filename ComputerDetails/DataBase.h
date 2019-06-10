#include "AudioDevices.h"
#include "ComputationalUnit.h"
#include "Memory.h"
#include "StandartInput.h"
#include "VideoDevices.h"

#pragma once

#include "ElectricalAppliance.h"
using namespace System::IO;
ref class DataBase
{
private:
	cli::array<ElectricalAppliance^>^ arrayAppliance;
	String ^ pathFromFile;
public:
	DataBase();
	int findAppliance(ElectricalAppliance ^ computerPart);
	void updateDataBase();
	void addAppliance(ElectricalAppliance ^ computerPart);
	void deleteAppliance(ElectricalAppliance ^ computerPart);
	void editAppliance(ElectricalAppliance ^ oldComputerPart, ElectricalAppliance ^ newComputerPart);
	void setListApplianceFromFile();
	cli::array<ElectricalAppliance^>^ searchAppliance(String ^ input);
	cli::array<ElectricalAppliance^>^ searchAppliance(int min, int max);
	cli::array<ElectricalAppliance^>^ sort(String ^ typeSort);
	cli::array<ElectricalAppliance^>^ getListAppliance();
};

