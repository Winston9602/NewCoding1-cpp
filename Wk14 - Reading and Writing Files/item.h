#pragma once

#include <iostream>
using namespace std;

//in C++, the first enum value is 0, then counts up
enum location { GREATHALL, DUNGEON, COURTYARD, MARKET, INVENTORY };


//IN-CLASS ASSIGNMENT:
//in a new source file (.cpp) and with a header file (.h)...
//...create a new class named item with the following variables and functions
	//string name, int location, item(), use(), examine()

class item
{
private:
	location location;		//where the item is stored

public:
	item();		//constructor
};

