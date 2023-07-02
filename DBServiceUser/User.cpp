#include "User.h"

User::User()
{
	_id = 0;
	_name = "";
	_surname = "";
	_phone = "";
}

User::User(int id, string name, string surname, string phone)
{
	_id = id;
	_name = name;
	_surname = surname;
	_phone = phone;
}

User::~User() {}

void User::setId(int id) { _id = id; }

void User::setName(string name) { _name = name; }

void User::setSurname(string surname) { _surname = surname; }

void User::setPhone(string phone) { _phone = phone; }

int User::getId() { return _id; }

string User::getName() { return _name; }

string User::getSurname() { return _surname; }

string User::getPhone(){return _phone;}

ostream& operator<<(ostream& out, const User& right)
{
	out << "ID: " + to_string(right._id) + "\t" + right._name + " " + right._surname + " (phone: " + right._phone + ")\n";
	return out;
}

istream& operator>>(istream& in, User& right)
{
	cout << "Input ID: ";
	in >> right._id;
	cout << "Input Name: ";
	in >> right._name;
	cout << "Input Surname: ";
	in >> right._surname;
	cout << "Input Phone: ";
	in >> right._phone;
	return in;
}
