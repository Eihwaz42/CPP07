#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void print(const T &value)
{
    std::cout << value << std::endl;
}

template <typename T>
void increment(T &value)
{
    value++;
}

int main(void)
{
    std::cout << "=== INT ARRAY ===" << std::endl;

    int numbers[] = {1, 2, 3, 4, 5};

    iter(numbers, 5, print<int>);

    std::cout << std::endl;
    std::cout << "=== INCREMENT INT ARRAY ===" << std::endl;

    iter(numbers, 5, increment<int>);
    iter(numbers, 5, print<int>);


    std::cout << std::endl;
    std::cout << "=== STRING ARRAY ===" << std::endl;

    std::string strings[] = {
        "Hello",
        "World",
        "CPP07"
    };

    iter(strings, 3, print<std::string>);


    std::cout << std::endl;
    std::cout << "=== CONST INT ARRAY ===" << std::endl;

    const int constNumbers[] = {42, 21, 84};

    iter(constNumbers, 3, print<int>);

    return 0;
}