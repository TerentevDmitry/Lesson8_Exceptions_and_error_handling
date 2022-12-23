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
	
	try
	{
		Triangle Triangle1(10, 20, 30, 50, 60, 70);
		printFigure(&Triangle1);
		std::cout << "создан." << std::endl;
	}
	catch (const std::exception& Tr)
	{
		std::cerr << "Треугольник не был создан. " << std::endl << "Причина: ";
		std::cerr << Tr.what() << std::endl;
	}

	try
	{
		RightTriangle rightTriangle1(10, 20, 30, 40, 50, 9);
		printFigure(&rightTriangle1);
		std::cout << "создан." << std::endl;
	}
	catch (const std::exception& rT)
	{
		std::cerr << std::endl;
		std::cerr << "Прямоугольный треугольник не был создан. " << std::endl << "Причина: ";
		std::cerr << rT.what() << std::endl;
	}
	
	try
	{
		IsoscelesTriangle isoscelesTriangle1(11, 11, 11, 50, 80, 50);
		printFigure(&isoscelesTriangle1);
		std::cout << "создан." << std::endl;
	}
	catch (const std::exception& iT)
	{
		std::cerr << std::endl;
		std::cerr << "Равнобедренный треугольник не был создан. " << std::endl << "Причина: ";
		std::cerr << iT.what() << std::endl;
	}

	try
	{
		EquilateralTriangle equilateralTriangle1(11, 11, 11, 60, 60, 60);
		printFigure(&equilateralTriangle1);
		std::cout << "создан." << std::endl;
	}
	catch (const std::exception& eT)
	{
		std::cerr << std::endl;
		std::cerr << "Равносторонний треугольник не был создан. " << std::endl << "Причина: ";
		std::cerr << eT.what() << std::endl;
	}

	try
	{
		Quadrilateral Quadrilateral1(10, 20, 30, 40, 90, 90, 100, 80);
		printFigure(&Quadrilateral1);
		std::cout << "создан." << std::endl;
	}
	catch (const std::exception& q)
	{
		std::cerr << std::endl;
		std::cerr << "Четырехугольник не был создан. " << std::endl << "Причина: ";
		std::cerr << q.what() << std::endl;
	}

	try
	{
		Rectangle Rectangle1(10, 20, 10, 20, 90, 90, 90, 90);
		printFigure(&Rectangle1);
		std::cout << "создан." << std::endl;
	}
	catch (const std::exception& r)
	{
		std::cerr << std::endl;
		std::cerr << "Прямоугольник не был создан. " << std::endl << "Причина: ";
		std::cerr << r.what() << std::endl;
	}

	try
	{
		Square Square1(10, 10, 10, 10, 90, 90, 90, 90);
		printFigure(&Square1);
		std::cout << "создан." << std::endl;
	}
	catch (const std::exception& s)
	{
		std::cerr << std::endl;
		std::cerr << "Квадрат не был создан. " << std::endl << "Причина: ";
		std::cerr << s.what() << std::endl;
	}

	try
	{
		Parallelogram Parallelogram1(10, 10, 10, 10, 90, 90, 90, 90);
		printFigure(&Parallelogram1);
		std::cout << "создан." << std::endl;
	}
	catch (const std::exception& s)
	{
		std::cerr << std::endl;
		std::cerr << "Параллелограмм не был создан. " << std::endl << "Причина: ";
		std::cerr << s.what() << std::endl;
	}
	
	try
	{
		Rhomb Rhomb1(10, 10, 10, 10, 80, 100, 80, 100);
		printFigure(&Rhomb1);
		std::cout << "создан." << std::endl;
	}
	catch (const std::exception& s)
	{
		std::cerr << std::endl;
		std::cerr << "Ромб не был создан. " << std::endl << "Причина: ";
		std::cerr << s.what() << std::endl;
	}
}