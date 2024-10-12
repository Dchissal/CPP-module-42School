/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:24:05 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/17 22:24:08 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "construtor do Cat chamado" << std::endl;
}

Cat::Cat(const Cat &other)
{
	std::cout << "construtor de cópia do Cat chamado" << std::endl;
	
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "operador de atribuição do Cat chamado" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destrutor do Cat chamado" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}
