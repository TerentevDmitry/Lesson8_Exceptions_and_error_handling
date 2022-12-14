#include "Rectangle.h"

Rectangle::Rectangle(int sideLengthA, int sideLengthB)
	: Quadrilateral(sideLengthA, sideLengthB, sideLengthA, sideLengthB, 90, 90, 90, 90)
{
	Quadrilateral::nameOfFigure_ = "Прямоугольник";
}