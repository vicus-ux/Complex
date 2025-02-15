#include "Complex.h"
#include <iostream>

int main() {
    Complex a(3.0, 4.0); 
    Complex b(1.0, 2.0); 

    
    std::cout << "Complex number a: " << a << std::endl;
    std::cout << "Complex number b: " << b << std::endl;

    // +
    Complex add = a.add(b);
    std::cout << "Add: " << add << std::endl;

    // -
    Complex sub = a.sub(b);
    std::cout << "Subtraction: " << sub << std::endl;

    // *
    Complex mult = a.mul(b);
    std::cout << "Multiplication: " << mult << std::endl;

    // /
    Complex div = a.div(b);
    std::cout << "Division: " << div << std::endl;

    // сопряженные
    Complex conjugate = a.conj();
    std::cout << "Conjugate of a: " << conjugate << std::endl;
    Complex conjuagate = b.conj();
    std::cout << "Conjugate of b:" << conjugate << std::endl;

    // Модуль и аргумент
    std::cout << "Module of a: " << a.getAbs() << std::endl;
    std::cout << "Module of b: " << b.getAbs() << std::endl;
    std::cout << "Argument of a: " << a.getArg() << std::endl;
    std::cout << "Argument of b: " << b.getArg() << std::endl;

    // output complex value
    /*Complex c;
    std::cout << "Enter a complex number (real and imaginary parts): ";
    std::cin >> c;
    std::cout << "You entered: " << c << std::endl;*/

    return 0;
}
