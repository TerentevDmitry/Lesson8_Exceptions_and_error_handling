#include "RightTriangle.h"
#include "Triangle.h"
#include "MyException.h"


RightTriangle::RightTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
	: Triangle(sideLengthA, sideLengthB, sideLengthC, angleA, angleB, angleC)
{
	Triangle::nameOfFigure_ = "������������� �����������";

	if (angleC_ != 90)
	{
		throw MyException("���� C �� ����� 90");
	}
};