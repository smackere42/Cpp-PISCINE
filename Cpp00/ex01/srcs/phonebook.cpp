/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:31:40 by smackere          #+#    #+#             */
/*   Updated: 2022/11/04 19:12:59 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits>
#include "../includes/PhoneBook.hpp"

Phonebook::Phonebook()
{
    this->_index = -1;
    this->_currentConts = -1;
    this->_maxContacts = 8;
    std::cout << "*******************PHONEBOOK*******************" << std::endl;
    std::cout << "Command info: " << std::endl;
	std::cout << " -ADD: add a contact to the phonebook" << std::endl;
	std::cout << " -SEARCH: search for a contact in the phonebook" << std::endl;
	std::cout << " -EXIT: quit the program" << '\n' << std::endl;
    // std::cout << " -INFO: repeat this message" << std::endl;
    return;
}

Phonebook::~Phonebook()
{
    std::cout<< "Thanks 4 using my phonebook." << std::endl;
    return;
}

void    Phonebook::showInfo()
{
    std::cout << "Command info: " << std::endl;
	std::cout << " -ADD: add a contact to the phonebook" << std::endl;
	std::cout << " -SEARCH: search for a contact in the phonebook" << std::endl;
	std::cout << " -EXIT: quit the program" << std::endl;
    std::cout << std::endl;
    // std::cout << " -INFO: repeat this message" << std::endl;
    return;
}

std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

void   preTable(int j)
{
    if (j == 7)
        std::cout << "Phonebook is full!!" << std::endl;
    else if (j == -1)
        std::cout << "Phonebook is empty!!" << std::endl;
    else
        std::cout << "There is " << j + 1 << " contacts in phonebook." << std::endl;
}

void    Phonebook::searchCont()
{
    int i;
    int index;

    i = -1;
    preTable(this->_currentConts); 
    if (this->_currentConts == - 1)
        return;
    std::cout << "********************CONTACTS*****************" << std::endl;
	std::cout << "│" << std::setw(10) << std::right << "index";
	std::cout << "│" << std::setw(10) << std::right << "first name";
	std::cout << "│" << std::setw(10) << std::right << "last name";
	std::cout << "│" << std::setw(10) << std::right << "nickname" << "│" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
    while (i < this->_currentConts)
    {
        std::cout << "|" << std::setw(10) << i + 2;
		std::cout << "|" << std::setw(10) << truncate(this->_arr[i + 1].get_first_name());
		std::cout << "|" << std::setw(10) << truncate(this->_arr[i + 1].get_last_name());
		std::cout << "|" << std::setw(10) << truncate(this->_arr[i + 1].get_nick_name()) << "|" << std::endl;
        i++;
    }
    std::cout << "└──────────┴──────────┴──────────┴──────────┘" << '\n' << std::endl;
    std::cout << "Please enter Contact index: " << std::endl;
    while (!(std::cin >> index) || index > this->_currentConts + 1|| index < 1)
    {
        std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Incorrect input, you can choose only between 1 and " << this->_currentConts+ 1 << std::endl;
    }
    std::cout << "First name - " << this->_arr[index - 1].get_first_name() << std::endl;
    std::cout << "Last name - " << this->_arr[index - 1].get_last_name() << std::endl;
    std::cout << "Nickname - " << this->_arr[index - 1].get_nick_name() << std::endl;
    std::cout << "Phone number - " << this->_arr[index - 1].get_phone_number() << std::endl;
    std::cout << "Darkest secret - " << this->_arr[index - 1].get_darkest_secret() << std::endl;
}

Contact Phonebook::getContact(int index)
{
    return(this->_arr[index % 8]);
}

std::string Phonebook::check(std::string name)
{
    if (name.empty())
    {
        std::cout << "Please enter some value" << std::endl;
        getline(std::cin, name);
        this->check(name);
    }
    else
        return (name);
    return (name);
}

int Phonebook::getIndex()
{
    return(_index);
}

void    Phonebook::addCont()
{
    int i;

    this->_index++;
    if (this->_index  < 8)
    {
        this->_currentConts++;
    }
    else
        std::cout << this->_arr[this->_index % 8].get_first_name() << " will be rewright!!" << std::endl;
    std::string name;
    std::cout << '\n' << "Please enter Contact Firstname: ";
    getline(std::cin, name);
    this->check(name);
    this->_arr[this->_index % 8].set_first_name(name);
    std::cout << '\n' << "Please enter Contact Lastname: ";
    getline(std::cin, name);
    this->check(name);
    this->_arr[this->_index % 8].set_last_name(name);
    std::cout << '\n' << "Please enter Contact Nickname: ";
    getline(std::cin, name);
    this->check(name);
    this->_arr[this->_index % 8].set_nick_name(name);
    std::cout << '\n' << "Please enter Contact Phonenumber: ";
    getline(std::cin, name);
    this->check(name);
    this->_arr[this->_index % 8].set_phone_number(name);
    std::cout << '\n' << "Please enter Contact darkest secret: ";
    getline(std::cin, name);
    this->check(name);
    this->_arr[this->_index % 8].set_darkest_secret(name);
    std::cout << std::endl;
}