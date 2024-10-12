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

int	main(void)
{
	Animal* animal1 = new Dog();
	Animal* animal2 = new Cat();
    
    	std::cout << animal1->getType() << std::endl;
	animal1->makeSound();
	
	std::cout << animal2->getType() << std::endl;
	animal2->makeSound();
    
    	/*Dog b;
    	Dog a(b);
    	Dog c;
    	
    	c = b;*/
	delete animal1;
	delete animal2;

	return (0);
}
