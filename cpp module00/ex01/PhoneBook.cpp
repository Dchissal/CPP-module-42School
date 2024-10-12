/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchissal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:48:34 by dchissal          #+#    #+#             */
/*   Updated: 2024/09/02 17:48:35 by dchissal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Contact::setContactInfo(const std::string& fName,
const std::string& lName, const std::string& nName,
const std::string& pNumber, const std::string& dSecret)
{
	firstName = fName;
	lastName = lName;
	nickname = nName;
	phoneNumber = pNumber;
	darkestSecret = dSecret;
}

void	Contact::displayShortInfo(int index) const
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << truncateString(firstName) << "|";
	std::cout << std::setw(10) << truncateString(lastName) << "|";
	std::cout << std::setw(10) << truncateString(nickname) << std::endl;
	std::cout << "\n";
}

void	Contact::displayFullInfo() const 
{
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

std::string Contact::truncateString(const std::string& str) const
{
	if (str.length() > 10)
	    return str.substr(0, 9) + ".";
	return str;
}

void	PhoneBook::addContact()
{
	std::string fName, lName, nName, pNumber, dSecret;
	
	std::cout << "Enter First Name: ";
	std::getline(std::cin, fName);
	std::cout << "Enter Last Name: ";
	std::getline(std::cin, lName);
	std::cout << "Enter Nickname: ";
	std::getline(std::cin, nName);
	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, pNumber);
	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, dSecret);
	
	if (fName.empty() || lName.empty()
	|| nName.empty() || pNumber.empty()
	|| dSecret.empty())
	{
		std::cout << "All fields are required!" << std::endl;
		return ;
	}
	contacts[currentContactCount % 8].setContactInfo(fName, lName, nName, pNumber, dSecret);
	currentContactCount++;
	std::cout << "Contact added successfully!" << std::endl;
}

void	PhoneBook::searchContacts() const
{
	int	i;
	int	index;
	
	if (currentContactCount == 0)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	
	i = 0;
	while (i < (currentContactCount > 8 ? 8 : currentContactCount))
	{
		contacts[i].displayShortInfo(i);
		i++;
	}
	std::cout << "Enter the index of the contact to display: ";
	std::cin >> index;
	std::cin.ignore();
	if (index < 0 || index >= (currentContactCount > 8 ? 8 : currentContactCount))
	{
	    std::cout << "Invalid index!" << std::endl;
	    return;
	}
	contacts[index].displayFullInfo();
}
