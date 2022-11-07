/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 05:24:55 by smackere          #+#    #+#             */
/*   Updated: 2022/11/04 18:46:06 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/PhoneBook.hpp"

int main(void)
{
    Phonebook   phonebook;

    while(1)
    {
        std::string cmd;
        std::getline(std::cin, cmd);
        if (cmd == "ADD")
                phonebook.addCont();
        else if (cmd == "SEARCH")
            phonebook.searchCont();
        // else if (cmd == "INFO")
        //     phonebook.showInfo();
        else if (cmd == "EXIT")
            break;
        // else
        // {
        //     std::cout << "Only this commands allowed" << std::endl;
        //     phonebook.showInfo();
        // }
    }
    return(0);
}