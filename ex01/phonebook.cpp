/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:04:53 by qalpesse          #+#    #+#             */
/*   Updated: 2024/12/15 19:36:56 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacte.hpp"
#include "PhoneBook.hpp"
int ft_strcmp(char *str, char *str_cmp)
{
	while (*str && *str_cmp)
	{
		if (*str != *str_cmp)
			return 0;
		str++;
		str_cmp++;
	}
	if (*str || *str_cmp)
		return 0;
	return 1;
}
int main(void){
	PhoneBook		repertory;
	Contact		contact;
	std::string	command;
	int			i;

	i = 0;
	while (1)
	{
		std::cout << "> ";
    		std::getline(std::cin, command);
		if (command == "add")
		{
			std::cout << "first name: ";
			std::getline(std::cin, contact.first_name);
			std::cout << "last name: ";
			std::getline(std::cin, contact.last_name);
			std::cout << "mick name: ";
			std::getline(std::cin, contact.nick_name);
			std::cout << "phone number: ";
			std::getline(std::cin, contact.phone_number );
			std::cout << "darkest secret: ";
			std::getline(std::cin, contact.darkest_secret );
			repertory.add(contact, i++);
		}
		if (command == "search")
		{
			int index;
			std::cout << "index: ";
			std::cin >> index;
			repertory.search(index);
			std::cout << std::endl;
		}
		if (command == "exit")
			break ;
	}
	return 0;
}
