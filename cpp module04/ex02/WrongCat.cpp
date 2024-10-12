/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:30:43 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/17 22:30:44 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << " constructor do WrongCat chamado" << std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "destructor do WrongCat chamado" << std::endl;
}
void	WrongCat::makeSound() const
{
	std::cout << "som do WrongAnimal" << std::endl;
}
