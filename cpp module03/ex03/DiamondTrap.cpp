/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:28:34 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/17 09:28:35 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string Cname) : ClapTrap(Cname + " _clap_name"), FragTrap(Cname), ScavTrap(Cname), name(Cname)
{
	hitP = FragTrap::hitP;
	energyP = ScavTrap::energyP;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << name << " criado!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " Destruído!" << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmi()
{
	std::cout << "DiamondTrap nome : " << name << std::endl;
	std::cout << "ClapTrap nome : " << ClapTrap::name << std::endl;
}
