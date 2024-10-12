/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 00:47:43 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/18 00:47:44 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	int	i;
	
	while (i < 100)
	{
		this->ideas[i] = "Ideia " + std::to_string(i);
		i++;
	}
	std::cout << "constructor Brain  Chamado" << std::endl;
}

Brain::Brain(const Brain& other)
{
	int	i;

	std::cout << "construtor de cópia Brain chamado" << std::endl;
	i = 0;
	while (i < 100)
	{
		this->ideas[i] = other.ideas[i];
		std::cout << "Copiando ideia " << i << ": " << other.ideas[i] << std::endl;
		i++;
	}
}

Brain&	Brain::operator=(const Brain& other)
{
	int	i;

	std::cout << "operador de atribuiçao Brain chamado" << std::endl;
	if (this != &other)
	{
		i = 0;
		while(i < 100)
		{
	    		this->ideas[i] = other.ideas[i];
	    		i++;
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "destrutor Brain chamado " << std::endl;
}
