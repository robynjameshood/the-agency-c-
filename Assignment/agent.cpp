#include "pch.h"
#include "agent.h"
#include <string>
#include <iostream>

using namespace std;

agent::agent(string incomingName, bool incomingStatus, int incomingSalary, double incomingBonus ) // constructor parameters.
{
	name = incomingName; // initialised constructor members.
	isActive = incomingStatus;
	_Salary = incomingSalary;
	_Bonus = incomingBonus;
	
}

agent::agent()
{

}


//Deconstructor.
agent::~agent()
{
}


string agent::getAgentName() // getter/setter accessors.
{
	return name;
}

void agent::setAgentName(string aName)
{
	name = aName;
}

bool agent::getAgentStatus()
{
	return isActive;
}

string agent::getStringStatus()
{
	return _status;
}

void agent::setAgentStatus(string aStatus)
{
	_status = aStatus;
}


string agent::getAgentLocation()
{
	return _Location;
}

void agent::setAgentLocation(string aLocation)
{
	_Location = aLocation;
}

double agent::getSalary()
{
	return _Salary;
}

void agent::setSalary(double aSalary)
{
	_Salary = aSalary;
}



