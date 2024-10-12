/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   materiaSoucer.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:58:50 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/19 08:58:53 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "materiaSoucer.hpp"

MateriaSource::MateriaSource()
{
	int	i;
	
	i = 0;
	while (i < 4)
	{
		templates[i] = nullptr;
		i++;
	}
}

MateriaSource::~MateriaSource()
{
	int	i;
	
	i = 0;
	while (i < 4)
	{
		delete templates[i];
		i++;
	}
}

void	MateriaSource::learnMateria(AMateria* m)
{
	int	i;
	
	i = 0;
	while (i < 4)
	{
		if (!templates[i])
		{
			templates[i] = m->clone();
			break;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i;
	
	i = 0;
	while (i < 4)
	{
		if (templates[i] && templates[i]->getType() == type)
			return (templates[i]->clone());
		i++;
	}
	return (nullptr);
}
