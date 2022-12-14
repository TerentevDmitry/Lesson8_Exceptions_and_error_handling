#include "Rhomb.h"

Rhomb::Rhomb(int sideLengthA, int angleA, int angleB)
	: Quadrilateral(sideLengthA, sideLengthA, sideLengthA, sideLengthA, angleA, angleB, angleA, angleB)
{
	Quadrilateral::nameOfFigure_ = "Ромб";
}