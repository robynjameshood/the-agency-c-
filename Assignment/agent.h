#pragma once
#include <string>
#include <iostream>
using namespace std;

#ifndef agents_h
#define agents_h
#endif // !agents_h


class agent
{
public: // prototypes // method declaration signatures.
	agent(string, bool, int, double);
	agent();
	//Overload constructor.
	~agent();
	double getSalary();
	void setSalary(double);
	void setAgentLocation(string);
	string getAgentName();
	void setAgentName(string);
	bool getAgentStatus();
	void setAgentStatus(string);
	string getAgentLocation();
	string getStringStatus();

private:
	//Private member variables.
	string name;
	bool isActive;
	string _Location;
	double _Salary;
	string _status;
	double _Bonus;
};

