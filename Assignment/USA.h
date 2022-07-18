#pragma once
#include "location.h"
class USA : public location
{
public:
	USA();
	~USA();

	void display();
	double getBaseThreatLEvel();
	double getBaseTemperature();
	string setAgentCity();
	string getAgentCity();

};

