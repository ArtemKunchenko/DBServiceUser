//Methods:
//Add users to Vector
//User output
//You can sort users by one criterion, for example by id number
//
//User Model :
//You can add more fields to the user if you wish.
//Class User{ id, first name, surname, phone number };
//
//CRUD:
//1.  Create
//2.  Read
//3.  Update
//4.  Delete

#include<iostream>
#include "User.h"
#include "DBServiceUser.h"
using namespace std;

int main()
{
	User u1(2, "Ivan", "Ivanov", "3-89-58");
	User u2(1, "Alex", "Alexandrov", "4-98-45");
	User u3(3, "Daniel", "Gordon", "5-87-47");
	/*cout << u1;
	cout << u2;*/
	DBServiceUser U;
	U.Create(u1);
	U.Create(u2);
	U.Create(u3);
	/*U.Create();*/
	U.Read();
	/*U.Read(1);
	U.Read(2);*/
	cout << endl;
	/*U.Update();*/
	U.Delete();
	cout << endl;
	U.Read();
	


	system("pause");
	return 0;
}