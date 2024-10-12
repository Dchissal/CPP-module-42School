/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:23:37 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/04 08:23:38 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon
{
	private:
		std::string type;

	public:
		Weapon(const std::string &Wtype) : type(Wtype) {}

		const std::string &getType() const;

		void setType(const std::string &newType);
};

#endif
