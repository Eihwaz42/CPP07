#include <iostream>
#include <string>
#include "whatever.hpp"

int main(void)
{
    // =========================
    // Test avec des int
    // =========================
    int a = 2;
    int b = 3;

    std::cout << "=== INT TESTS ===" << std::endl;

    std::cout << "Before swap:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    ::swap(a, b);

    std::cout << "After swap:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

    std::cout << std::endl;

    // =========================
    // Test avec des std::string
    // =========================
    std::string c = "chaine1";
    std::string d = "chaine2";

    std::cout << "=== STRING TESTS ===" << std::endl;

    std::cout << "Before swap:" << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;

    ::swap(c, d);

    std::cout << "After swap:" << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;

    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

    std::cout << std::endl;

    // =========================
    // Test avec des double
    // =========================
    double x = 42.5;
    double y = -3.14;

    std::cout << "=== DOUBLE TESTS ===" << std::endl;

    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cout << "min(x, y) = " << ::min(x, y) << std::endl;
    std::cout << "max(x, y) = " << ::max(x, y) << std::endl;

    ::swap(x, y);

    std::cout << "After swap:" << std::endl;
    std::cout << "x = " << x << ", y = " << y << std::endl;

    std::cout << std::endl;

    // =========================
    // Test avec deux valeurs égales
    // =========================
    int e = 42;
    int f = 42;

    std::cout << "=== EQUALITY TESTS ===" << std::endl;

    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
    std::cout << "max(e, f) = " << ::max(e, f) << std::endl;

    return 0;
}