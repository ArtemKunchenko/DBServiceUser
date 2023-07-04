#pragma once
#include<iostream>
#include "Vector.h"
#include "Vector.cpp"
#include "User.h"
using namespace std;

class DBServiceUser
{
public:
	void Create();
	void Create(User user);
	void Read();
	void Read(int index);
	void Update();
	void Update(int index);
	void Delete();
	void Delete(int index);
	void SortId();
	void SortName();
	void SortSurname();
	void SortPhone();
private:
	Vector<User> _users;
	int _index;
};

