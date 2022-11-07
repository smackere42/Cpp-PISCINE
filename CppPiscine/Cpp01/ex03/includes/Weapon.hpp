/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:27:21 by smackere          #+#    #+#             */
/*   Updated: 2022/11/05 03:11:24 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    Weapon(std::string  type);
    ~Weapon(void);

    //setter
    void      setType(std::string name);
    //getter
    const std::string   &getType() const;
};

#endif