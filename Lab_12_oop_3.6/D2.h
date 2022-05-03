#pragma once
#include "D1.h"

class D2 : private D1
{
	int d2;
public:
	D2(int b1 = 0, int b2 = 0, int d1 = 0, int d2 = 0) : D1(b1, b2, d1), d2(d2) {};
	void show_D2()
	{
		cout << "class D2" << endl;
		cout << "show_D2()" << endl
			<< "D2::d2 = " << d2 << endl;
	}
};

