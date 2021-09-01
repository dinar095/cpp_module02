#include <iostream>
#pragma  once

using std::cout;
using std::endl;

class Fixed {
private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed& operator=(Fixed const &value);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	int toInt( void ) const;
};

std::ostream& operator<< (std::ostream &out, const Fixed &value);