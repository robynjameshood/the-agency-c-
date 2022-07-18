#pragma once
#include "location.h"
class Europe : public location
{
public:
	Europe();
	~Europe();

	void display();
	double getThreatLevel(); //method signature/declaration 
	double getTemperature(); //method signature/declaration
	string setAgentCity();
	string getAgentCity();

private:
};

