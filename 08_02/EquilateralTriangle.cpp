#include "EquilateralTriangle.h"
#include "MyException.h"

EquilateralTriangle::EquilateralTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
	: Triangle(sideLengthA, sideLengthB, sideLengthC, angleA, angleB, angleC)
{
	Triangle::nameOfFigure_ = "�������������� �����������";

	if ((sideLengthA_ != sideLengthB_ && sideLengthB_ != sideLengthC_) && (angleA_ != angleB_ && angleB_ != angleC_))
	{
		throw MyException("��� ������� ������ ���� �����, ��� ���� ������ ���� ����� 60");
	}

	if (sideLengthA_ != sideLengthB_ && sideLengthB_ != sideLengthC_)
	{
		throw MyException("��� ������� ������ ���� �����");
	}

	if (angleA_ != angleB_ && angleB_ != angleC_)
	{
		throw MyException("��� ���� ������ ���� ����� 60");
	}

};