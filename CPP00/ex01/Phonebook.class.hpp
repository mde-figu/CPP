/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:41:54 by mde-figu          #+#    #+#             */
/*   Updated: 2022/02/18 11:47:32 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.class.hpp"

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

class Phonebook {

	public :
		int listSize;
		int actualIndex;
		Phonebook(void);
		~Phonebook(void);
		std::string	handler(void);
		void add();// adiciona um novo contato
		void search();// TODO: procurar contatos
};

#endif