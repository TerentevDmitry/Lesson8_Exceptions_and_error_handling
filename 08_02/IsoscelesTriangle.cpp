#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int sideLengthA, int sideLengthB, int angleA, int angleB)
	: Triangle(sideLengthA, sideLengthB, sideLengthA, angleA, angleB, angleA)
{
	Triangle::nameOfFigure_ = "Равнобедренный треугольник";
};