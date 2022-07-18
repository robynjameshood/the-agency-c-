// Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "agent.h"
#include "location.h"
#include "MiddleEast.h"
#include "USA.h"
#include "ASIA.h"
#include "Europe.h"
#include <vector>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;

int const maxAgents = 5; // size of vector.
vector<agent> members; // globally declared vector for accessibility purposes.

location *map = nullptr; //Initializes global pointer to null.
MiddleEast midEast; //instance of a class / class object.
Europe EU;
USA usa;
ASIA asia;

void outputToFile(vector<agent> &data)
{
	ofstream outputFile;
	outputFile.open("AgentData.txt", ios_base::app);

	for (int i = 0; i < maxAgents; i++)
	{
		if (members.size() == 0)
		{
			cout << "\nNo data in database." << endl;
			break;
		}
		else if (data[i].getAgentLocation() == "Europe")
		{
			map = &EU;
			outputFile << "Agent Name: " << data[i].getAgentName() << endl; // output information to file.
			outputFile << "Status: " << data[i].getStringStatus() << endl;
			outputFile << "Continent: " << data[i].getAgentLocation() << endl;
			outputFile << "City/State: " << map->getAgentCity() << endl;
			outputFile << "Threat level: " << map->getThreatLevel() << endl;
			outputFile << "Temperature: " << map->getTemperature() << " Degrees" << endl;
			outputFile << "Base Salary: " << data[i].getSalary() << endl;
			outputFile << "Bonus: " << (members[i].getSalary() * .20) * map->getThreatLevel() << endl;
			outputFile << "Total annual salary: " << (members[i].getSalary() * .20) * map->getThreatLevel() + members[i].getSalary() << endl << endl;
			outputFile << "----------NEXT ENTRY----------" << endl; // Separates agent entries for readability.
		}

		else if (data[i].getAgentLocation() == "MiddleEast")
		{
			map = &midEast;
			outputFile << "Agent Name: " << data[i].getAgentName() << endl; // output information to file.
			outputFile << "Status: " << data[i].getStringStatus() << endl;
			outputFile << "Continent: " << data[i].getAgentLocation() << endl;
			outputFile << "City/State: " << map->getAgentCity() << endl;
			outputFile << "Threat level: " << map->getThreatLevel() << endl;
			outputFile << "Temperature: " << map->getTemperature() << " Degrees" << endl;
			outputFile << "Base Salary: " << data[i].getSalary() << endl;
			outputFile << "Bonus: " << (members[i].getSalary() * .20) * map->getThreatLevel() << endl;
			outputFile << "Total annual salary: " << (members[i].getSalary() * .20) * map->getThreatLevel() + members[i].getSalary() << endl << endl;
			outputFile << "----------NEXT ENTRY----------" << endl; // Separates agent entries for readability.
		}

		else if (data[i].getAgentLocation() == "ASIA")
		{
			map = &asia;
			outputFile << "Agent Name: " << data[i].getAgentName() << endl; // output information to file.
			outputFile << "Status: " << data[i].getStringStatus() << endl;
			outputFile << "Continent: " << data[i].getAgentLocation() << endl;
			outputFile << "City/State: " << map->getAgentCity() << endl;
			outputFile << "Threat level: " << map->getThreatLevel() << endl;
			outputFile << "Temperature: " << map->getTemperature() << " Degrees" << endl;
			outputFile << "Base Salary: " << data[i].getSalary() << endl;
			outputFile << "Bonus: " << (members[i].getSalary() * .20) * map->getThreatLevel() << endl;
			outputFile << "Total annual salary: " << (members[i].getSalary() * .20) * map->getThreatLevel() + members[i].getSalary() << endl << endl;
			outputFile << "----------NEXT ENTRY----------" << endl; // Separates agent entries for readability.
		}

		else if (data[i].getAgentLocation() == "USA")
		{
			map = &usa;
			outputFile << "Agent Name: " << data[i].getAgentName() << endl; // output information to file.
			outputFile << "Status: " << data[i].getStringStatus() << endl;
			outputFile << "Continent: " << data[i].getAgentLocation() << endl;
			outputFile << "City/State: " << map->getAgentCity() << endl;
			outputFile << "Threat level: " << map->getThreatLevel() << endl;
			outputFile << "Temperature: " << map->getTemperature() << " Degrees" << endl;
			outputFile << "Base Salary: " << data[i].getSalary() << endl;
			outputFile << "Bonus: " << (members[i].getSalary() * .20) * map->getThreatLevel() << endl;
			outputFile << "Total annual salary: " << (members[i].getSalary() * .20) * map->getThreatLevel() + members[i].getSalary() << endl << endl;
			outputFile << "----------NEXT ENTRY----------" << endl; // Separates agent entries for readability.
		}
	}
	outputFile.close();

	if (members.size() != 0)
	{
		cout << "\nDocument save complete (AgentData.txt)." << endl;
	}
}

void addAgent()
{
	int baseSalary = 0; // initiated base salary variable.
	double bonus = 0; // initiated bonus salary member.
	bool isActive = false; //Used within the location class as a condition test based on the agents status.
	string name;
	string status;

	cout << "Should, for any reason you enter erroneous data, the agent's status will be set to Inactive and assigned base details" << endl;
	for (int i = 0; i < maxAgents; i++)
	{
		cout << "Enter agent name: "; // console output.
		cin >> name; // console input.
		cout << "Enter agent status: Active/Inactive: "; // console output.
		cin >> status; // console input.
		if (status == "Active") //Switches the bool based on the input of the user.
		{
			isActive = true;
		}
		else if (status == "Inactive")
		{
			isActive = false;
		}
		members.push_back({ name, isActive, baseSalary, bonus }); // pushes user input variables into vector storage.
	}
	map->assignLocation(members, maxAgents); //sends the vector and the size of the vector itself to assign each agent a location, a string status and base salary via a randomly generated number.
}

void displayEUAgents()
{
	cout << setw(0) << "\nAgent Name: " << setw(25) << right << "Agent Status: " << setw(25) << "Agent location: " << setw(23) << "Agent city: " << setw(22) << "Threat level: " << setw(27) << "Temperature (Degrees): " << setw(25) << "Agent base salary: " << setw(25) << "Agent bonus salary: " << setw(25) << "Agent total salary: " << setw(25);
	for (int i = 0; i < maxAgents; i++)
	{
		if (members.size() == 0)
		{
			cout << "\nNo agent found" << endl;
		}
		else if (members[i].getAgentLocation() == "Europe") //tests the location of the agent within the members vector to print of the relevant information regarding agents within that location specifically.
		{
			map = &EU; // sets the pointer to the derived class.
			map->setAgentCity(); // sets the city of the agent.
			cout << setw(23) << left << members[i].getAgentName();
			cout << setw(23) << left << members[i].getStringStatus();
			cout << setw(27) << left, map->display();
			cout << setw(20) << left << map->getAgentCity();
			cout << setw(18) << left << map->getThreatLevel();
			cout << setw(29) << left << map->getTemperature();
			cout << setw(24) << left << members[i].getSalary();
			cout << setw(25) << left << (members[i].getSalary() * .20) * map->getThreatLevel();
			cout << setw(23) << left << (members[i].getSalary() * .20) * map->getThreatLevel() + members[i].getSalary();
		}
	}
} // displaya all European agents.

void displayMiddleEastAgents()
{
	cout << setw(0) << "\nAgent Name: " << setw(25) << right << "Agent Status: " << setw(25) << "Agent location: " << setw(23) << "Agent city: " << setw(22) << "Threat level: " << setw(27) << "Temperature (Degrees): " << setw(25) << "Agent base salary: " << setw(25) << "Agent bonus salary: " << setw(25) << "Agent total salary: " << setw(25);
	for (int i = 0; i < maxAgents; i++)
	{
		if (members.size() == 0)
		{
			cout << "\nNo agent found" << endl;
		}
		else if (members[i].getAgentLocation() == "MiddleEast")
		{
			map = &midEast;
			map->setAgentCity();
			cout << setw(23) << left << members[i].getAgentName();
			cout << setw(23) << left << members[i].getStringStatus();
			cout << setw(27) << left, map->display();
			cout << setw(20) << left << map->getAgentCity();
			cout << setw(18) << left << map->getThreatLevel();
			cout << setw(29) << left << map->getTemperature();
			cout << setw(24) << left << members[i].getSalary();
			cout << setw(25) << left << (members[i].getSalary() * .20) * map->getThreatLevel();
			cout << setw(23) << left << (members[i].getSalary() * .20) * map->getThreatLevel() + members[i].getSalary();
		}
	}
} // Displays Middle-East agents

void displayUSAAgents()
{
	cout << setw(0) << "\nAgent Name: " << setw(25) << right << "Agent Status: " << setw(25) << "Agent location: " << setw(23) << "Agent city: " << setw(22) << "Threat level: " << setw(27) << "Temperature (Degrees): " << setw(25) << "Agent base salary: " << setw(25) << "Agent bonus salary: " << setw(25) << "Agent total salary: " << setw(25);
	for (int i = 0; i < maxAgents; i++)
	{
		if (members.size() == 0)
		{
			cout << "\nNo agent found" << endl;
		}
		else if (members[i].getAgentLocation() == "USA")
		{
			map = &usa;
			map->setAgentCity();
			cout << setw(23) << left << members[i].getAgentName();
			cout << setw(23) << left << members[i].getStringStatus();
			cout << setw(27) << left, map->display();
			cout << setw(20) << left << map->getAgentCity();
			cout << setw(18) << left << map->getThreatLevel();
			cout << setw(29) << left << map->getTemperature();
			cout << setw(24) << left << members[i].getSalary();
			cout << setw(25) << left << (members[i].getSalary() * .20) * map->getThreatLevel();
			cout << setw(23) << left << (members[i].getSalary() * .20) * map->getThreatLevel() + members[i].getSalary();
		}
	}
} // Function to display all United State's agents via the console menu.

void displayASIAAgents()
{
	cout << setw(0) << "\nAgent Name: " << setw(25) << right << "Agent Status: " << setw(25) << "Agent location: " << setw(23) << "Agent city: " << setw(22) << "Threat level: " << setw(27) << "Temperature (Degrees): " << setw(25) << "Agent base salary: " << setw(25) << "Agent bonus salary: " << setw(25) << "Agent total salary: " << setw(25);
	for (int i = 0; i < maxAgents; i++)
	{
		if (members.size() == 0)
		{
			cout << "\nNo agents found" << endl;
		}
		else if (members[i].getAgentLocation() == "ASIA")
		{
			map = &asia;
			map->setAgentCity();
			cout << setw(23) << left << members[i].getAgentName();
			cout << setw(23) << left << members[i].getStringStatus();
			cout << setw(27) << left, map->display();
			cout << setw(20) << left << map->getAgentCity();
			cout << setw(18) << left << map->getThreatLevel();
			cout << setw(29) << left << map->getTemperature();
			cout << setw(24) << left << members[i].getSalary();
			cout << setw(25) << left << (members[i].getSalary() * .20) * map->getThreatLevel();
			cout << setw(23) << left << (members[i].getSalary() * .20) * map->getThreatLevel() + members[i].getSalary();
		}
	}
} // set appropriate function for the menu to display all Asia operatives.

void displayAllAgents()
{
	cout << setw(0) << "\nAgent Name: " << setw(25) << "Agent Status: " << setw(25) << "Agent location: " << setw(23) << "Agent city: " << setw(22) << "Threat level: " << setw(27) << "Temperature (Degrees): " << setw(25) << "Agent base salary (\x9C): " << setw(25) << "Agent bonus salary (\x9C): " << setw(25) << "Agent total salary (\x9C): " << setw(25) << endl;
	for (int i = 0; i < maxAgents; i++)
	{
		if (members.size() == 0)
		{
			cout << "\nNo entry\n"; // should the vector be empty, no agents will be shown. Appropriate feedback given to the console/user.
		}
		else if (members[i].getAgentLocation() == "Europe") //tests the location of the agent within the members vector to print of the relevant information regarding agents within that location specifically.
		{
			map = &EU; // sets the pointer to the derived class.
			map->setAgentCity();
			cout << setw(23) << left << members[i].getAgentName();
			cout << setw(23) << left << members[i].getStringStatus();
			cout << setw(27) << left, map->display();
			cout << setw(20) << left << map->getAgentCity();
			cout << setw(18) << left << map->getThreatLevel();
			cout << setw(25) << left << map->getTemperature();
			cout << setw(25) << left << members[i].getSalary();
			cout << setw(25) << left << (members[i].getSalary() * .20) * map->getThreatLevel();
			cout << setw(23) << left << (members[i].getSalary() * .20) * map->getThreatLevel() + members[i].getSalary();
		}

		else if (members[i].getAgentLocation() == "MiddleEast")
		{
			map = &midEast;
			map->setAgentCity();
			cout << setw(23) << left << members[i].getAgentName();
			cout << setw(23) << left << members[i].getStringStatus();
			cout << setw(27) << left, map->display();
			cout << setw(20) << left << map->getAgentCity();
			cout << setw(18) << left << map->getThreatLevel();
			cout << setw(25) << left << map->getTemperature();
			cout << setw(25) << left << members[i].getSalary();
			cout << setw(25) << left << (members[i].getSalary() * .20) * map->getThreatLevel();
			cout << setw(23) << left << (members[i].getSalary() * .20) * map->getThreatLevel() + members[i].getSalary();
		}

		else if (members[i].getAgentLocation() == "USA")
		{
			map = &usa;
			map->setAgentCity();
			cout << setw(23) << left << members[i].getAgentName();
			cout << setw(23) << left << members[i].getStringStatus();
			cout << setw(27) << left, map->display();
			cout << setw(20) << left << map->getAgentCity();
			cout << setw(18) << left << map->getThreatLevel();
			cout << setw(25) << left << map->getTemperature();
			cout << setw(25) << left << members[i].getSalary();
			cout << setw(25) << left << (members[i].getSalary() * .20) * map->getThreatLevel();
			cout << setw(23) << left << (members[i].getSalary() * .20) * map->getThreatLevel() + members[i].getSalary();
		}

		else if (members[i].getAgentLocation() == "ASIA")
		{
			map = &asia;
			map->setAgentCity();
			cout << setw(23) << left << members[i].getAgentName();
			cout << setw(23) << left << members[i].getStringStatus();
			cout << setw(27) << left, map->display();
			cout << setw(20) << left << map->getAgentCity();
			cout << setw(18) << left << map->getThreatLevel();
			cout << setw(25) << left << map->getTemperature();
			cout << setw(25) << left << members[i].getSalary();
			cout << setw(25) << left << (members[i].getSalary() * .20) * map->getThreatLevel();
			cout << setw(23) << left << (members[i].getSalary() * .20) * map->getThreatLevel() + members[i].getSalary();
		}
	}
}

void menu()
{
	int option = NULL;

	cout << "\n\nWelcome to the FBI administrative suite: " << endl;
	

	while (option != 8)
	{
		cout << "\nSelect an option: " <<
			"\n1). Add agents\n2). Display all Agents\n3). Display European Agents\n4). Display Middle-Eastern Agents" <<
			"\n5). Display United States Agents\n6). Display Asia based agents\n7). Save agents to file.\n8). Exit" << endl;
		cout << "Selection: ";

		try
		{
			cin >> option;
			if (!option)
			{
				throw string ("error");
			}
		}
		catch (string e)
		{
			cin.clear();
			cin.ignore();
			cout << "\n\nError; invalid input" << endl;
		}

		switch (option)
		{
		case 1:
			if (members.size() == 0)
			{
				addAgent();
			}
			else
			{
				cout << "\nDatabase full.\n" << endl;
			}
			
			break;
		case 2:
			displayAllAgents(); //calls function.
			break;
		case 3:
			displayEUAgents();
			break;
		case 4:
			displayMiddleEastAgents();
			break;
		case 5:
			displayUSAAgents();
			break;
		case 6:
			displayASIAAgents();
			break;
		case 7:
			outputToFile(members);
			break;
		case 8:
			exit(0);
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL)); // seeds the random number generater using system time.

	menu();

	return 0;

}
