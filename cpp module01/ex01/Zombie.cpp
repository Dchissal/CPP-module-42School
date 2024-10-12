/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 22:59:03 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/03 22:59:05 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(const std::string& newName)
{
	name = newName;
}

void	Zombie::announce() const
{
	std::cout << name << "  BraiiiiiiinnnzzzZ..." << std::endl;
}
