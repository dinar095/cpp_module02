#include "Fixed.hpp"

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	this->setRawBits(0);
}

Fixed::Fixed(const int value)
{
	cout << "Int constructor called" << endl;
	_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	cout << "Float constructor called" << endl;
	_fixedPointValue = (int)roundf(value * (1 << _fractionalBits));
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
//	cout << "getRawBits member function called" << endl;
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

int Fixed::toInt(void) const
{
	return ((int)_fixedPointValue >> _fractionalBits);
}

float Fixed::toFloat(void) const
{
	return ((float)_fixedPointValue / (float)(1 << _fractionalBits));
}

std::ostream& operator<< (std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}
