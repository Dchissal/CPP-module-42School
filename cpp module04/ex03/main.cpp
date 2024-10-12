/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:11:19 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/18 14:11:22 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "materiaSoucer.hpp"

int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return (0);
}


/*class ICharacter;

class	AMateria
{
	protected:
		std::string	type;
	public:
		AMateria(std::string const & Ctype) : type(Ctype) {}
	
		virtual ~AMateria() {}

		std::string const & getType() const
		{
			return (type);
		}
	
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target)
		{
			//std::cout << "AMateria usada em " << target.getName() << std::endl;
		}
};

class	ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class	Ice : public AMateria
{
	public:
		Ice() : AMateria("ice") {}

		AMateria* clone() const override
		{
			return (new Ice(*this));
		}
		
		void	use(ICharacter& target) override
		{
			std::cout << "Dispara um raio de gelo sobre: " 
			<< target.getName() << std::endl;
		}
};

class	Cure : public AMateria
{
	public:
		Cure() : AMateria("cure") {}

		AMateria* clone() const override
		{
			return (new Cure(*this));
		}
		
		void	use(ICharacter& target) override
		{
			std::cout << "Cura as feridas de: " 
			<< target.getName() << std::endl;
		}
};

class	Character : public ICharacter
{
	private:
		std::string name;
		AMateria* inventory[4];
	public:
		Character(std::string const & name) : name(name)
		{
			int	i;
			
			i = 0;
			while (i < 4)
			{
		    		inventory[i] = nullptr;
		    		i++;
		    	}
		}

		~Character()
		{
			int	i;
			
			i = 0;
			while (i < 4)
			{
			    delete inventory[i];
			    i++;
			}
		}

		std::string const & getName() const override
		{
			return (name);
		}

		void	equip(AMateria* m) override
		{
			int	i;
			
			i = 0;
			while (i < 4)
			{
				if (!inventory[i])
				{
					inventory[i] = m;
					break ;
				}
				i++;
			}
		}

		void	unequip(int idx) override
		{
			if (idx >= 0 && idx < 4)
				inventory[idx] = nullptr;
		}

		void	use(int idx, ICharacter& target) override
		{
			if (idx >= 0 && idx < 4 && inventory[idx])
				inventory[idx]->use(target);
		}

		Character(const Character& other) : name(other.name)
		{
			int	i;
			
			i = 0;
			while (i < 4)
			{
				inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : nullptr;
				i++;
			}
		}

		Character& operator=(const Character& other)
		{
			if (this != &other)
			{
				name = other.name;
				int	i;
				
				i = 0;
				while (i < 4)
				{
					delete inventory[i];
					inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : nullptr;
					i++;
				}
			}
			return (*this);
		}
};

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}

		virtual void learnMateria(AMateria* m) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class	MateriaSource : public IMateriaSource
{
	private:
	AMateria* templates[4];

	public:
		MateriaSource()
		{
			int	i;
			
			i = 0;
			while (i < 4)
			{
				templates[i] = nullptr;
				i++;
			}
		}

		~MateriaSource()
		{
			int	i;
			
			i = 0;
			while (i < 4)
			{
				delete templates[i];
				i++;
			}
		}

		void	learnMateria(AMateria* m) override
		{
			int	i;
			
			i = 0;
			while (i < 4)
			{
				if (!templates[i])
				{
					templates[i] = m->clone();
					break;
				}
				i++;
			}
		}

		AMateria* createMateria(std::string const & type) override
		{
			int	i;
			
			i = 0;
			while (i < 4)
			{
				if (templates[i] && templates[i]->getType() == type)
					return (templates[i]->clone());
				i++;
			}
			return (nullptr);
		}
};*/

