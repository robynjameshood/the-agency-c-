#include "pch.h"
#include "location.h"
#include "agent.h"
#include <string>
using namespace std;


location::location()
{
	threatLevel = 3; // Initializes member variables
	temperature = 10; // base temperature.
}


location::~location()
{
}

void location::display()
{
	cout << "\nIsolating agent's location..." << endl; // base implementation of location method in the parent class.
}

void location::assignLocation(vector<agent> &member, int size) //Assigns each agent within the vector a location, a text-status and a base salary using a case/switch for readability and modification ease.
{
	for (int i = 0; i < size; i++)
	{
		int random = rand() % 4 + 1; //generates random number.

		if (member[i].getAgentStatus() == true) // Tests "IsActive" for required condition.
		{
			
			switch (random) // uses the random number generated to select a location/assign text status and set salary via switch).
			{
			case 1:
				member[i].setAgentLocation("Europe");
				member[i].setAgentStatus("Active");
				member[i].setSalary(45000);
				break;
			case 2:
				member[i].setAgentLocation("MiddleEast");
				member[i].setAgentStatus("Active");
				member[i].setSalary(60000);
				break;
			case 3:
				member[i].setAgentLocation("USA");
				member[i].setAgentStatus("Active");
				member[i].setSalary(28000);
				break;
			case 4:
				member[i].setAgentLocation("ASIA");
				member[i].setAgentStatus("Active");
				member[i].setSalary(40000);
				break;
			}
		}

		else if (member[i].getAgentStatus() == false)
		{
			switch (random)
			{
			case 1:
				member[i].setAgentLocation("Europe");
				member[i].setAgentStatus("Inactive");
				member[i].setSalary(25000);
				break;
			case 2:
				member[i].setAgentLocation("MiddleEast");
				member[i].setAgentStatus("Inactive");
				member[i].setSalary(30000);
				break;
			case 3:
				member[i].setAgentLocation("USA");
				member[i].setAgentStatus("Inactive");
				member[i].setSalary(32000);
				break;
			case 4:
				member[i].setAgentLocation("ASIA");
				member[i].setAgentStatus("Inactive");
				member[i].setSalary(22000);
				break;
			}
		}
	}
} 

double location::getThreatLevel()
{
	return threatLevel;
}

double location::getTemperature()
{
	return temperature;
}

string location::setAgentCity()
{
	return state;
}

string location::getAgentCity()
{
	return state;
}



