#pragma once
#include "Directory.h"
#include <iostream>
#include <fstream>
Directory::Directory(int size)
{
	this->size = size;
	arr = new Client[size];
}

Directory::Directory()
{
	arr = nullptr;
	size = 0;
}

Client Directory::searchByName(string name)
{
	ofstream out("out.txt", ios::app);
	for (int i = 0; i < size; i++)
	{
		if (arr[i].getName() == name)
		{
			cout << "Client found: " << endl;
			arr[i].show();
		}
		out << "Client found" << arr[i].getName() << " | "
			<< arr[i].getOwner() << " | "
			<< arr[i].getNumber() << " | "
			<< arr[i].getTypeOfActivity() << endl;
		out.close();
		return arr[i];
	}
	cout << "Client not found" << endl;
	out << "Client not found: " << name << endl;
	out.close();
	return Client();
}

Client Directory::searchByOwner(string owner)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i].getOwner() == owner)
		{
			cout << "Client found: " << endl;
			return arr[i];
		}
	}
	cout << "Client not found" << endl;
	return Client();
}

Client Directory::searchByNumber(string number)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i].getNumber() == number)
		{
			cout << "Client found: " << endl;
			return arr[i];
		}
	}
	cout << "Client not found" << endl;
	return Client();
}

Client Directory::searchByTypeOfActivity(string typeOfActivity)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i].getTypeOfActivity() == typeOfActivity)
		{
			cout << "Client found: " << endl;
			return arr[i];
		}
	}
	cout << "Client not found" << endl;
	return Client();
}

bool Directory::addClient(const Client &obj) // передаётся ссылка на существующий объект, без копирования. запомнить!!!
{
	if (count >= size)
	{
		return false;
	}
	arr[count++] = obj;
	return true;
}
