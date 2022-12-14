#include "PrintFigure.h"
#include <iostream>
#include "Figure.h"
#include "MyException.h"
#include <exception>



void printFigure(Figure* figure)
{
	std::cout << std::endl;
	std::cout << figure->getNameOfFigure() << ":" << std::endl;

	std::cout << "Стороны:";
	std::cout << " a = " << figure->getSideLengthA() << ", b = " << figure->getSideLengthB() << ", с = " << figure->getSideLengthC();
	if (figure->getHaveFourSides())
	{
		std::cout << ", d = " << figure->getSideLengthD() << std::endl;
	}
	else { std::cout << std::endl; }

	std::cout << "Углы:";
	std::cout << " А = " << figure->getAngleA() << ", В = " << figure->getAngleB() << ", С = " << figure->getAngleC();
	if (figure->getHaveFourSides()) { std::cout << ", D = " << figure->getAngleD() << std::endl; }
	else { std::cout << std::endl; }

	//if (figure->getCheckBuild())
	//{
	//	std::cout << "создан." << std::endl;
	//}
}