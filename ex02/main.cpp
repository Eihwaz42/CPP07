#include <iostream>
#include <string>
#include "Array.hpp"

int main(void)
{
    std::cout << "=== EMPTY ARRAY ===" << std::endl;

    Array<int> empty;

    std::cout << "Size: " << empty.size() << std::endl;


    std::cout << std::endl;
    std::cout << "=== INT ARRAY ===" << std::endl;

    Array<int> numbers(5);

    std::cout << "Size: " << numbers.size() << std::endl;

    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;


    std::cout << std::endl;
    std::cout << "=== MODIFY ARRAY ===" << std::endl;

    for (unsigned int i = 0; i < numbers.size(); i++)
        numbers[i] = i * 10;

    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;


    std::cout << std::endl;
    std::cout << "=== COPY CONSTRUCTOR ===" << std::endl;

    Array<int> copy(numbers);

    copy[0] = 999;

    std::cout << "Original numbers[0]: " << numbers[0] << std::endl;
    std::cout << "Copy     copy[0]:    " << copy[0] << std::endl;


    std::cout << std::endl;
    std::cout << "=== ASSIGNMENT OPERATOR ===" << std::endl;

    Array<int> assigned(2);

    assigned = numbers;

    assigned[1] = 777;

    std::cout << "Original numbers[1]: " << numbers[1] << std::endl;
    std::cout << "Assigned assigned[1]: " << assigned[1] << std::endl;


    std::cout << std::endl;
    std::cout << "=== STRING ARRAY ===" << std::endl;

    Array<std::string> strings(3);

    strings[0] = "Hello";
    strings[1] = "CPP";
    strings[2] = "Templates";

    for (unsigned int i = 0; i < strings.size(); i++)
        std::cout << strings[i] << std::endl;


    std::cout << std::endl;
    std::cout << "=== OUT OF BOUNDS ===" << std::endl;

    try
    {
        std::cout << numbers[100] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }


    std::cout << std::endl;
    std::cout << "=== CONST ARRAY ===" << std::endl;

    const Array<int> constArray(numbers);

    std::cout << "constArray[0] = " << constArray[0] << std::endl;
    std::cout << "Size: " << constArray.size() << std::endl;

    return 0;
}