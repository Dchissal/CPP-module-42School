/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:07:59 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/12 13:08:00 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap a("Daniel");
	ScavTrap b("Mauro");
	FragTrap c("Fênix");

	a.attack("Solares");
	a.takeDamage(5);
	a.beRepaired(4);

	b.attack("Aegis");
	b.takeDamage(10);
	b.beRepaired(7);
	b.guardGate();
	
	c.attack("QG da Aegis");
	c.takeDamage(50);
	c.beRepaired(10);
	c.highFivesGuys();
	
	return (0);
}

/*class	ClapTrap
{
	private:
		std::string	name;
		int		hitP;
		int		energyP;
		int		attackDamage;
	public:
		ClapTrap(std::string Cname) : name(Cname), hitP(10), energyP(10), attackDamage(0)
		{
			std::cout << "ClapTrap objecto " << name << " Criado!" << std::endl; 
		}
		
		~ClapTrap()
		{
			std::cout << "ClapTrap objecto " << name << " Destruído!" << std::endl; 
		}
		
		void	attack(const std::string& target)
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
		
		void	takeDamage(unsigned int amount)
		{
			hitP -= amount;
			if (hitP < 0)
				hitP = 0;
			std::cout << "ClapTrap " << name << " recebeu " << amount <<
			" pontos de dano! Ponto de vida restantes " << hitP << std::endl;
		}
		
		void	beRepaired(unsigned int amount)
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
};*/

