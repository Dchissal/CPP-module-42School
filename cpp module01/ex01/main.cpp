/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 22:38:25 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/03 22:38:27 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*class	Zombie
{
	private:
		std::string name;
	public:
		Zombie() : name("") {}
		
		~Zombie()
		{
			std::cout << name << "  is destroyed." << std::endl;
		}
		void	setName(const std::string& newName)
		{
			name = newName;
		}
		void	announce() const
		{
			std::cout << name << "  BraiiiiiiinnnzzzZ..." << std::endl;
		}
};

Zombie*	zombieHorde(int n, std::string name)
{
	int	i;

	if (n <= 0)
		return (nullptr);
	Zombie* horde = new Zombie[n];
	i = 0;
	while (i < n)
	{
		horde[i].setName(name);
		i++;
	}
	return (horde);
}*/

int	main(void)
{
	int	i;
	int	n;

	n = 5;
	Zombie	*horde = zombieHorde(n, "Daniel");
	if (horde != nullptr)
	{
		i = 0;
		while (i < n)
		{
			horde[i].announce();
			i++;
		}
	}
	
	delete[] horde;
	
	return (0);
}
