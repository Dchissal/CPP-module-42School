/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 23:00:45 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/03 23:00:46 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class	Zombie
{
	private:
		std::string name;
	public:
		Zombie() : name("") {}
		
		~Zombie()
		{
			std::cout << name << "  is destroyed." << std::endl;
		}
		void	setName(const std::string& newName);
		void	announce() const;
};


Zombie*	zombieHorde(int n, std::string name);

#endif
