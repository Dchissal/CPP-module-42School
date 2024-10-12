/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:47:52 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/13 09:47:54 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Sname) : ClapTrap(Sname)
{
	hitP = 100;
	energyP = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " Criado!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " Destruído!" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (hitP <= 0 || energyP <= 0)
	{
		std::cout << 
		"ScavTrap " << name << 
		" não tem energia ou pontos de vida para atacar!" << std::endl;
		return;
	}
	energyP--;
	std::cout << "ScavTrap " << name << " ataca " << target << ", causando " <<
	attackDamage << " pontos de dano!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap "
	<< name << " está agora em modo Guardião!" << std::endl;
}
