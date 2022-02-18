/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:17:27 by mde-figu          #+#    #+#             */
/*   Updated: 2022/02/18 19:17:17 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact() {}

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

std::string Contact::getFirstName()
{
	return this->firstName;
}
