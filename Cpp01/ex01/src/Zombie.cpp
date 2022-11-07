/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:38:00 by smackere          #+#    #+#             */
/*   Updated: 2022/11/05 01:16:37 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << this->_name << " - rose from the grave!!" << std::endl;
    return;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " - in grave again" << std::endl;
    return;
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}