#include <iostream>

#include "erandom/erandom.h"

int main()
{
    for (int i = 0; i < 20; ++i)
    {
        std::cout << erandom::micro_digit() << ' ';
    }
    std::cout << '\n';

    return 0;
}
