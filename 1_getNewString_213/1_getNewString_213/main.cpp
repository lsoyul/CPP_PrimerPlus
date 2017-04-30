// make memory efficient char array for user input.

#include <iostream>
#include <cstring>

using namespace std;

char* getName(void);

int main()
{
	char* name;

	name = getName();							// assign char address to name

	cout << (int*)name << ": " << name << "\n";	// cout << name  ==  cout << (char*)name

	delete[] name;								// release name memory



	name = getName();							// reuse released memory

	cout << (int*)name << ": " << name << "\n";

	delete[] name;								// release again


	return 0;
}


char* getName()
{
	char temp[80];			// temporary array
	cout << "Input your name: ";
	cin >> temp;

	char* pn = new char[strlen(temp) + 1];

	strcpy(pn, temp);		// copy the string to smaller char array.


	return pn;
}