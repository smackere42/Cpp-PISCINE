/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:27:15 by smackere          #+#    #+#             */
/*   Updated: 2022/11/05 03:25:07 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    std::cout << "Weapon " << this->_type << " is ready..." << '\n';
    return;
}

Weapon::~Weapon()
{
    std::cout << this->_type << " is out of order" << '\n';
    return;
}

const std::string &Weapon::getType() const
{
    return (this->_type);
}

void    Weapon::setType(std::string weapon)
{
    this->_type = weapon;
    return;
}