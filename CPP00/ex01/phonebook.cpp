/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:41:01 by mde-figu          #+#    #+#             */
/*   Updated: 2022/02/17 21:48:30 by mde-figu         ###   ########.fr       */
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

int	main(void)
{
	::splash();
	

	return (0); 
}