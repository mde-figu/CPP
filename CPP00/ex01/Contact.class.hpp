/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:14:20 by mde-figu          #+#    #+#             */
/*   Updated: 2022/02/18 09:18:46 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phone;
		std::string secret;
	public :
		Contact();// constructor
		~Contact();// destructor
		// 		std::string firstName,
		// 		std::string lastName,
		// 		std::string nickName,
		// 		std::string phone,
		// 		std::string secret);// seta o nome do contato
};

#endif