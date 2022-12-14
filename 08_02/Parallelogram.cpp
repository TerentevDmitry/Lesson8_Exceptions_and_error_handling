#include "Parallelogram.h"

Parallelogram::Parallelogram(int sideLengthA, int sideLengthB, int angleA, int angleB)
	: Quadrilateral(sideLengthA, sideLengthB, sideLengthA, sideLengthB, angleA, angleB, angleA, angleB)
{
	Quadrilateral::nameOfFigure_ = "ֿאנאככוכמדנאלל";
}