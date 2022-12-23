#include "Rectangle.h"
#include "MyException.h"

Rectangle::Rectangle(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
	: Quadrilateral(sideLengthA, sideLengthB, sideLengthC, sideLengthD, angleA, angleB, angleC, angleD)
{
	Quadrilateral::nameOfFigure_ = "Прямоугольник";

	if ((sideLengthA_ != sideLengthC_ || sideLengthB_ != sideLengthD_) && (angleA_ != 90 || angleB_ != 90 || angleC_ != 90 || angleD_ != 90))
	{
		throw MyException("Стороны a,c и b,d должны быть попарно равны, Все углы должны быть равны 90");
	}

	if (sideLengthA_ != sideLengthC_ || sideLengthB_ != sideLengthD_)
	{
		throw MyException("Стороны a,c и b,d должны быть попарно равны");
	}

	if (angleA_ != 90 || angleB_ != 90 || angleC_ != 90 || angleD_ != 90)
	{
		throw MyException("Все углы должны быть равны 90");
	}





}