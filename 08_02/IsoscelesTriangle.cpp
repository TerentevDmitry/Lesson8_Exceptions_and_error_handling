#include "IsoscelesTriangle.h"
#include "MyException.h"

IsoscelesTriangle::IsoscelesTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
	: Triangle(sideLengthA, sideLengthB, sideLengthC, angleA, angleB, angleC)
{
	Triangle::nameOfFigure_ = "Равнобедренный треугольник";

	if (sideLengthA_ == sideLengthC_)
	{
		throw MyException("Угол C12 не равен 90");
	}
	
	if (angleA_ == angleC_)
	{
		throw MyException("Угол C22 не равен 90");
	}
	
	
	//if (angleC_ != 90)
	//{
	//	throw ; //MyException("Угол C не равен 90");
	//}


};