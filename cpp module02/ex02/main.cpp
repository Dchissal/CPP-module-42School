/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:19:16 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/08 13:19:18 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


std::ostream& operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}

int	main(void)
{
	Fixed	a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed	c(10);
	Fixed	d(2);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << (c / d) << std::endl;
	return 0;
}

/*class Fixed
{
private:
	int			value;
	static const int	fractionalBits = 8;
public:
	Fixed() : value(0) {}

	Fixed(const int intVal)
	{
		value = intVal << fractionalBits;
	}

	Fixed(const float floatVal)
	{
		value = roundf(floatVal * (1 << fractionalBits));
	}

	Fixed(const Fixed& other)
	{
		value = other.value;
	}

	float toFloat() const
	{
		return (float)value / (1 << fractionalBits);
	}

	int toInt() const
	{
		return value >> fractionalBits;
	}

	~Fixed() {}

	bool operator>(const Fixed &other) const
	{
		return (this->value > other.value);
	}

	bool operator<(const Fixed &other) const
	{
		return (this->value < other.value);
	}

	bool operator>=(const Fixed &other) const
	{
		return (this->value >= other.value);
	}

	bool operator<=(const Fixed &other) const
	{
		return (this->value <= other.value);
	}

	bool operator==(const Fixed &other) const
	{
		return (this->value == other.value);
	}

	bool operator!=(const Fixed &other) const
	{
		return (this->value != other.value);
	}

	Fixed operator+(const Fixed &other) const
	{
		Fixed result;
		result.value = this->value + other.value;
		return (result);
	}

	Fixed operator-(const Fixed &other) const
	{
		Fixed result;
		result.value = this->value - other.value;
		return (result);
	}

	Fixed operator*(const Fixed &other) const
	{
		Fixed result;
		result.value = (this->value * other.value) >> fractionalBits;
		return (result);
	}

	Fixed operator/(const Fixed &other) const
	{
		Fixed result;
		result.value = (this->value << fractionalBits) / other.value;
		return (result);
	}

	Fixed& operator++()
	{
		++value;
		return *this;
	}

	Fixed operator++(int)
	{
		Fixed temp = *this;
		++value;
		return temp;
	}

	Fixed& operator--()
	{
		--value;
		return *this;
	}

	Fixed operator--(int)
	{
		Fixed temp = *this;
		--value;
		return temp;
	}

	static Fixed& min(Fixed &a, Fixed &b)
	{
		return (a < b) ? a : b;
	}

	static const Fixed& min(const Fixed &a, const Fixed &b)
	{
		return (a < b) ? a : b;
	}

	static Fixed& max(Fixed &a, Fixed &b)
	{
		return (a > b) ? a : b;
	}

	static const Fixed& max(const Fixed &a, const Fixed &b)
	{
		return (a > b) ? a : b;
	}

	friend std::ostream& operator<<(std::ostream &os, const Fixed &fixed)
	{
		os << fixed.toFloat();
		return os;
	}
};*/
