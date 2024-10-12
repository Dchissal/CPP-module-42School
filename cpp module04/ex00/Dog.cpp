/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:20:05 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/17 22:20:07 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "construtor do Dog chamado" << std::endl;
}

Dog::Dog(const Dog &other)
{
	std::cout << "construtor de cópia do Dog chamado" << std::endl;
	
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "operador de atribuição do Dog chamado" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destrutor do Dog chamado" << std::endl;
}
void	Dog::makeSound() const 
{
	std::cout << "Woof! Woof!" << std::endl;
}
