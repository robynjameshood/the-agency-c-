#pragma once
#include "location.h"
class MiddleEast : public location
{
public:
	MiddleEast();
	~MiddleEast();

	void display();
	double getThreatLevel();
	double getTemperature();
	string setAgentCity();
	string getAgentCity();
};

