#pragma once
#include "Triangle.h"
#include "MyException.h"


class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC);

	/*bool checkValid() const override
	{
		if (sideLengthA_ == sideLengthC_)
		{
			return true;
		}
		else
		{
			return false;
		}

	}*/




};