#include "IsoscelesTriangle.h"
#include "MyException.h"

IsoscelesTriangle::IsoscelesTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
	: Triangle(sideLengthA, sideLengthB, sideLengthC, angleA, angleB, angleC)
{
	Triangle::nameOfFigure_ = "Равнобедренный треугольник";

	if (sideLengthA_ != sideLengthC_ && angleA_ != angleC_)
	{
		throw MyException("Стороны a и c не равны и Углы A и C не равны");
	}
	
	if (sideLengthA_ != sideLengthC_)
	{
		throw MyException("Стороны a и c не равны");
	}
	
	if (angleA_ != angleC_)
	{
		throw MyException("Углы A и C не равны");
	}
};