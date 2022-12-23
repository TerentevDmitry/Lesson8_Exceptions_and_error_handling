#include "Parallelogram.h"
#include "MyException.h"


Parallelogram::Parallelogram(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
	: Quadrilateral(sideLengthA, sideLengthB, sideLengthC, sideLengthD, angleA, angleB, angleC, angleD)
{
	Quadrilateral::nameOfFigure_ = "Параллелограмм";

	if ((sideLengthA_ != sideLengthC_ || sideLengthB_ != sideLengthD_)
		&& (angleA_ != angleC_ || angleB_ != angleD_))
	{
		throw MyException("Все стороны должны быть равны, Все углы должны быть равны 90");
	}

	if (sideLengthA_ != sideLengthC_ || sideLengthB_ != sideLengthD_)
	{
		throw MyException("Стороны a,c и b,d должны быть попарно равны");
	}

	if (angleA_ != angleC_ || angleB_ != angleD_)
	{
		throw MyException("Углы A,C и B,D должны быть попарно равны");
	}
}