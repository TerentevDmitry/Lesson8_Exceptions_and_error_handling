#include "Parallelogram.h"
#include "MyException.h"


Parallelogram::Parallelogram(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
	: Quadrilateral(sideLengthA, sideLengthB, sideLengthC, sideLengthD, angleA, angleB, angleC, angleD)
{
	Quadrilateral::nameOfFigure_ = "��������������";

	if ((sideLengthA_ != sideLengthC_ || sideLengthB_ != sideLengthD_)
		&& (angleA_ != angleC_ || angleB_ != angleD_))
	{
		throw MyException("��� ������� ������ ���� �����, ��� ���� ������ ���� ����� 90");
	}

	if (sideLengthA_ != sideLengthC_ || sideLengthB_ != sideLengthD_)
	{
		throw MyException("������� a,c � b,d ������ ���� ������� �����");
	}

	if (angleA_ != angleC_ || angleB_ != angleD_)
	{
		throw MyException("���� A,C � B,D ������ ���� ������� �����");
	}
}