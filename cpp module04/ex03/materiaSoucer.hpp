/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   materiaSoucer.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:56:33 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/19 08:56:35 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCER_HPP
#define MATERIASOURCER_HPP

#include "AMateria.hpp"

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
		MateriaSource();
		~MateriaSource();
		void	learnMateria(AMateria* m) override;
		AMateria* createMateria(std::string const & type) override;
};

#endif
