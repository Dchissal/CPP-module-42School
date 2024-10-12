/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:00:59 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/19 09:01:01 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : name(name)
{
	int	i;
	
	i = 0;
	while (i < 4)
	{
    		inventory[i] = nullptr;
    		i++;
    	}
}

Character::~Character()
{
	int	i;
	
	i = 0;
	while (i < 4)
	{
	    delete inventory[i];
	    i++;
	}
}

std::string const & Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	int	i;
	
	i = 0;
	while (i < 4)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			break ;
		}
		i++;
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		inventory[idx] = nullptr;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		inventory[idx]->use(target);
}

Character::Character(const Character& other) : name(other.name)
{
	int	i;
	
	i = 0;
	while (i < 4)
	{
		inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : nullptr;
		i++;
	}
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		name = other.name;
		int	i;
		
		i = 0;
		while (i < 4)
		{
			delete inventory[i];
			inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : nullptr;
			i++;
		}
	}
	return (*this);
}
