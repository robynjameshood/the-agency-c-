#include "pch.h"
#include "MiddleEast.h"


MiddleEast::MiddleEast()
{
	threatLevel = 8; // Initializes both inherited member variables.
	temperature = 30;
	state = "";
}

MiddleEast::~MiddleEast()
{
}

void MiddleEast::display()
{
	cout << "Middle East";
}

double MiddleEast::getThreatLevel()
{
	return threatLevel;
}

double MiddleEast::getTemperature()
{
	return temperature;
}

string MiddleEast::setAgentCity()
{
	int random = rand() % 4 + 1; //generates random number.

	switch (random)
	{
	case 1:
		threatLevel = 8.9;
		return state = "Syria";
		break;
	case 2:
		threatLevel = 7.5;
		return state = "Israel";
		break;
	case 3:
		threatLevel = 7;
		return state = "Jordan";
		break;
	case 4:
		threatLevel = 8.5;
		return state = "Lebanon";
		break;
	case 5:
		threatLevel = 7.2;
		return state = "Egypt";
	default:
		break;
	}
	return state;
}

string MiddleEast::getAgentCity()
{
	return state;
}