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
	void setx(double);
	double getx();
	void sety(double);
	double gety();
	Vector2d sum(Vector2d);
	Vector2d sub(Vector2d);
	Vector2d mult(double);
	double length();
	double scalarMult(Vector2d);
	void print(void);
	double angle(Vector2d);
	Vector2d operator+(const Vector2d&) const;
	Vector2d operator-(const Vector2d&) const;
	double operator*(const Vector2d&) const;
	Vector2d operator*(const double&)const;
	friend Vector2d operator*(double, Vector2d&);
	Vector2d& operator++();
	Vector2d operator++(int);
	Vector2d& operator--();
	Vector2d operator--(int);
	const Vector2d& operator +=(const Vector2d&);
	const Vector2d& operator -=(const Vector2d&);
	const Vector2d& operator *=(const double&);
	operator std::string();
};

