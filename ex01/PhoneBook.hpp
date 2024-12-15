/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:17:47 by qalpesse          #+#    #+#             */
/*   Updated: 2024/12/15 17:06:00 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contacte.hpp"
class PhoneBook{
	private:
		static const int size = 8;
		Contact contacts[8];
	public:
		void add(Contact contact, int index)
		{
			if (index >= size)
				index = 7;
			contacts[index] = contact;
			index++;
		}
		void search(int index){
			contacts[index].display_first_name();
			contacts[index].display_last_name();
			contacts[index].display_nick_name();
			contacts[index].display_phone_number();
			contacts[index].display_darkest_secret();
		}
};
#endif