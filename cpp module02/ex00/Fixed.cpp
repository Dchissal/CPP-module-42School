/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 03:15:16 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/08 03:15:18 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Construtor padrão chamado" << std::endl;
}

Fixed::Fixed(const Fixed &other) : value(other.value)
{
	std::cout << "Construtor de cópia chamado" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Operador de atribuição chamado" << std::endl;
	if (this != &other)
		this->value = other.value;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destrutor chamado" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "função getRawBits chamado" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}
