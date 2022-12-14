#include "Function.h"

int function(std::string anyWord, int forbiddenLength)
{
    int badLength = 1;

    if (forbiddenLength == anyWord.length()) throw badLength;

    { return static_cast<int>(anyWord.length()); }

}
