#pragma once
#include "B1.h"
#include "B2.h"

class D1 : public B1, private B2
{
	int d1;
public:
	D1(int b1 = 0, int b2 = 0, int d1 = 0) : B1(b1), B2(b2), d1(d1) {};
	void show_D1()
	{
		cout << "class D1" << endl;
		cout << "show_D1()" << endl
			<< "D1::d1 = " << d1 << endl;
	}
};

