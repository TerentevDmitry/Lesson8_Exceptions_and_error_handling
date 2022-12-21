#include "Triangle.h"
#include "Figure.h"
#include "MyException.h"


Triangle::Triangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
{
	if ((angleA + angleB + angleC) != 180) 
	{
		throw MyException("C���� ����� �� ����� 180");
	}
	
	nameOfFigure_ = "�����������";
	sideLengthA_ = sideLengthA;
	sideLengthB_ = sideLengthB;
	sideLengthC_ = sideLengthC;
	angleA_ = angleA;
	angleB_ = angleB;
	angleC_ = angleC;
}