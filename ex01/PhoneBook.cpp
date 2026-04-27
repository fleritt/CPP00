#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::SearchPhone()
{
    int i = 0;
    int n;
    std::string number;

    std::cout << " index | 1st name | Surname  | nickname " << std::endl;
    while (i < 8 && i < index)
    {
        std::cout << std::setw(7) << std::left << i << "|" << Contacts[i].GetContact("fn") << "|";
        std::cout << Contacts[i].GetContact("ln") << "|" << Contacts[i].GetContact("nn") << std::endl;
        i++;
    }
    while (1)
    {
        std::cout << "Type index for view a contact data" << std::endl;
        std::cin >> number;
        if (number >= "0" && number < "8")
            break ;
        else
            std::cout << "Index should be a range 0-7" << std::endl;
    }
    n = std::atoi(number.c_str());
    if (n > index)
    {
        std::cout << "No exist the contact" << std::endl;
        return ;
    }
    std::cout << " index | 1st name | Surname  | nickname | Phone Number | Dark secret" << std::endl;
    std::cout << std::setw(7) << std::left << n << "|" << Contacts[n].GetContact("fn") << "|";
    std::cout << Contacts[n].GetContact("ln") << "|" << Contacts[n].GetContact("nn") << "|";
    std::cout << Contacts[n].GetContact("pn") << "|" << Contacts[n].GetContact("ds") << std::endl;
}

void PhoneBook::AddPhone()
{
    std::string Fname;
    std::string Lname;
    std::string Pnumber;
    std::string Nname;
    std::string Dsecret;

    std::cout << "Your Name" << std::endl;
    std::cin >> Fname;
    std::cout << "Your Last Name" << std::endl;
    std::cin >> Lname;
    std::cout << "Your Nick Name" << std::endl;
    std::cin >> Nname;
    std::cout << "Your Phone Number" << std::endl;
    std::cin >> Pnumber;
    std::cout << "Your Darkest Secret" << std::endl;
    std::cin >> Dsecret;
    Contacts[index % 8].SetContact(Fname, Lname, Pnumber, Nname, Dsecret);
    index++;
}