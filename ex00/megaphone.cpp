/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:45:00 by qalpesse          #+#    #+#             */
/*   Updated: 2024/12/13 15:00:36 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
void ft_str_upper(char *str)
{
	while(*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return ;
}

int main(int argc, char **argv) {
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< "\n";
		return 0;
	}
	int j;
	j = 1;
	while(j < argc)
	{
		ft_str_upper(argv[j]);
		std::cout << argv[j];
		j++;
	}
	std::cout << "\n";
    return 0;
}
