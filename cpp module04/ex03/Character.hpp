/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:43:59 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/19 12:44:01 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class	Character : public ICharacter
{
	private:
		std::string name;
		AMateria* inventory[4];
	public:
		Character(std::string const & name);
		~Character();
		std::string const & getName() const override;

		void	equip(AMateria* m) override;
		void	unequip(int idx) override;
		void	use(int idx, ICharacter& target) override;
		Character(const Character& other);
		Character& operator=(const Character& other);
};

#endif
