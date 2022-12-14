#pragma once
#include "Figure.h"

class Quadrilateral : public Figure
{
public:
	Quadrilateral(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD,
		int angleA, int angleB, int angleC, int angleD);
};