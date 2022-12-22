#include "IsoscelesTriangle.h"
#include "MyException.h"

IsoscelesTriangle::IsoscelesTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
	: Triangle(sideLengthA, sideLengthB, sideLengthC, angleA, angleB, angleC)
{
	Triangle::nameOfFigure_ = "�������������� �����������";

	if (sideLengthA_ == sideLengthC_)
	{
		throw MyException("���� C12 �� ����� 90");
	}
	
	if (angleA_ == angleC_)
	{
		throw MyException("���� C22 �� ����� 90");
	}
	
	
	//if (angleC_ != 90)
	//{
	//	throw ; //MyException("���� C �� ����� 90");
	//}


};