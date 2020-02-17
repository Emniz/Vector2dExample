#pragma once
#include <string>
class Vector2d
{
	double x, y;
public:
	Vector2d() {};
	Vector2d(double, double);
	Vector2d(double, double, double, double);
	Vector2d(const Vector2d&);
	~Vector2d();
};

