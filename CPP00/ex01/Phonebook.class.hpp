/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:41:54 by mde-figu          #+#    #+#             */
/*   Updated: 2022/02/18 09:20:24 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.class.hpp"

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

class PhoneBook {
	private:
		//Contact array[8];
	public :
		PhoneBook();// constructor
		~PhoneBook();// destructor
		void add(int index,
				std::string firstName,
				std::string lastName,
				std::string nickName,
				std::string phone,
				std::string secret);// adiciona um novo contato
		void search();// TODO: procurar contatos
};

#endif