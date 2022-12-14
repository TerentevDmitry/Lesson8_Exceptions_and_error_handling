#include "Square.h"

Square::Square(int sideLengthA)
	: Quadrilateral(sideLengthA, sideLengthA, sideLengthA, sideLengthA, 90, 90, 90, 90)
{
	Quadrilateral::nameOfFigure_ = " вадрат";
}