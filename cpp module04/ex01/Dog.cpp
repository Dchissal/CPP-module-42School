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

Dog::Dog() : brain(new Brain())
{
	type = "Dog";
	std::cout << "construtor do Dog chamado" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Construtor de cópia Dog chamado " << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Operador de atribuição Dog chamado " << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Destrutor do Dog chamado" << std::endl;
}
void	Dog::makeSound() const 
{
	std::cout << "Woof! Woof!" << std::endl;
}
