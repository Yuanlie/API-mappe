#include <iostream>
#include <cstdlib>

using namespace std;

int global = 0;							// Globale Variable

int main()
{														// Beginn Block 1
	char zeichen;
	int a = 1;
	int b = -5;
	
	cout << endl;
	cout << "Block 1:" << endl;
	cout << "global: " << global << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
	{													// Beginn Block 2
		float a = 3847.4;
		float c = -7.4123;

		cout << endl;
		cout << "Block 2:" << endl;
		cout << "global: " << global << endl;
		cout << "a: " << a << endl;
		cout << "b: " << b << endl;
		cout << "c: " << c << endl;
	}													// Ende Block 2

	cout << endl;
	cout << "Block 1:" << endl;
	cout << "global: " << global << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;//keine Definition von c.
	
    system("PAUSE");
    return EXIT_SUCCESS;
}														// Ende Block 1
