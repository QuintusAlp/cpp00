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

int main(int argc, char **argv) {
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< "\n";
		return 0;
	}
	int i;
	int j;
	j = 1;
	while(j < argc)
	{
		i = 0;
		while(argv[j][i])
		{
			if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
				argv[j][i++] -= 32;
			else
				i++;
		}
		std::cout << argv[j];
		j++;
	}
	std::cout << "\n";
    return 0;
}