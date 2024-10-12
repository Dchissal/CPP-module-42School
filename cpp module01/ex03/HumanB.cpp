/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:18:29 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/04 08:18:31 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}

void	HumanB::attack() const
{
	if (weapon)
		std::cout << name << " ataca com " << weapon->getType() << std::endl;
	else
		std::cout << name << " não tem nenhuma arma para atacar!" << std::endl;
}
