#include "Fixed.hpp"

Fixed::Fixed()
{
//	cout << "Default constructor called" << endl;
	this->setRawBits(0);
}

Fixed::Fixed(const int value)
{
//	cout << "Int constructor called" << endl;
	_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
//	cout << "Float constructor called" << endl;
	_fixedPointValue = (int)roundf(value * (1 << _fractionalBits));
}

Fixed::~Fixed()
{
//	cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed &fixed)
{
//	cout << "Copy constructor called" << endl;
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
//	cout << "Assignation operator called" << endl;
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

bool Fixed::operator > (const Fixed &value) const
{
	return (this->_fixedPointValue > value.getRawBits());
}

bool Fixed::operator<(const Fixed &value) const
{
	return (this->_fixedPointValue < value.getRawBits());
}

bool Fixed::operator>=(const Fixed &value) const
{
	return (this->_fixedPointValue >= value.getRawBits());
}

bool Fixed::operator<=(const Fixed &value) const
{
	return (this->_fixedPointValue <= value.getRawBits());
}

bool Fixed::operator==(const Fixed &value) const
{
	return (this->_fixedPointValue == value.getRawBits());
}

bool Fixed::operator!=(const Fixed &value) const
{
	return (this->_fixedPointValue != value.getRawBits());
}

Fixed Fixed::operator+(const Fixed &value) const
{
	return (Fixed(this->toFloat() + value.toFloat()));
}

Fixed Fixed::operator*(const Fixed &value) const
{
	return Fixed(this->toFloat() * value.toFloat());
}


Fixed Fixed::operator/(const Fixed &value) const
{
	return Fixed(this->toFloat() / value.toFloat());
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a > b? b : a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a > b? b : a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b? a : b);
}

Fixed& Fixed::operator++()
{
	this->_fixedPointValue++;
	return (*this);
}

Fixed& Fixed::operator--()
{
	this->_fixedPointValue--;
	return (*this);
}

Fixed Fixed::operator-(const Fixed &value) const
{
	return (Fixed(this->toFloat() - value.toFloat()));
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_fixedPointValue++;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->_fixedPointValue--;
	return tmp;
}

std::ostream& operator << (std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}
