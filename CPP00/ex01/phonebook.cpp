/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:41:01 by mde-figu          #+#    #+#             */
/*   Updated: 2022/02/22 15:03:02 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

void splash(void)
{
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "=                PhoneBook                 =" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "                 You may use:               " << std::endl;
	std::cout << "              ADD / SEARCH / EXIT           " << std::endl;

	return;
}

Phonebook::Phonebook(void) : listSize(0),actualIndex(0) {}

Phonebook::~Phonebook(void)
{
	std::cout << "cabô";
}

void	Phonebook::add(void)
{
	//TODO: limit of 8, if above, rewritte
	this->contactList[this->listSize % 8].index = this->listSize + 1;
	std::cout << "Insert contact's first name" << std::endl;
	this->contactList[this->listSize % 8].setFirstName();
	std::cout << "Insert contact's last name" << std::endl;
	this->contactList[this->listSize % 8].setLastName();
	std::cout << "Insert contact's nickname" << std::endl;
	this->contactList[this->listSize % 8].setNickName();
	std::cout << "Insert contact's phone number" << std::endl;
	this->contactList[this->listSize % 8].setPhone();
	std::cout << "Insert contact's darkest secret" << std::endl;
	this->contactList[this->listSize % 8].setSecret();

	this->listSize++;
	std::cout << "*Contact inserted successfully*" << std::endl;
	return ;
}

void	Phonebook::printTableHeader(void)
{
	std::cout << std::setw(10);
	std::cout << " Index " << "|";
	std::cout << std::setw(10);
	std::cout << "First name" << "|";
	std::cout << std::setw(10);
	std::cout << "Last name " << "|";
	std::cout << std::setw(10);
	std::cout << " Nickname " << "|"<< std::endl;
	return ;
}

void	Phonebook::printTable(void)
{
	for (int i = 0; i <= this->listSize; i++)
	{
		std::cout << std::setw(10);
		std::cout << this->contactList[i].getIndex() << "|";
		std::cout << std::setw(10);
		std::cout << this->contactList[i].getFirstName() << "|";
		std::cout << std::setw(10);
		std::cout << this->contactList[i].getLastName() << "|";
		std::cout << std::setw(10);
		std::cout << this->contactList[i].getNickName() << "|";

		std::cout << std::endl;
	}
	return ;
}

void	Phonebook::printIndex(void)
{
	int	id;
	std::string entry;
	std::cout << "Input index number for more information:" << std::endl;

	entry = "";
	while (entry == "")
		std::getline(std::cin, entry);
	std::istringstream(entry) >> id;
	id = id -1;
	if (entry == "EXIT")
	{
		this->~Phonebook();
		exit(0);
	}
	else if ( id <= 0 || id >= 8)
	{
		std::cout << this->contactList[id].getFirstName() << std::endl;
		std::cout << this->contactList[id].getLastName() << std::endl;
		std::cout << this->contactList[id].getNickName() << std::endl;
		std::cout << this->contactList[id].getPhone() << std::endl;
		std::cout << this->contactList[id].getSecret() << std::endl;
	}
	return ;
}

void	Phonebook::search(void)
{
	//TODO: if no contacts, msg.
	if (this->contactList != 0)
	{
		this->printTableHeader();
		this->printTable();
		this->printIndex();
	}
	
	return ;
}

std::string Phonebook::handler(void)
{
	std::string action;

	action = "";
	while (action != "EXIT")
	{
		std::getline(std::cin, action);
		if (action == "ADD")
			this->add();
		if (action == "SEARCH")
			this->search();
	}

	return "bye";
}

int	main(void)
{
	Phonebook phonebook;
	std::string handler;
	::splash();
	phonebook.handler();
	

	return (0); 
}