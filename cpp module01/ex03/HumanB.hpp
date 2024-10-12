/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:19:54 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/04 08:19:56 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string name;
		Weapon *weapon;

	public:
		HumanB(const std::string &name) : name(name), weapon(nullptr) {}

		void setWeapon(Weapon &newWeapon);

		void attack() const;
};

#endif
