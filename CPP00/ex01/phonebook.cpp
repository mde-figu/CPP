/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:41:01 by mde-figu          #+#    #+#             */
/*   Updated: 2022/02/18 16:26:13 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

void splash(void)
{
	std::cout << "---------------------" << std::endl;
	std::cout << "=     PhoneBook     =" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "     You may use:    " << std::endl;
	std::cout << " ADD / SEARCH / EXIT " << std::endl;

	return;
}

Phonebook::Phonebook(void)
{
	this->listSize = 0;
	this->actualIndex = 0;
}

Phonebook::~Phonebook(void)
{
	std::cout << "cabô";
}

void	Phonebook::add(void)
{
	//TODO: setters
	this->contactlist[this->actualIndex].index = this->actualIndex + 1;
	std::cout << "Insert contact's first name" << std::endl;
	this->contactlist[this->actualIndex].setFirstName();

	return ;
}

void	Phonebook::search(void)
{
	//TODO: getters
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