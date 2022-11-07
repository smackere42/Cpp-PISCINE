/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:26:47 by smackere          #+#    #+#             */
/*   Updated: 2022/11/05 03:26:26 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    std::cout << this->_name << " is ready to figth!" << std::endl;
    return;
}

HumanB::~HumanB()
{
    std::cout << this->_name << " goes to sleep" << std::endl;
    return;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
    return;
}

void    HumanB::attack()
{
    std::cout << this->_name << " attakcs with ";
    if (this->_weapon)
        std::cout << this->_weapon->getType() << '\n';
    else
        std::cout << "his fists" << '\n';
    return;
}