#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int sideLengthA)
	: Triangle(sideLengthA, sideLengthA, sideLengthA, 60, 60, 60)
{
	Triangle::nameOfFigure_ = "Равносторонний треугольник";
};