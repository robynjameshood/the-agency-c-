#include "pch.h"
#include "USA.h"


USA::USA()
{
	threatLevel = 6.99;
	temperature = 17;
	state = "";
}


USA::~USA()
{
}

void USA::display()
{
	cout << "USA"; // displays derived class characteristics.
}

double USA::getBaseThreatLEvel()
{
	return threatLevel;
}

double USA::getBaseTemperature()
{
	return temperature;
}

string USA::setAgentCity()
{
	int random = rand() % 4 + 1; //generates random number.

	switch (random)
	{
	case 1:
		threatLevel = 5.9;
		return state = "Arizona";
		break;
	case 2:
		threatLevel = 6.5;
		return state = "NYC";
		break;
	case 3:
		threatLevel = 7.9;
		return state = "Pennsylvania";
		break;
	case 4:
		threatLevel = 8.3;
		return state = "Georgia";
		break;
	case 5:
		threatLevel = 5.9;
		return state = "Virginia";
	default:
		break;
	}
	return state;
}

string USA::getAgentCity()
{
	return state;
}
