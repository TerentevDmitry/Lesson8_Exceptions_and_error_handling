#pragma once
#include "Quadrilateral.h"

class Rectangle : public Quadrilateral
{
public:
	Rectangle(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD);
};