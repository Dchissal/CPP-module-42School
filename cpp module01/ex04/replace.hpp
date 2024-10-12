/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:10:10 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/04 10:10:11 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
#define REPLACE_H

#include <iostream>
#include <fstream>
#include <string>

void	substituir_string_no_arquivo(
	const std::string &nome_arquivo,
	const std::string &s1,
	const std::string &s2);
#endif
