/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:14:20 by mde-figu          #+#    #+#             */
/*   Updated: 2022/02/22 14:09:09 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <string>
#include <sstream>

#define SSTR( x ) static_cast< std::ostringstream & >( \
		( std::ostringstream() << std::dec << x ) ).str()

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phone;
		std::string secret;
	public :
		int index;
		Contact();
		std::string	getIndex(void);
		void		setFirstName(void);
		std::string	getFirstName(void);
		void		setLastName(void);
		std::string	getLastName(void);
		void		setNickName(void);
		std::string	getNickName(void);
		void		setPhone(void);
		std::string	getPhone(void);
		void		setSecret(void);
		std::string	getSecret(void);
};

#endif