#pragma once
#include <string>
#include <iostream>
#include "agent.h"
#include <vector>
using namespace std;


class location
{
public:
	location();

	//Use this class to give the location some character. Such as temperature, population, threat-level, assign paygrade of operative.
	~location();

	void assignLocation(vector<agent> &member, int); // method signature with associating data-type parameters.
	virtual void display();
	virtual double getThreatLevel(); // Virtual method signature/declaration
	virtual double getTemperature();
	virtual string setAgentCity();
	virtual string getAgentCity();

protected: // protected for inheritance benefits.
	double threatLevel;
	double temperature;
	string area;
	int areaCode;
	string state;
};

