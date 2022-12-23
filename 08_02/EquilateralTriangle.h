#pragma once
#include "Triangle.h"
class EquilateralTriangle :
    public Triangle
{
public:
    EquilateralTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC);
};