// 08_Задача 1. Простое исключение

#include <iostream>
#include <string>
//#include <exception>

//enum class FunctionResult 
//{ success, forbiddenLengthZeroOrNegative, linkIsNull };

//int function(std::string anyWord, int forbidden_length, int* wordLength)
//{
//    if (wordLength == nullptr) 
//    {
//        return static_cast<int>(FunctionResult::linkIsNull); //2
//    }
//
//    if (forbidden_length <= 0) 
//    {
//        return static_cast<int>(FunctionResult::forbiddenLengthZeroOrNegative); //1
//    }
//
//    return static_cast<int>(FunctionResult::success); //0
//};

int main()
{
    setlocale(LC_ALL, "Russian");

    int wordLength = 111;
    int forbiddenLength = 0;
    std::string anyWord;
    
    std::cout << "Введите запретную длину: ";
    std::cin >> forbiddenLength;
    std::cout << std::endl << "-------------------------" << std::endl;
    
    do
    {
        std::cout << "Введите слово: ";
        std::cin >> anyWord;
        
        std::cout << "Длина слова " << anyWord << " равна " << anyWord.length();
        std::cout << std::endl << "-------------------------" << std::endl;
    } while (forbiddenLength != anyWord.length());

    std::cout << std::endl << "Вы ввели слово запретной длины! До свидания" << std::endl;
}   