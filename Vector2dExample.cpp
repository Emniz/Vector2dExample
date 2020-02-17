#include "stdafx.h"
#include <iostream>
#include "Vector2d.h"
using namespace std;

int main()
{
	Vector2d a = Vector2d(1, 2);
	Vector2d b = Vector2d(2, 3);
	cout << "Vector a: " << (string)a << endl;
	cout << "Vector b: " << (string)b << endl;
	a.setx(3);
	a.sety(4);
	a.print();
	b.print();
	Vector2d sum = a + b;
	Vector2d mult = a * 5;
	Vector2d sub = a - b;
	cout << "a + b = " << (string)sum << endl;
	cout << "a * 5 = " << (string)mult << endl;
	cout << "a - b = " << (string)sub << endl;
	cout << "a * b = " << a.scalarMult(b) << endl;
	cout << "Length vector a = " << a.length() << endl;
	cout << "Length vector b = " << b.length() << endl;
	cout << "Angle = " << a.angle(b) << endl;
}