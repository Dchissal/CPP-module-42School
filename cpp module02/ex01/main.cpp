/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:16:50 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/08 11:16:51 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*class	Fixed
{
private:
	int			value;
	static const int	fractionalBits = 8;
public:
	Fixed() : value(0)
	{
		std::cout << "Construtor padrão chamado" << std::endl;
	}

	Fixed(const int intVal)
	{
		std::cout << "Construtor com valor inteiro chamado" << std::endl;
		value = intVal << fractionalBits;
	}

	Fixed(const float floatVal)
	{
		std::cout << "Construtor com valor float chamado" << std::endl;
		value = roundf(floatVal * (1 << fractionalBits));
	}
	
	Fixed(const Fixed& other)
	{
		std::cout << "Construtor de cópia chamado" << std::endl;
		value = other.value;
	}
	float	toFloat() const
	{
		return (float)value / (1 << fractionalBits);
	}
	int	toInt() const
	{
		return value >> fractionalBits;
	}
	~Fixed()
	{
		std::cout << "Destruidor chamado" << std::endl;
	}
};*/

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

int	main(void)
{
	Fixed a;
	Fixed b(10);
	Fixed c(42.42f);
	Fixed d(b);

	a = Fixed(1234.4321f);
	
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	
	std::cout << "valor de (int) a: " << a.toInt() << std::endl;
	std::cout << "valor de (int) b: " << b.toInt() << std::endl;
	std::cout << "valor de (int) c: " << c.toInt() << std::endl;
	std::cout << "valor de (int) d: " << d.toInt() << std::endl;

	return 0;
}
