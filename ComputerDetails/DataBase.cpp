#include "DataBase.h"



DataBase::DataBase()
{
	this->pathFromFile = "DataBase.txt";
	this->setListApplianceFromFile();
}

void DataBase::updateDataBase()
{
	StreamWriter^ writeDataBase = File::CreateText(this->pathFromFile);
	for (int i = 0; i < this->arrayAppliance->Length; i++)
	{
		writeDataBase->WriteLine(this->arrayAppliance[i]->getInfo());
	}
	writeDataBase->Close();
}

int DataBase::findAppliance(ElectricalAppliance ^ appliance)
{
	for (int i = 0; i < this->arrayAppliance->Length; i++)
	{
		if (this->arrayAppliance[i] == appliance)
		{
			return i;
		}
	}
	return -1;
}


void DataBase::addAppliance(ElectricalAppliance ^ appliance)
{
	int length = this->arrayAppliance->Length;
	if (this->arrayAppliance->Length == 0)
	{
		Array::Resize(this->arrayAppliance, length + 1);
		this->arrayAppliance[this->arrayAppliance->Length - 1] = appliance;
	}
	else
	{
		if (this->findAppliance(appliance) < 0)
		{
			Array::Resize(this->arrayAppliance, length + 1);
			this->arrayAppliance[this->arrayAppliance->Length - 1] = appliance;
		}
	}
	this->updateDataBase();
}


cli::array<ElectricalAppliance^>^ deleted(cli::array<ElectricalAppliance^>^ oldArray, int index)
{
	cli::array<ElectricalAppliance^>^ newArray;
	Array::Resize(newArray, oldArray->Length - 1);
	int j = 0;
	for (int i = 0; i < oldArray->Length; i++)
	{
		if (i != index)
		{
			newArray[j] = oldArray[i];
			j++;
		}
	}
	return newArray;
}


void DataBase::deleteAppliance(ElectricalAppliance ^ appliance)
{
	int length = this->arrayAppliance->Length - 1;
	int index = this->findAppliance(appliance);
	if (this->arrayAppliance->Length != 0)
	{
		if (index >= 0)
		{
			cli::array<ElectricalAppliance^>^ newArray = deleted(this->arrayAppliance, index);
			this->arrayAppliance = newArray;
		}
	}
	this->updateDataBase();
}

void DataBase::editAppliance(ElectricalAppliance ^ oldAppliance, ElectricalAppliance ^ newAppliance)
{
	int index = this->findAppliance(oldAppliance);
	this->arrayAppliance[index] = newAppliance;
	this->updateDataBase();
}

void DataBase::setListApplianceFromFile()
{
	cli::array<String^>^ arrayPlant = File::ReadAllLines(this->pathFromFile);
	Array::Resize(this->arrayAppliance, arrayPlant->Length);
	for (int i = 0; i < arrayPlant->Length; i++)
	{
		if (arrayPlant[i] != String::Empty)
		{
			ElectricalAppliance ^ appliance;
			cli::array<String^>^ line = arrayPlant[i]->Split('|');
			if (line[0] == "ComputationalUnit")
			{
				appliance = gcnew ComputationalUnit(line[1],
					Convert::ToDouble(line[2]),
					Convert::ToDouble(line[3]),
					Convert::ToDouble(line[4]),
					Convert::ToDouble(line[5]),
					Convert::ToDouble(line[6]),
					Convert::ToInt32(line[7]),
					Convert::ToDouble(line[8])
			}
			if (line[0] == "AudioDevices")
			{
				appliance = gcnew AudioDevices(
					line[1], 
					Convert::ToDouble(line[2]), 
					Convert::ToDouble(line[3]),
					Convert::ToDouble(line[4]),
					Convert::ToDouble(line[5]),
					(Plugs)line[6],
					Convert::ToDouble(line[7]),
					Convert::ToDouble(line[8]),
					Convert::ToDouble(line[9])
				);
			}
			if (line[0] == "Memory")
			{
				appliance = gcnew Memory(Convert::ToDouble(line[2]),
					Convert::ToDouble(line[3]),
					Convert::ToDouble(line[4]),
					Convert::ToDouble(line[5]),
					Convert::ToDouble(line[6]),
					Convert::ToDouble(line[7])
				);
			}
			if (line[0] == "StandartInput")
			{
				appliance = gcnew StandartInput(
					line[1],
					Convert::ToDouble(line[2]),
					Convert::ToDouble(line[3]),
					Convert::ToDouble(line[4]),
					Convert::ToDouble(line[5]),
					(Plugs)line[6],
					Convert::ToInt32(line[7])
				);
			}
			if (line[0] == "VideoDevices")
			{
				appliance = gcnew VideoDevices(
					line[1],
					Convert::ToDouble(line[2]),
					Convert::ToDouble(line[3]),
					Convert::ToDouble(line[4]),
					Convert::ToDouble(line[5]),
					(Plugs)line[6],
					Convert::ToDouble(line[7]),
					Convert::ToInt32(line[8]),
					Convert::ToInt32(line[9])
				);
			}
			this->arrayAppliance[i] = appliance;
		}
	}
}

int compareName(ElectricalAppliance ^ a, ElectricalAppliance ^ b)
{
	return String::Compare(a->name, b->name, StringComparison::OrdinalIgnoreCase);
}

int comparePrice(ElectricalAppliance ^ a, ElectricalAppliance ^ b)
{
	return (a->price - b->price);
}

int compareInputPower(ElectricalAppliance ^ a, ElectricalAppliance ^ b)
{
	return (a->inputPower - b->inputPower);
}

int compareSupplyPower(ElectricalAppliance ^ a, ElectricalAppliance ^ b)
{
	return String::Compare(a->supplyPower, b->supplyPower, StringComparison::OrdinalIgnoreCase);
}

int compareVoltage(ElectricalAppliance ^ a, ElectricalAppliance ^ b)
{
	return (a->voltage - b->voltage);
}

cli::array<ElectricalAppliance^>^ DataBase::searchAppliance(String ^ input)
{
	cli::array<ElectricalAppliance^>^ searched;
	Array::Resize(searched, 0);
	for (int i = 0; i < this->arrayAppliance->Length; i++)
	{
		if (this->arrayAppliance[i]->getInfo()->Contains(input))
		{
			Array::Resize(searched, searched->Length + 1);
			searched[searched->Length - 1] = this->arrayAppliance[i];
		}
	}
	return searched;
}

cli::array<ElectricalAppliance^>^ DataBase::searchAppliance(int min, int max)
{
	cli::array<ElectricalAppliance^>^ searched;
	Array::Resize(searched, 0);
	for (int i = 0; i < this->arrayAppliance->Length; i++)
	{
		cli::array<String^>^ line = this->arrayAppliance[i]->getInfo()->Split('|');
		for (int j = 0; j < line->Length; j++)
		{
			int temp;
			if (Int32::TryParse(line[j], temp) == true && (min <= temp && temp <= max))
			{
				Array::Resize(searched, searched->Length + 1);
				searched[searched->Length - 1] = this->arrayAppliance[i];
				break;
			}
		}
	}
	return searched;
}

cli::array<ElectricalAppliance^>^ DataBase::sort(String ^ typeSort)
{
	cli::array<ElectricalAppliance^>^ array = this->arrayAppliance;
	if (typeSort == "Наименование")
	{
		Array::Sort(array, gcnew Comparison<ElectricalAppliance^>(compareName));
	}
	if (typeSort == "Цена")
	{
		Array::Sort(array, gcnew Comparison<ElectricalAppliance^>(comparePrice));
	}
	if (typeSort == "Потребляемая мощность")
	{
		Array::Sort(array, gcnew Comparison<ElectricalAppliance^>(compareInputPower));
	}
	if (typeSort == "Источник питания")
	{
		Array::Sort(array, gcnew Comparison<ElectricalAppliance^>(compareSupplyPower));
	}
	if (typeSort == "Напряжение")
	{
		Array::Sort(array, gcnew Comparison<ElectricalAppliance^>(compareVoltage));
	}
	return array;
}

cli::array<ElectricalAppliance^>^ DataBase::getListAppliance()
{
	return this->arrayAppliance;
}
