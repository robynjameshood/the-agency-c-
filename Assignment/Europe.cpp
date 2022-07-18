#include "pch.h"
#include "Europe.h"


Europe::Europe()
{
	threatLevel = 8; // Initializes inherited member variables.
	temperature = 17;
	state = "";
}


Europe::~Europe()
{
}

void Europe::display()
{
	cout << "Europe";
}

double Europe::getThreatLevel() // getter/properties accessor.
{
	return threatLevel;
}

double Europe::getTemperature() // getter/properties accessor.
{
	return temperature;
}

string Europe::setAgentCity()
{
	int random = rand() % 5 + 1; //generates random number.

	switch (random)
	{
	case 1:
		threatLevel = 9;
		return state = "Russia";
		break;
	case 2:
		threatLevel = 3.5;
		return state = "France";
		break;
	case 3:
		threatLevel = 6.5;
		return state = "Czech Republic";
		break;
	case 4:
		threatLevel = 3.5;
		return state = "Belgium";
		break;
	case 5:
		threatLevel = 5.5;
		return state = "Germany";
	default:
		break;
	}
	return state;
}

string Europe::getAgentCity()
{
	return state;
}
