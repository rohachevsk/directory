#include "Client.h"

Client::Client(string name, string owner, string number, string address, string typeOfActivity)
{
	this->name = name;
	this->owner = owner;
	this->number = number;
	this->address = address;
	this->typeOfActivity = typeOfActivity;
}

Client::Client()
{
	this->name = "";
	this->owner = "";
	this->number = "";
	this->address = "";
	this->typeOfActivity = "";
}
void Client::show()
{
	cout << "Name: " << this->name << endl;
	cout << "Owner: " << this->owner << endl;
	cout << "Number: " << this->number << endl;
	cout << "Address: " << this->address << endl;
	cout << "Type of activity: " << this->typeOfActivity << endl;
}
string Client::getName()
{
	return this->name;
}
string Client::getOwner()
{
	return this->owner;
}
string Client::getNumber()
{
	return this->number;
}
string Client::getAddress()
{
	return this->address;
}
string Client::getTypeOfActivity()
{
	return this->typeOfActivity;
}
Client::~Client()
{
}
