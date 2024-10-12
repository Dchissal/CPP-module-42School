/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:44:02 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/02 17:44:04 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOk_HPP

#include <iostream>
#include <iomanip>
#include <string>

class	Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
	void	setContactInfo(const std::string& fName,
	const std::string& lName, const std::string& nName,
	const std::string& pNumber, const std::string& dSecret);
	
	void	displayShortInfo(int index) const;
	
	void	displayFullInfo() const;
	private:
		std::string truncateString(const std::string& str) const;
};

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int	currentContactCount;
	public:
		PhoneBook() : currentContactCount(0) {}
		
		void	addContact();
		
		void	searchContacts() const;
};

#endif
