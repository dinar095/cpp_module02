#include "Fixed.hpp"

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	this->setRawBits(0);
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	cout << "Copy constructor called" << endl;
	*this = fixed;
}

int Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called" << endl;
	return (_fixedPointValue);
}

void Fixed::setRawBits(const int raw)
{
	_fixedPointValue = raw;
}

Fixed& Fixed::operator=(Fixed const &value)
{
	cout << "Assignation operator called" << endl;
	if (this == &value)
		return *this;
	this ->_fixedPointValue = value.getRawBits();
	return *this;
}

