/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 00:08:16 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/04 00:08:17 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon club(" aka 40");

	HumanA bob("Bob", club);
	bob.attack();

	club.setType("faca");
	bob.attack();

	HumanB jim("Jim");
	jim.attack();

	jim.setWeapon(club);
	jim.attack();

	return (0);
}

/*class	Weapon
{
	private:
		std::string type;

	public:
		Weapon(const std::string &Wtype) : type(Wtype) {}

		const std::string &getType() const
		{
			return type;
		}

		void setType(const std::string &newType)
		{
			type = newType;
		}
};

class	HumanA
{
	private:
		std::string name;
		Weapon &weapon;

	public:
		HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(weapon) {}

		void attack() const
		{
			std::cout << name << " ataca com" << weapon.getType() << std::endl;
		}
};

class	HumanB
{
	private:
		std::string name;
		Weapon *weapon;

	public:
		HumanB(const std::string &name) : name(name), weapon(nullptr) {}

		void setWeapon(Weapon &newWeapon)
		{
			weapon = &newWeapon;
		}

		void attack() const
		{
			if (weapon)
				std::cout << name << " ataca com " << weapon->getType() << std::endl;
			else
				std::cout << name << " não tem nenhuma arma para atacar!" << std::endl;
		}
};*/

