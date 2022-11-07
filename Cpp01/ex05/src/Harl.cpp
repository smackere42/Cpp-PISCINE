/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 05:23:01 by smackere          #+#    #+#             */
/*   Updated: 2022/11/05 08:59:03 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl()
{
    std::cout << '\n';
    std::cout << "Harl is starting to work!" << std::endl;
    std::cout << '\n';
    return;
}

Harl::~Harl()
{
    std::cout << '\n';
    std::cout << "Harl finished" << '\n';
    std::cout << '\n';
    return;
}

/*
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void)
*/

void    Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << '\n';
    std::cout << "I really do!" << '\n';
    std::cout << '\n';
    return;
}

void    Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free." << '\n';
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << '\n';
    return;
}

void    Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money." << '\n';
    std::cout << "You didn’t put enough bacon in my burger!" << '\n';
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << '\n';
    return;
}

void    Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << '\n';
    return;
}

void    Harl::complain(std::string level)
{
    std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void (Harl::*f[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
    
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
        {
            std::cout << "[ " << level << " ]" << std::endl;
			(this->*f[i])();
        }
    }
}