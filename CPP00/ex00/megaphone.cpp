/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:53:32 by mde-figu          #+#    #+#             */
/*   Updated: 2022/02/07 21:31:45 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

char	*megaphone(char *str){
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	std::cout << str ;
	return str;
}

int main(int argc, char** argv){
	int i;

	(void )argc;
	for (i = 1; argv[i]; i++)
		argv[i] = ::megaphone(argv[i]);

	return 0;
}
