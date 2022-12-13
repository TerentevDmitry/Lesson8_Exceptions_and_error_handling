// 08_Задача 1. Простое исключение

#include <iostream>
#include <string>

enum class FunctionResult 
{ forbiddenLengthZeroOrNegative = 1, forbiddenLengthEqualAnyWord };

int function(std::string anyWord, int forbiddenLength)
{
    int badLength = 1;

    if (forbiddenLength == anyWord.length()) throw badLength;


    { return anyWord.length(); }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    int wordLength = 111;
    int forbiddenLength = 0;
    std::string anyWord;
    
    std::cout << "Введите запретную длину: ";
    std::cin >> forbiddenLength;
    std::cout << std::endl << "-------------------------" << std::endl;
    
    try
    {
    do
    {
        std::cout << "Введите слово: ";
        std::cin >> anyWord;
        
            wordLength = function(anyWord, forbiddenLength);

            std::cout << "Длина слова " << anyWord << " равна " << wordLength;
        std::cout << std::endl << "-------------------------" << std::endl;

        } while (forbiddenLength != wordLength);
    }
    catch (int badLength1)
    {
        std::cout << std::endl << "Неверная длина..." << std::endl;
    }
    catch (int badLength2)
    {
        std::cout << std::endl << "Вы ввели слово запретной длины! До свидания" << std::endl;
    }
}   