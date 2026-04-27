#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    std::string state;
    PhoneBook PhoneBook;

    while(1)
    {
        std::cout << "Type ADD to save a new contact, SEARCH to search for a contact or EXIT to exit the program" << std::endl;
        std::cin >> state;
        if (state == "EXIT")
            break ;
        else if (state == "SEARCH")
            PhoneBook.SearchPhone();
        else if (state == "ADD")
            PhoneBook.AddPhone();
        else 
            continue;
    }
    return (0);
}
