#pragma once
#include <string>
#include <iostream>
using namespace std;
class Client
{
	string name;
	string owner;
	string number;
	string address;
	string typeOfActivity;
public:
	Client(string name, string owner, string number, string address, string typeOfActivity);
	Client();
	void show();
	string getName();
	string getOwner();
	string getNumber();
	string getAddress();
	string getTypeOfActivity();
	~Client();
};

