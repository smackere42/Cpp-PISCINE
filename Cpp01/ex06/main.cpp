/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 05:44:27 by smackere          #+#    #+#             */
/*   Updated: 2022/11/05 08:31:22 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/Harl.hpp"

int main(int argc, char **argv)
{
    Harl Mike;
    int i;

    i = 0;
    if (argc == 2)
    {
        std::string levels[4] = {
            "DEBUG",
            "INFO",
            "WARNING",
            "ERROR"
        };
        while (i < 4 && levels[i] != argv[1])
            i++;
        switch (i)
        {
            case 0:
                Mike.complain(levels[0]);
                std::cout << std::endl;
            case 1:
                Mike.complain(levels[1]);
                std::cout << std::endl;
            case 2:
                Mike.complain(levels[2]);
                std::cout << std::endl;
            case 3:
                Mike.complain(levels[3]);
                std::cout << std::endl;
                break;
            default:
                std::cout << "[ Probably complaining about insignificant problem...]" << std::endl;
        }
    } else {
        std::cout << "[ Probably complaining about insignificant problem...]" << std::endl;
    }
}