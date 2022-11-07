/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:27:25 by smackere          #+#    #+#             */
/*   Updated: 2022/11/05 03:23:56 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
    Weapon *_weapon;
    std::string _name;
public:
    HumanB();
    HumanB(std::string  name);
    ~HumanB();

    void    setWeapon(Weapon &weapon);
    void    attack();
};

#endif