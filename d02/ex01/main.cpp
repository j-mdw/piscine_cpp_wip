#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    // Fixed a;
    // Fixed b( a );
    // Fixed c;
    // c = b;
    // std::cout << a.getRawBits() << std::endl;
    // std::cout << b.getRawBits() << std::endl;
    // std::cout << c.getRawBits() << std::endl;

    // Fixed d(4);
    // Fixed e(4.5f);
    // std::cout << d.getRawBits() << std::endl;
    // std::cout << e.getRawBits() << std::endl;
    // std::cout << d.toInt() << std::endl;
    // std::cout << e.toInt() << std::endl;
    // std::cout << e.toFloat() << std::endl;
    // std::cout << d.toFloat() << std::endl;
    // std::cout << e << std::endl;

    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = Fixed( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    return 0;
}