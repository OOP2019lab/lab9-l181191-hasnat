//Address.h
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;


#ifndef ADDRESS_H
#define ADDRESS_H
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
	Address(const Address&);
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
	//const Address &   operator=(const Address& other);
	////overloaded assignment operator
	//~Address();
};
#endif