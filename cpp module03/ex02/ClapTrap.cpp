/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 08:40:46 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/13 08:40:47 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Cname) : name(Cname), hitP(10), energyP(10), attackDamage(0)
{
	std::cout << "ClapTrap objecto " << name << " Criado!" << std::endl; 
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap objecto " << name << " Destruído!" << std::endl; 
}

void	ClapTrap::attack(const std::string& target)
{
	if (hitP <= 0 || energyP <= 0)
	{
		std::cout << "ClapTrap" << name << 
		" não tem energia ou pontos de vida para atacar!" 
		<< std::endl; 
		return ;
	}
	energyP--;
	std::cout << "ClapTrap " << name << " ataca " << target << " causando " <<
	attackDamage << " pontos de dano! " << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	hitP -= amount;
	if (hitP < 0)
		hitP = 0;
	std::cout << "ClapTrap " << name << " recebeu " << amount <<
	" pontos de dano! Ponto de vida restantes " << hitP << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitP <= 0 || energyP <= 0)
	{
		std::cout << "ClapTrap" << name << 
		" não tem energia ou pontos de vida para reparar!" 
		<< std::endl; 
		return ;
	}
	energyP--;
	hitP += amount;
	std::cout << "ClapTrap " << name << " se repara, recuperando " << amount <<
	" pontos de vida! Ponto de vida atual: " << hitP << std::endl;
}
