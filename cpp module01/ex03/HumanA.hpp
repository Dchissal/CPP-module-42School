/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:16:07 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/04 08:16:09 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define	HUMAN_A_HPP

#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string name;
		Weapon &weapon;

	public:
		HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(weapon) {}

		void attack() const;
};

#endif
