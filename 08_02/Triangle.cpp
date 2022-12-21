#include "Triangle.h"
#include "Figure.h"
#include "MyException.h"


Triangle::Triangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
{
	nameOfFigure_ = "Треугольник";
	sideLengthA_ = sideLengthA;
	sideLengthB_ = sideLengthB;
	sideLengthC_ = sideLengthC;
	angleA_ = angleA;
	angleB_ = angleB;
	angleC_ = angleC;

	if (checkValid())
	{
		throw MyException("Cумма углов не равна 180");
	}


}