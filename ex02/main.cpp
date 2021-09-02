#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	bool y;
	Fixed const b( Fixed( 5 ) * Fixed( 2 ) );
	Fixed x(152);
//	std::cout << x/a << std::endl;
//	std::cout << Fixed::min(b, x) << std::endl;
//	std::cout << Fixed::max(b, x) << std::endl;
	std::cout << ++a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << ++a << std::endl;
//	std::cout << a << std::endl;
//	std::cout << a++ << std::endl;
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;
//	std::cout << Fixed::max( a, b ) << std::endl;
//cout << +x << endl;
	return 0;
}