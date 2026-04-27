/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 20:19:23 by ricardo           #+#    #+#             */
/*   Updated: 2026/04/24 19:05:02 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string count_char(std::string string)
{
    std::string temp;
    int i = 0;

    if (string.length() > 10)
    {
        while (i < 9)
        {
            temp += string[i];
            i++;
        }
        temp += '.';
    }
    else if (string.length() == 10)
    {
        return (string);
    }
    else
    {
        i = string.length();
        while (i < 10)
        {
            string += ' ';
            i++;
        }
        return (string);
    }
    return (temp);
}

void Contact::SetContact(std::string FirstName, std::string LastName, std::string PhoneNumber, std::string NickName, std::string Darksecret)
{
    _FirstName = count_char(FirstName);
    _LastName = count_char(LastName);
    _NickName = count_char(NickName);
    _PhoneNumber = count_char(PhoneNumber);
    _DarkSecret = count_char(Darksecret);
}

std::string Contact::GetContact(std::string data)
{
    if (data == "fn")
        return (_FirstName);
    if (data == "ln")
        return (_LastName);
    if (data == "nn")
        return (_NickName);
    if (data == "pn")
        return (_PhoneNumber);
    if (data == "ds")
        return (_DarkSecret);
    return ("");
}

Contact::Contact()
{
    
}

Contact::~Contact()
{
    
}