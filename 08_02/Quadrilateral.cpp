#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
{
	nameOfFigure_ = "Четырехугольник";

	haveFourSides_ = true;

	sideLengthA_ = sideLengthA;
	sideLengthB_ = sideLengthB;
	sideLengthC_ = sideLengthC;
	sideLengthD_ = sideLengthD;

	angleA_ = angleA;
	angleB_ = angleB;
	angleC_ = angleC;
	angleD_ = angleD;
};