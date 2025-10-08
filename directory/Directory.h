#pragma once
#include <string>
#include <iostream>
#include "Client.h"
#include <fstream>
using namespace std;
class Directory
{
	Client* arr;
	int size;
	int count;
public:
	Directory(int size);
	Directory();
	Client searchByName(string name);
	Client searchByOwner(string owner);
	Client searchByNumber(string number);
	Client searchByTypeOfActivity(string typeOfActivity);
	bool addClient(const Client& obj);
	~Directory();
};

