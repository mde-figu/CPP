/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:17:27 by mde-figu          #+#    #+#             */
/*   Updated: 2022/02/18 15:46:34 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact()
{
	return;
}

void Contact::setFirstName()
{
	std::string entry;

	entry = "";
	while (entry == "")
		std::getline(std::cin, entry);
	this->firstName = entry;
}
