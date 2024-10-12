/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 23:12:44 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/03 23:12:45 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	std::cout << "Endereço de memória da variável string: " << &str << std::endl;
	std::cout << "Endereço de memória armazenado por stringPTR: " << stringPTR << std::endl;
	std::cout << "Endereço de memória armazenado por stringREF: " << &stringREF << std::endl;
	std::cout << "Valor da variável string: " << str << std::endl;
	std::cout << "Valor apontado por stringPTR: " << *stringPTR << std::endl;
	std::cout << "Valor apontado por stringREF: " << stringREF << std::endl;
	
	return (0);
}
