#include "stdafx.h"
#include "Vector2d.h"
#include <iostream>
#include <string>
using namespace std;

Vector2d::~Vector2d()
{
}

Vector2d::Vector2d(double x, double y) {
	this->x = x;
	this->y = y;
}
Vector2d::Vector2d(double x1, double y1, double x2, double y2) {
	this->x = x2 - x1;
	this->y = y2 - y1;
}

Vector2d::Vector2d(const Vector2d& vec) {
	this->x = vec.x;
	this->y = vec.y;
}

void Vector2d::setx(double x) {
	this->x = x;
}

double Vector2d::getx() {
	return this->x;
}

void Vector2d::sety(double y) {
	this->y = y;
}

double Vector2d::gety() {
	return this->y;
}

Vector2d Vector2d::sum(Vector2d vec) {
	return Vector2d(x + vec.x, y + vec.y);
}

Vector2d Vector2d::mult(double t) {
	return Vector2d(x * t, y * t);
}
Vector2d Vector2d::sub(Vector2d vec) {
	return Vector2d(x - vec.x, y - vec.y);
}
double Vector2d::scalarMult(Vector2d vec) {
	return this->x * vec.x + this->y * vec.y;
}
void Vector2d::print() {
	cout << "(" << x << ";" << y << ")" << endl;
}
double Vector2d::length() {
	return sqrt(x * x + y * y);
}
double Vector2d::angle(Vector2d vec) {
	return acos((*this) * vec / (this->length() * vec.length()));
}
Vector2d Vector2d::operator+(const Vector2d& vec) const
{
	return Vector2d(x + vec.x, y + vec.y);
}
Vector2d Vector2d::operator-(const Vector2d& vec) const
{
	return Vector2d(x - vec.x, y - vec.y);
}
double Vector2d::operator*(const Vector2d& vec) const
{
	return (x * vec.x + y * vec.y);
}
Vector2d Vector2d::operator*(const double& vec) const
{
	return Vector2d(x * vec, y * vec);
}
Vector2d operator*(double k, Vector2d& vec)
{
	return Vector2d(vec.x * k, vec.y * k);
}
Vector2d& Vector2d::operator++() {
	this->x++;
	this->y++;
	return *this;
}
Vector2d Vector2d::operator++(int) {
	Vector2d temp = Vector2d(x, y);
	this->x++;
	this->y++;
	return temp;
}
Vector2d& Vector2d::operator--() {
	this->x--;
	this->y--;
	return *this;
}
Vector2d Vector2d::operator--(int) {
	Vector2d temp = Vector2d(x, y);
	this->x--;
	this->y--;
	return temp;
}
const Vector2d& Vector2d::operator+= (const Vector2d& vec) {
	this->x += vec.x;
	this->y += vec.y;
	return *this;
}
const Vector2d& Vector2d::operator-=(const Vector2d& vec) {
	this->x -= vec.x;
	this->y -= vec.y;
	return *this;
}
const Vector2d& Vector2d::operator*=(const double& k)
{
	x *= k;
	y *= k;
	return *this;
}
Vector2d::operator std::string()
{
	std::string s = "( " + to_string(x) + " ; " + to_string(y) + " )";
	return s;
}