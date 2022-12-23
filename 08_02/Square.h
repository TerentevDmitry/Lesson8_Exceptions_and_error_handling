#pragma once
#include "Quadrilateral.h"
#include "MyException.h"

class Square : public Quadrilateral
{
public:
	Square(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD);
};