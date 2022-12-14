#include "RightTriangle.h"
#include "Triangle.h"
#include "MyException.h"


RightTriangle::RightTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
	: Triangle(sideLengthA, sideLengthB, sideLengthC, angleA, angleB, angleC)
{
	if (angleC != 90)
	{
		throw MyException("Угол C не равен 90");
	}
	
	Triangle::nameOfFigure_ = "Прямоугольный треугольник";
};