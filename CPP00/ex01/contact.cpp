/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:17:27 by mde-figu          #+#    #+#             */
/*   Updated: 2022/02/22 11:40:35 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(): index(0) {}

std::string	Contact::getIndex()
{
	return SSTR(this->index);
}

void Contact::setFirstName()
{
	std::string entry;

	entry = "";
	while (entry == "")
		std::getline(std::cin, entry);
	this->firstName = entry;
}

std::string Contact::getFirstName() {return this->firstName;}

void	Contact::setLastName()
{
	std::string entry;

	entry = "";
	while (entry == "")
		std::getline(std::cin, entry);
	this->lastName = entry;
}

std::string Contact::getLastName() {return this->lastName;}

void	Contact::setNickName()
{
	std::string entry;

	entry = "";
	while (entry == "")
		std::getline(std::cin, entry);
	this->nickName = entry;
}

std::string Contact::getNickName() {return this->nickName;}

void	Contact::setPhone()
{
	std::string	entry;

	entry = "";
	while (entry == "")
		std::getline(std::cin, entry);
	this->phone = entry;
}

std::string	Contact::getPhone(){return SSTR(this->phone);}

void	Contact::setSecret()
{
	std::string entry;

	entry = "";
	while (entry == "")
		std::getline(std::cin, entry);
	this->secret = entry;
}

std::string Contact::getSecret() {return this->secret;}