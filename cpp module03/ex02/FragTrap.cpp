/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:43:33 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/17 08:43:34 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string Cname) : ClapTrap(Cname)
{
	hitP = 100;
	energyP = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " Criado!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " Destruídooo!" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " pede um high five! 🙌" << std::endl;
}
