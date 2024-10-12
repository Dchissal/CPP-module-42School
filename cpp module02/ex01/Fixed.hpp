/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:19:23 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/08 11:19:25 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class	Fixed
{
private:
	int			value;
	static const int	fractionalBits = 8;
public:
	Fixed();
	Fixed(const int intVal);
	Fixed(const float floatVal);
	Fixed(const Fixed& other);
	float	toFloat() const;
	int	toInt() const;
	~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
