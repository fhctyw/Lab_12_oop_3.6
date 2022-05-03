#pragma once	
#include <iostream>
using namespace std;

class B3
{
	int b3;
public:
	B3(int x = 0) : b3(x){};
	void show_B3()
	{
		cout << "class B3" << endl;
		cout << "show_B3()" << endl
			<< "B3::b3 = " << b3 << endl;
	}
};

