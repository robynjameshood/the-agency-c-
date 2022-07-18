#pragma once
#include "location.h"
class ASIA : public location
{
public:
	ASIA();
	~ASIA();

	void display();
	double getThreatLevel(); //method signature/declaration
	double getTemperature(); //method signature/declaration
	string setAgentCity();
	string getAgentCity();
};

