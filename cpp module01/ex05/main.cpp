/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:20:47 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/05 12:20:48 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;
	
	harl.complain("ERROR");
	return (0);
}

/*class	Harl
{
	private:
		void	debug(void)
		{
			std::cout << 
			"Adoro ter bacon extra no meu hambúrguer 7XL-duplo-queijo-triplo-picles-especial-ketchup.Adoro mesmo!" << std::endl;
		}
		void	info(void)
		{
			std::cout << 
			"Não acredito que adicionar bacon extra custa mais dinheiro. Você não colocou bacon suficiente no meu hambúrguer! Se tivesse colocado, eu não estaria pedindo mais!" << std::endl;
		}
		void	warning(void)
		{
			std::cout <<
			"Acho que mereço um pouco mais de bacon de graça. Venho aqui há anos, enquanto você começou a trabalhar aqui no mês passado." << std::endl;
		}
		void	error(void)
		{
			std::cout << "Isso é inaceitável! Quero falar com o gerente agora." << std::endl;
		}
	public:
		void	complain(std::string level)
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
};*/

