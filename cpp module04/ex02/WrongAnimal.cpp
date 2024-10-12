/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:27:54 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/17 22:27:56 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "constructor do WrongAnimal chamado " << std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "destructor do WrongAnimal called " << std::endl;
}
void	WrongAnimal::makeSound() const
{
	std::cout << "som generico de WrongAnimal " << std::endl;
}
std::string WrongAnimal::getType() const
{
	return (type);
}
