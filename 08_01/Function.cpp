// 08_Задача 1. Простое исключение
//
//#include <iostream>
//
//class DivisionByZeroException : public std::exception
//{
//public:
//	const char* what() const override { return "Попытка деления на 0"; }
//};
//
//float divide(float dividend, float divisor)
//{
//	if (divisor == 0) throw DivisionByZeroException();
//	return dividend / divisor;
//}
//
//int main(int argc, char** argv)
//{
//	setlocale(LC_ALL, "Russian");
//
//	float a = 5.6, b = 1.3, c = 0;
//
//	try
//	{
//		c = divide(a, b);
//		std::cout << a << " / " << b << " = " << c << std::endl;
//	}
//	catch (const DivisionByZeroException& ex) { std::cout << ex.what() << std::endl; }
//	catch (...) { std::cout << "Неизвестная ошибка" << std::endl; }
//}