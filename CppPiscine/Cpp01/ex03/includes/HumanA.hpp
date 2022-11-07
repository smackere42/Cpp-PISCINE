/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:27:27 by smackere          #+#    #+#             */
/*   Updated: 2022/11/05 03:24:00 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
    std::string _name;
    Weapon &_weapon;
public:
    HumanA();
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();

    void attack();
};

#endif
