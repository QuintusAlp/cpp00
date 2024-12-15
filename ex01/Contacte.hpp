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
class Contact{
	public:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;

		void display_first_name(){
			std::cout << first_name << std::endl;
		}
		void display_last_name(){
			std::cout << last_name << std::endl;
		}
		void display_nick_name(){
			std::cout << nick_name << std::endl;
		}
		void display_phone_number(){
			std::cout << phone_number << std::endl;
		}
		void display_darkest_secret(){
			std::cout << darkest_secret << std::endl;
		}
};
#endif
