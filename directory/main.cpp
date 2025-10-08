#include <iostream>
#include <string>
#include "Directory.h"
using namespace std;
int main()
{
	Directory dir(2);
	Client obj1("ACA Gym", "John", "1234567890", "123 Main St", "Retail");
	Client obj2("Tech Solutions", "Alice", "0987654321", "456 Elm St", "IT Services");
	dir.addClient(obj1);
	dir.addClient(obj2);
	dir.searchByName("ACA Gym");
	
}

