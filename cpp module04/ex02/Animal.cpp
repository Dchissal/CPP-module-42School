/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:15:43 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/17 22:15:44 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal desconhecido")
{
	std::cout << "Construtor de animal chamado " << std::endl;
}
Animal::~Animal()
{
	std::cout << "Destrutor de animal chamado " << std::endl;
}
std::string	Animal::getType() const
{
	return (type);
}
