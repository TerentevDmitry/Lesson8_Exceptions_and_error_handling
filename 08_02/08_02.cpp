// 08_Задача 2. Исключения в конструкторах

#include <iostream>
#include <string>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"
#include "PrintFigure.h"
#include "MyException.h"
#include <stdexcept>



int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");
	std::cout << std::endl;
	
	//Triangle Triangle1(10, 20, 30, 50, 60, 70);
	//printFigure(&Triangle1);
	
	
	try
	{
		Triangle Triangle1(10, 20, 30, 50, 60, 77);
		printFigure(&Triangle1);
		std::cout << "создан." << std::endl << std::endl;

	}
	catch (const MyException& Tr)
	{
		std::cout << "Треугольник не был создан. " << std::endl << "Причина: ";
		std::cerr << Tr.what() << std::endl << std::endl;
		//std::cout << "ex.what(Triangle)" << std::endl;
	}
	
	try
	{
		RightTriangle rightTriangle1(10, 20, 30, 40, 50, 99);
		printFigure(&rightTriangle1);
		std::cout << "создан." << std::endl << std::endl;
	}
	catch (const MyException& rightT)
	{
		std::cout << "Прямоугольный треугольник не был создан. " << std::endl << "Причина: ";
		std::cerr << rightT.what() << std::endl << std::endl;
		//std::cout << "ex.what(RightTriangle)" << std::endl;
	}

	

	//IsoscelesTriangle isoscelesTriangle1(11, 220, 330, 440);
	//printFigure(&isoscelesTriangle1);

	//EquilateralTriangle equilateralTriangle1(111);
	//printFigure(&equilateralTriangle1);

	//Quadrilateral Quadrilateral1(10, 20, 30, 40, 50, 60, 70, 80);
	//printFigure(&Quadrilateral1);

	//Rectangle Rectangle1(14, 24);
	//printFigure(&Rectangle1);

	//Square Square1(333);
	//printFigure(&Square1);

	//Parallelogram Parallelogram1(555, 666, 777, 888);
	//printFigure(&Parallelogram1);

	//Rhomb Rhomb1(14, 24, 34);
	//printFigure(&Rhomb1);
	//


	


}