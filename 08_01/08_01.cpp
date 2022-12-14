// 08_Задача 1. Простое исключение

#include <iostream>
#include <string>
#include "Function.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    int wordLength = 0;
    int forbiddenLength = 0;
    std::string anyWord;
    bool checkForbiddenLength = false;
    
    do
    {
        std::cout << "Введите запретную длину: ";
        std::cin >> forbiddenLength;

        if (forbiddenLength > 0)
        {
            checkForbiddenLength = true;
        }

        if (forbiddenLength <= 0)
        {
            std::cout << "Неверная длина... Введите новую" << std::endl;
        }
        
    } while (!checkForbiddenLength);
    
    std::cout << "-------------------------" << std::endl;

    try
    {
    do
    {
        std::cout << "Введите слово: ";
        std::cin >> anyWord;
        
        wordLength = function(anyWord, forbiddenLength);

        std::cout << "Длина слова \"" << anyWord << "\" равна " << wordLength;
        std::cout << std::endl << "-------------------------" << std::endl;

        } while (forbiddenLength != wordLength);
    }
    catch (int)
    {
        std::cout << std::endl << "Вы ввели слово запретной длины! До свидания" << std::endl;
    }
}   