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
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap a("Daniel");
	ScavTrap b("Mauro");
	FragTrap c("Fênix");
	DiamondTrap d("Luzingu");

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
	
	d.attack("QG da solares");
	/*d.takeDamage(45);
	d.beRepaired(5);*/
	d.whoAmi();

	return (0);
}
