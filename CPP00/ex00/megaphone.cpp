/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:53:32 by mde-figu          #+#    #+#             */
/*   Updated: 2022/02/07 16:06:16 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*megaphone(char *str){
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
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
	std::cout << argv ;

	return 0;
}