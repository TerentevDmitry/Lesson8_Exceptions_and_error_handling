#include "Function.h"
#include <exception>

int function(std::string anyWord, int forbiddenLength)
{
    if (forbiddenLength == anyWord.length())
    {
        throw std::exception("�� ����� ����� ��������� �����!�� ��������.");
    };

    return static_cast<int>(anyWord.length());

}