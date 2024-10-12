/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:49:52 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/19 12:49:54 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & Ctype) : type(Ctype) {}
	

std::string const & AMateria::getType() const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	//std::cout << "AMateria usada em " << target.getName() << std::endl;
}
