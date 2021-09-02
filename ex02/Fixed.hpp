#include <iostream>
#include <math.h>
#pragma once

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
	float toFloat( void ) const;
	bool operator>(const Fixed &value) const;
	bool operator<(const Fixed &value) const;
	bool operator>=(const Fixed &value) const;
	bool operator<=(const Fixed &value) const;
	bool operator==(const Fixed &value) const;
	bool operator!=(const Fixed &value) const;
	Fixed operator/(const Fixed &value) const;
	Fixed operator*(const Fixed &value) const;
	Fixed operator+(const Fixed &value) const;
	Fixed operator-(const Fixed &value) const;
	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	static Fixed& min(Fixed &a, Fixed &b);
	static Fixed& max(Fixed &a, Fixed &b);
	static const Fixed&  min(const Fixed &a, const Fixed &b);
	static const Fixed&  max(const Fixed &a, const Fixed &b);

};

std::ostream& operator << (std::ostream &out, const Fixed &value);