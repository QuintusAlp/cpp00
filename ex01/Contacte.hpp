/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacte.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:43:12 by qalpesse          #+#    #+#             */
/*   Updated: 2024/12/15 19:18:13 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTE_HPP
# define CONTACTE_HPP
# include <iostream>
#include <string>
#include <cctype>
class Contact{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;

	public:
		int is_alpha(std::string str){
			long unsigned int i = 0;
			while (i < str.size())
			{
				if (!std::isalpha(str[i]) || str[i] == ' ')
					return (0);
				i++;
			}
			return 1;
		}
		int is_num(std::string str){
			long unsigned int i = 0;
			while (i < str.size())
			{
				if (!std::isdigit(str[i]))
					return (0);
				i++;
			}
			return 1;
		}
		void get_first_name(){
			std::string name;

			while(1)
			{
				std::cout << "first name: ";
				std::getline(std::cin, name);
				if (is_alpha(name))
				{
					first_name = name;
					if (!first_name[0])
						std::cout << "can't be empty\n";
					else
						return ;
				}
				else
					std::cout << "only alpha char are authorises!\n";
			}
		}
		void get_last_name(){
			std::string name;

			while(1)
			{
				std::cout << "last name: ";
				std::getline(std::cin, name);
				if (is_alpha(name))
				{
					last_name = name;
					if(last_name.empty())
						std::cout << "can't be empty\n";
					else
						return ;
				}
				else
					std::cout << "only alpha char are authorises!\n";
			}
		}
		void get_nickname(){
			std::string name;

			while(1)
			{
				std::cout << "nickname: ";
				std::getline(std::cin, name);
				if (is_alpha(name))
				{
					nick_name = name;
					if (nick_name.empty())
						std::cout << "can't be empty\n";
					return ;
				}
				else
					std::cout << "only alpha char are authorises!\n";
			}
		}
		void get_darkestsecret(){
			std::string name;

			while(1)
			{
				std::cout << "darkest secret: ";
				std::getline(std::cin, name);
				if (is_alpha(name))
				{
					darkest_secret = name;
					if (darkest_secret.empty())
						std::cout << "can't be empty\n";
					else
						return ;
				}
				else
					std::cout << "only alpha char are authorises!\n";
			}
		}
		void get_phonenumber(){
			std::string name;

			while(1)
			{
				std::cout << "phone number: ";
				std::getline(std::cin, name);
				if (is_num(name))
				{
					phone_number = name;
					if (phone_number.empty())
						std::cout << "can't be ampty\n";
					else
						return ;
				}
				else
					std::cout << "only numbers  are authorise!\n";
			}
		}



		void display_first_name(){
			if (!first_name.empty())
				std::cout << first_name << "\n";
		}
		void display_last_name(){
			if (!last_name.empty())
				std::cout << last_name << "\n";
		}
		void display_nick_name(){
			if (!nick_name.empty())
				std::cout << nick_name << "\n";
		}
		void display_phone_number(){
			if (!phone_number.empty())
				std::cout << phone_number << "\n";
		}
		void display_darkest_secret(){
			if (!darkest_secret.empty())
				std::cout << darkest_secret << "\n";
		}
		int isempty()
		{
			if (first_name.empty())
				return 1;
			return 0;
		}
};
#endif
