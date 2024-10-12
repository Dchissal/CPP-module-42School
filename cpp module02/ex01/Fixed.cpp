/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:21:39 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/08 11:21:41 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Construtor padrão chamado" << std::endl;
}

Fixed::Fixed(const int intVal)
{
	std::cout << "Construtor com valor inteiro chamado" << std::endl;
	value = intVal << fractionalBits;
}

Fixed::Fixed(const float floatVal)
{
	std::cout << "Construtor com valor float chamado" << std::endl;
	value = roundf(floatVal * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Construtor de cópia chamado" << std::endl;
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
Fixed::~Fixed()
{
	std::cout << "Destruidor chamado" << std::endl;
}
