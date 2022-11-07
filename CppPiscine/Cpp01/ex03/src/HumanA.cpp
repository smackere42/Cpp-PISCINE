/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:26:45 by smackere          #+#    #+#             */
/*   Updated: 2022/11/05 03:22:51 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    std::cout << "HumanA " << this->_name << " with ";
    std::cout << this->_weapon.getType() << " is ready to fight" << std::endl;
    return;
}

HumanA::~HumanA()
{
    std::cout << this->_name << " goes to sleep" << std::endl;
    return;
}

void    HumanA::attack()
{
    std::cout << this->_name << " attacks with their ";
    std::cout << this->_weapon.getType() << '\n';
    return;
}