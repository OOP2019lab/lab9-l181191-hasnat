#include <iostream>
#include <stdio.h>
using namespace std;

#ifndef PROJECT_H
#define PROJECT_H
class Project
{
	char* name;
	int budget;
	int duration; //estimate duration of project in weeks

public: 
	Project(char* nam, int budge, int dura)
	{
		int x =strlen(nam);
		name = new char [x];
		for (int i=0; i<x;i++)
			name[i] = nam[i];

		budget = budge;
		duration = dura;
	}


	// an overloaded constructor
	Project(const Project&a)
	{
		int x =strlen(a.name);
		name = new char [x];
		for (int i=0; i<x;i++)
			name[i] = a.name[i];

		budget = a.budget;
		duration = a.duration;
	}
	//copy constructor
	friend ostream& operator<<(ostream& osObject, const Project& a)
	{
		osObject << a.name << endl << a.budget <<endl << a.duration << endl;
		return osObject;
	}
	//overloaded insertion operator
	const Project &   operator=(const Project& other);
	//overloaded assignment operator
	void setBudget(int bud)
	{
		budget = bud;
	}
	~Project();
}; 
#endif