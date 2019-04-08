#include "Address.h"
#include "Project.h"
#include "Employee.h"
 
void main()
{
	//creating new address
	Address *A1= new Address("19B", "Foggy Street", "London", "UK");
	cout<<*A1<<endl; 	

	Project *P1=new Project("Database Project 1", 15000, 10 );
	Project *P2=new Project("Database Project 2", 100000, 18 );
	Project *P3= new Project("OOP1", 0, 5 );
	cout<<*P1<<endl;
	cout<<*P2<<endl;
	cout<<*P3<<endl;

	Employee *E1=new Employee ("Sam", *A1);
	cout<<*E1;



	system("pause");
}
