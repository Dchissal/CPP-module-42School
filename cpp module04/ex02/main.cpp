/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:05:28 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/17 19:05:30 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const int	size = 6;
	
	Animal*		animals[size];
	//Animal	a;
	
	int	i;
	
	i = 0;
	while (i < size / 2)
	{
		animals[i] = new Dog();
		i++;
	}
	while (i < size)
	{
		animals[i] = new Cat();
		i++;
	}
	i = 0;
	while (i < size)
	{
		delete animals[i];
		i++;
	}
	
	return (0);
}
