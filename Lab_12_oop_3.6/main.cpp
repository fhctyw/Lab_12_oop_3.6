#include <iostream>
#include <fstream>
#include <Windows.h>
#include "D3.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	B1 o0(777);
	cout << "B1 o0(777);" << endl;
	cout << "sizeof(B1) = " << sizeof(B1) << endl;
	cout << endl << "Ієрархія класу B1: " << endl;
	o0.show_B1();
	B2 o1(222);
	cout << "B1 o1(222);" << endl;
	cout << "sizeof(B2) = " << sizeof(B2) << endl;
	cout << endl << "Ієрархія класу B2: " << endl;
	o1.show_B2();
	D1 o2(1000, 2000);
	cout << "D1 o2(1000, 2000);" << endl;
	cout << "sizeof(D1) = " << sizeof(D2) << endl;
	cout << endl << "Ієрархія класу D1: " << endl;
	o2.show_D1();
	D2 o3(100, 200, 300, 400);
	cout << "D2 o3(100, 200, 300, 400);" << endl;
	cout << "sizeof(D3) = " << sizeof(D3) << endl;
	cout << endl << "Ієрархія класу D3: " << endl;
	o3.show_D2();
	B3 o4(1);
	cout << "B3 o4(1);" << endl;
	cout << "sizeof(B3) = " << sizeof(B3) << endl;
	cout << endl;
	o4.show_B3();
	D3 o5(1, 123, 34, 31, 14, 144);
	cout << "D3 o4(1, 123, 34, 31, 14, 144);" << endl;
	cout << "sizeof(D3) = " << sizeof(D3) << endl;
	cout << endl;
	o5.show_D3();

}