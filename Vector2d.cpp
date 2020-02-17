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

