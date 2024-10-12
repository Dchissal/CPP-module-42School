/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:55:01 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/04 08:55:03 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

#include "replace.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Uso: " << argv[0]
			  << " <nome_arquivo> <string1> <string2>" << std::endl;
		return 1;
	}
	std::string nome_arquivo = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	substituir_string_no_arquivo(nome_arquivo, s1, s2);
	return 0;
}
