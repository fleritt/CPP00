/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 19:50:04 by ricardo           #+#    #+#             */
/*   Updated: 2026/04/24 19:40:07 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
private:
    Contact Contacts[8];
    int index;
public:
    PhoneBook();
    ~PhoneBook();
    void AddPhone();
    void SearchPhone();
};

#endif