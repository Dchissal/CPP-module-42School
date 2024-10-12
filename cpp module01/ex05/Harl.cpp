/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:29:33 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/05 13:29:34 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << 
	"Adoro ter bacon extra no meu hambúrguer 7XL-duplo-queijo-triplo-picles-especial-ketchup.Adoro mesmo!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << 
	"Não acredito que adicionar bacon extra custa mais dinheiro. Você não colocou bacon suficiente no meu hambúrguer! Se tivesse colocado, eu não estaria pedindo mais!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout <<
	"Acho que mereço um pouco mais de bacon de graça. Venho aqui há anos, enquanto você começou a trabalhar aqui no mês passado." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "Isso é inaceitável! Quero falar com o gerente agora." << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i;

	void	(Harl::*functions[])(void) = {
	&Harl::debug, &Harl::info, &Harl::warning, &Harl::error
	};

	std::string Niveis[] = { "DEBUG", "INFO", "AVISO", "ERROR"};
	i = 0;

	while (i < 4)
	{
		if (Niveis[i] == level)
		{
			(this->*functions[i])();
			return ;
		}
		i++;
	}
	std::cout << "Nível inválido" << std::endl;
}
