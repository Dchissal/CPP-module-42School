/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 03:14:06 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/08 03:14:07 by dchissal         ###   ########.fr       */
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
	    Fixed(const Fixed &other) : value(other.value)
	    {
		std::cout << "Construtor de cópia chamado" << std::endl;
	    }
	    Fixed& operator=(const Fixed &other)
	    {
		std::cout << "Operador de atribuição chamado" << std::endl;
		if (this != &other)
		    this->value = other.value;
		return *this;
	    }

	    ~Fixed()
	    {
		std::cout << "Destrutor chamado" << std::endl;
	    }

	    int	getRawBits(void) const
	    {
	    	std::cout << "função getRawBits chamado" << std::endl;
		return (this->value);
	    }

	    void	setRawBits(int const raw)
	    {
		this->value = raw;
	    }
};*/

int	main(void)
{
	Fixed a;
	a.setRawBits(1024);
	Fixed b(a);
	Fixed c;
	c = b;

	std::cout << "Valor de a: " << a.getRawBits() << std::endl;
	std::cout << "Valor de b: " << b.getRawBits() << std::endl;
	std::cout << "Valor de c: " << c.getRawBits() << std::endl;
	return (0);
}
