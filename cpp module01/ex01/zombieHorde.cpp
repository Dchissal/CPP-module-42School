/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 22:56:44 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/03 22:56:46 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
}
