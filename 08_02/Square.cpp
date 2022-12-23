#include "Square.h"


Square::Square(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
	: Quadrilateral(sideLengthA, sideLengthB, sideLengthC, sideLengthD, angleA, angleB, angleC, angleD)
{
	Quadrilateral::nameOfFigure_ = "Квадрат";

	if ((sideLengthA_ != sideLengthB_ || sideLengthB_ != sideLengthC_ || sideLengthC_ != sideLengthD_) 
		&& (angleA_ != 90 || angleB_ != 90 || angleC_ != 90 || angleD_ != 90))
	{
		throw MyException("Все стороны должны быть равны, Все углы должны быть равны 90");
	}

	if (sideLengthA_ != sideLengthB_ || sideLengthB_ != sideLengthC_ || sideLengthC_ != sideLengthD_)
	{
		throw MyException("Все стороны должны быть равны");
	}

	if (angleA_ != 90 || angleB_ != 90 || angleC_ != 90 || angleD_ != 90)
	{
		throw MyException("Все углы должны быть равны 90");
	}
}