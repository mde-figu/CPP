/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:41:54 by mde-figu          #+#    #+#             */
/*   Updated: 2022/02/22 14:50:45 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip> 
#include <string>
#include <stdlib.h>
#include <ctype.h>
#include "Contact.class.hpp"

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

class Phonebook {

	private :
		int listSize;

	public :
		Contact contactList[8];
		int actualIndex;
		Phonebook(void);
		~Phonebook(void);
		std::string	handler(void);
		void add();
		void search();
		void printTableHeader();
		void printTable();
		void printIndex();
};

#endif