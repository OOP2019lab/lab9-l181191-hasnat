#include <iostream>
#include <stdio.h>
#include "Project.h"

using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class Employee
{
	char* emp_name; 
	Project **arr;
	int size;
	//Add Data Members here
	
public:
	class Address
	{
	char* house_Number;
	char* street_Name ;
	char * city;
	char* county;

public:
	Address(char* house, char* Street, char * City,char* County)
	{
		int x = strlen(house);
		house_Number = new char [x];
		int y = strlen(Street);
		street_Name = new char[y];
		int z = strlen(City);
		city = new char [z];
		int a=strlen(County);
		county = new char [a];
		for (int i=0; i< x;i++)
			house_Number[i] = house[i];
		for (int i=0; i< y;i++)
			street_Name[i] = Street[i];
		for (int i=0; i< z;i++)
			city[i] = City[i];
		for (int i=0; i< a;i++)
			county[i] = County[i];
	}
	// an overloaded constructor
	Address(const Address& other)
	{
		house_Number = other.house_Number;
		street_Name = other.street_Name;
		city = other.city;
		county = other.county;
	}
	//copy constructor
	friend ostream& operator<<(ostream& osObject, const Address& a)
	{
		int x=strlen(a.house_Number);
		for (int i=0;i<x; i++)
		{
			osObject << a.house_Number[i];
		}
		cout << endl;
		x= strlen(a.street_Name);
		for (int i=0; i<x; i++)
		{
			osObject << a.street_Name[i];
		}
		cout <<endl;
		x =strlen(a.city);
		for (int i=0; i<x; i++)
		{
			osObject << a.city[i];
		}
		cout << endl;
		x=strlen(a.county);
		/*for (int i=0; i<x; i++)
		{*/
			osObject << a.county;
		/*	cout << endl;
		}*/
		return osObject;
	}
	//overloaded insertion operator
	const Address &   operator=(const Address& other)
	{
		house_Number = other.house_Number;
		street_Name = other.street_Name;
		city = other.city;
		county = other.county;
	}
	////overloaded assignment operator
	//~Address();
	};
	
	Employee(char* name, Address& a)
	{
		int x = strlen(name);
		for (int i=0; i<x; i++)
			emp_name[i] = name[i];

		size =0;
		Address a1= a;
		arr = NULL; 
	}
	//oEmployeeverloaded constructor
	Employee(const Employee&);
	//copy constructor
	friend ostream& operator<<(ostream& osObject, const Employee&a)
	{
		osObject << a.emp_name<< endl;
		osObject << a::Address<<endl;
		osObject << a.arr<<endl;
		return osObject;
	}
	//overloaded insertion operator
	const Employee &   operator=(const Employee& other)
	{
	
	}
	//overloaded assignment operator

	void addProject(Project const *a )
	{
		size ++;
		Project **ar = new Project*[size];
		for (int i=0; i<size-1; i++)
		{
			ar[i] = new Project(arr[i][1]);
		}
		ar[size-1] = new Project(a[1]);
		
		arr = new Project*[size];
		for (int i=0; i<size-1; i++)
		{
			arr[i] = new Project(ar[i][1]);
		}
	}
	void removeProject(Project *a )
	{
		size --;
		Project **ar = new Project*[size];
		for (int i=0; i<size-1; i++)
		{
			ar[i] = new Project(arr[i][1]);
		}
		ar[size-1] = new Project(a[1]);
		
		arr = new Project*[size];
		for (int i=0; i<size-1; i++)
		{
			arr[i] = new Project(ar[i][1]);
		}
	}

	~Employee();

}; 
#endif