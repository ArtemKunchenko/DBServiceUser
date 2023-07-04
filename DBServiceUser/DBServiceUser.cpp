#include "DBServiceUser.h"

void DBServiceUser::Create()
{
	User user;
	cin >> user;
	_users.push_back(user);
}

void DBServiceUser::Create(User user){ _users.push_back(user); }

void DBServiceUser::Read(){for (int i = 0; i < _users.getSize(); i++) cout << _users[i];}

void DBServiceUser::Read(int index)
{
	if (index >= 0 && index < _users.getSize()) cout << _users[index];
	else cout << "User doesn't exist\n";
}

void DBServiceUser::Update()
{
	cout << "Input index: ";
	cin >> _index;
	if (_index >= 0 && _index < _users.getSize())
	{
		cout << "Current data: " << _users[_index];
		cin >> _users[_index];
	}
	else cout << "User doesn't exist\n";
}

void DBServiceUser::Update(int index)
{
	if (index >= 0 && index < _users.getSize())
	{
		cout << "Current data: " << _users[index];
		cin >> _users[index];
	}
	else cout << "User doesn't exist\n";
}

void DBServiceUser::Delete()
{
	cout << "Input index: ";
	cin >> _index;
	if (_index >= 0 && _index < _users.getSize())
	{
		Vector<User> temp;
		for (int i = 0; i < _users.getSize(); i++)
		{
			if (i != _index) temp.push_back(_users[i]);
		}
		_users = temp;

	}
	else cout << "User doesn't exist\n";
}

void DBServiceUser::Delete(int index)
{
	if (index >= 0 && index < _users.getSize())
	{
		Vector<User> temp;
		for (int i = 0; i < _users.getSize(); i++)
		{
			if (i != index) temp.push_back(_users[i]);
		}
		_users = temp;
	
	}
	else cout << "User doesn't exist\n";
}

void DBServiceUser::SortId()
{
	User temp;
	for (int i = 0; i < _users.getSize() - 1; i++)
	{
		for (int j = i + 1; j < _users.getSize(); j++)
		{
			if (_users[j].getId() < _users[i].getId())
			{
				temp =_users[j];
				_users[j]= _users[i];
				_users[i]=temp;
			}
		}
	}
}

void DBServiceUser::SortName()
{
	User temp;
	for (int i = 0; i < _users.getSize() - 1; i++)
	{
		for (int j = i + 1; j < _users.getSize(); j++)
		{
			
			if (_users[j].getName() < _users[i].getName())
			{
				temp = _users[j];
				_users[j] = _users[i];
				_users[i] = temp;
			}
		}
	}
}

void DBServiceUser::SortSurname()
{
	User temp;
	for (int i = 0; i < _users.getSize() - 1; i++)
	{
		for (int j = i + 1; j < _users.getSize(); j++)
		{

			if (_users[j].getSurname() < _users[i].getSurname())
			{
				temp = _users[j];
				_users[j] = _users[i];
				_users[i] = temp;
			}
		}
	}
}

void DBServiceUser::SortPhone()
{
	User temp;
	for (int i = 0; i < _users.getSize() - 1; i++)
	{
		for (int j = i + 1; j < _users.getSize(); j++)
		{

			if (_users[j].getPhone() < _users[i].getPhone())
			{
				temp = _users[j];
				_users[j] = _users[i];
				_users[i] = temp;
			}
		}
	}
}
