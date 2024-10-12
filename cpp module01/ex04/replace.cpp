/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:09:03 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/04 10:09:04 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	substituir_string_no_arquivo(
	const std::string &nome_arquivo,
	const std::string &s1,
	const std::string &s2)
{
	std::ifstream arquivo_entrada(nome_arquivo);
	if (!arquivo_entrada)
	{
		std::cerr << "Erro: Não foi possível abrir o arquivo "
			  << nome_arquivo << std::endl;
		return;
	}
	std::ofstream arquivo_saida(nome_arquivo + ".replace");
	if (!arquivo_saida)
	{
		std::cerr << "Erro: Não foi possível criar o arquivo de saída "
			  << nome_arquivo << ".replace" << std::endl;
		return;
	}
	std::string linha;
	while (std::getline(arquivo_entrada, linha))
	{
		std::string::size_type pos = 0;
		while ((pos = linha.find(s1, pos)) != std::string::npos)
		{
		    linha.erase(pos, s1.length());
		    linha.insert(pos, s2);
		    pos += s2.length();
		}
		arquivo_saida << linha << std::endl;
	}
	arquivo_entrada.close();
	arquivo_saida.close();
}
