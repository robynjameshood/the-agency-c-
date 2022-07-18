#include "pch.h"
#include "ASIA.h"


ASIA::ASIA()
{
	threatLevel = 9; // initializes inherited member variables.
	temperature = 18.5;
	state = "";
}

void ASIA::display()
{
	cout << "ASIA";
}

ASIA::~ASIA()
{
}

double ASIA::getThreatLevel() // getter/properties accessor.
{
	return threatLevel;
}

double ASIA::getTemperature() // getter/properties accessor.
{
	return temperature;
}


string ASIA::setAgentCity()
{
	int random = rand() % 4 + 1; //generates random number.

	switch (random) // switches to case based on the randum number generated.
	{
	case 1:
		threatLevel = 8.5; // sets military based threat level for that city.
		return state = "China"; // sets city/state name.
		break;
	case 2:
		threatLevel = 7.5;
		return state = "Hong-Kong";
		break;
	case 3:
		threatLevel = 7;
		return state = "Japan";
		break;
	case 4:
		threatLevel = 9.5;
		return state = "North Korea";
		break;
	case 5:
		threatLevel = 7.2;
		return state = "Taiwon";
	default:
		break;
	}
	return state;
}

string ASIA::getAgentCity()
{
	return state;
}
