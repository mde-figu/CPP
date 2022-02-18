/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:14:20 by mde-figu          #+#    #+#             */
/*   Updated: 2022/02/18 17:34:00 by mde-figu         ###   ########.fr       */
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
		Contact();// constructor
		std::string		getIndex(void);
		void		setFirstName(void);
		std::string	getFirstName(void);
};

#endif