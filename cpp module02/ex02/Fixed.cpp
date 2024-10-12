/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:21:13 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/08 13:21:15 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int intVal)
{
	value = intVal << fractionalBits;
}

Fixed::Fixed(const float floatVal)
{
	value = roundf(floatVal * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& other)
{
	value = other.value;
}

float	Fixed::toFloat() const
{
	return (float)value / (1 << fractionalBits);
}

int	Fixed::toInt() const
{
	return value >> fractionalBits;
}

Fixed::~Fixed() {}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->value > other.value);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->value < other.value);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->value >= other.value);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->value <= other.value);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->value == other.value);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->value != other.value);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;
	result.value = this->value + other.value;
	return (result);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;
	result.value = this->value - other.value;
	return (result);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;
	result.value = (this->value * other.value) >> fractionalBits;
	return (result);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed result;
	result.value = (this->value << fractionalBits) / other.value;
	return (result);
}

Fixed &Fixed::operator++()
{
	++value;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++value;
	return temp;
}

Fixed &Fixed::operator--()
{
	--value;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--value;
	return temp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}
