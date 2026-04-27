/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 20:35:22 by ricardo           #+#    #+#             */
/*   Updated: 2026/04/21 21:37:42 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>
#include <iomanip>

class Contact
{
    private:
        std::string _FirstName;
		std::string _LastName;
		std::string	_NickName;
		std::string _PhoneNumber;
		std::string _DarkSecret;
	public:
		Contact();
		~Contact();
		void SetContact(std::string FirstName, std::string LastName, std::string PhoneNumber, std::string NickName, std::string Darksecret);
		std::string GetContact(std::string data);
};

#endif