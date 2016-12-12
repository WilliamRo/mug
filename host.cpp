#include "alfa.h"
#include "alfa.cpp"

#include <iostream>

using namespace std;

int main()
{
	cout << "==================> Host launched." << endl;

	Alfa alfa;
	alfa.yell();

	cout << "==================> Host shuted down." << endl;
		
	return 0; 
}
