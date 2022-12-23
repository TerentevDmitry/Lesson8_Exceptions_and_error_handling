#pragma once
#include "Figure.h"

class Triangle : public Figure
{
public:
	Triangle(int sideLengthA, int sideLengthB, int sideLengthC,
		int angleA, int angleB, int angleC);

};