#pragma once
#include "Triangle.h"

class RightTriangle : public Triangle
{
public:
	RightTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC);

	bool checkValid() const override
	{
		return angleC_ != 90;
	}
};