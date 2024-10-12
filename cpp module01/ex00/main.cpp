/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:44:16 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/03 19:44:17 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string Cname) : name(Cname) {}

		~Zombie()
		{
			std::cout << name << " is destroyed." << std::endl;
		}
		void	announce(void)
		{
			std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
		}
};

Zombie	*newZombie(std::string name)
{
	return (new Zombie(name)); 
}

void	randomChump(std::string name)
{
	Zombie	zombie(name);
	zombie.announce();
}*/

int	main(void)
{
	Zombie	*heapZombie = newZombie("HeeapZombie");
	heapZombie->announce();
	randomChump("StackZombie");
	delete heapZombie;
	return (0);
}
