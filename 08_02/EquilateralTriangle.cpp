#include "EquilateralTriangle.h"
#include "MyException.h"

EquilateralTriangle::EquilateralTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
	: Triangle(sideLengthA, sideLengthB, sideLengthC, angleA, angleB, angleC)
{
	Triangle::nameOfFigure_ = "–авносторонний треугольник";

	if ((sideLengthA_ != sideLengthB_ && sideLengthB_ != sideLengthC_) && (angleA_ != angleB_ && angleB_ != angleC_))
	{
		throw MyException("¬се стороны должны быть равны, все углы должны быть равны 60");
	}

	if (sideLengthA_ != sideLengthB_ && sideLengthB_ != sideLengthC_)
	{
		throw MyException("¬се стороны должны быть равны");
	}

	if (angleA_ != angleB_ && angleB_ != angleC_)
	{
		throw MyException("все углы должны быть равны 60");
	}

};