#pragma once
#include<iostream>;
#include<string>;
using namespace std;

class User
{
public:
	User();//constructor defaul
	User(int id, string name, string surname, string phone);//constructor with parametrs
	~User();//distructor
	//Setters
	void setId(int id); 
	void setName(string name); 
	void setSurname(string surname); 
	void setPhone(string phone);
	//Getters
	int getId();
	string getName(); 
	string getSurname(); 
	string getPhone();
	//Overloaed operators
	friend ostream& operator<< (ostream& out, const User& right);
	friend istream& operator>>(istream& in, User& right);
private:
	int _id;
	string _name;
	string _surname;
	string _phone;
};
ostream& operator<< (ostream& out, const User& right);
istream& operator>>(istream& in, User& right);

