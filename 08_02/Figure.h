#pragma once
#include <string>

class Figure
{
protected:
	std::string nameOfFigure_;
	bool haveFourSides_ = false; //признак что четыре стороны
	int sideLengthA_ = 0;
	int sideLengthB_ = 0;
	int sideLengthC_ = 0;
	int sideLengthD_ = 0;
	int angleA_ = 0;
	int angleB_ = 0;
	int angleC_ = 0;
	int angleD_ = 0;

public:
	std::string getNameOfFigure();
	int getHaveFourSides();

	int getSideLengthA();
	int getSideLengthB();
	int getSideLengthC();
	int getSideLengthD();

	int getAngleA();
	int getAngleB();
	int getAngleC();
	int getAngleD();
};