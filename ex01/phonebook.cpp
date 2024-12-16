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

int main(void){
	PhoneBook	repertory;
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
			contact.get_first_name();
			contact.get_last_name();
			contact.get_nickname();
			contact.get_phonenumber();
			contact.get_darkestsecret();
			repertory.add(contact, i++);
		}
		if (command == "search")
		{
			int index;
			std::cout << "index: ";
			std::cin >> index;
			repertory.search(index);
			std::cout << "\n";
		}
		if (command == "exit")
			break ;
	}
	return 0;
}
