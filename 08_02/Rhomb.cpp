#include "Rhomb.h"
#include "MyException.h"

Rhomb::Rhomb(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
	: Quadrilateral(sideLengthA, sideLengthB, sideLengthC, sideLengthD, angleA, angleB, angleC, angleD)
{
	Quadrilateral::nameOfFigure_ = "Ромб";

	if ((sideLengthA_ != sideLengthB_ || sideLengthB_ != sideLengthC_ || sideLengthC_ != sideLengthD_)
		&& (angleA_ != angleC_ || angleB_ != angleD_))
	{
		throw MyException("Все стороны должны быть равны, Углы A,C и B,D должны быть попарно равны");
	}

	if (sideLengthA_ != sideLengthB_ || sideLengthB_ != sideLengthC_ || sideLengthC_ != sideLengthD_)
	{
		throw MyException("Все стороны должны быть равны");
	}

	if (angleA_ != angleC_ || angleB_ != angleD_)
	{
		throw MyException("Углы A,C и B,D должны быть попарно равны");
	}

}