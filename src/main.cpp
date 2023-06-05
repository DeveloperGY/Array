#include "array.h"

#include <iostream>

int main(void)
{
    Array<int, 5> arr;

    arr[0] = 5;

    std::cout << arr[0] << "\n";

    return 0;
}