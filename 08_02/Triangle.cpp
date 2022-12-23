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

	if ((angleA_ + angleB_ + angleC_) != 180)
	{
		throw MyException("Cумма углов не равна 180");
	}
}