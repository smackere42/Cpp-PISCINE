/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:14:52 by smackere          #+#    #+#             */
/*   Updated: 2022/11/05 01:15:11 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <iostream>

class Zombie
{
private:
    std::string _name;
public:

    //Const Dest
    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);

    void    announce(void);
    
    void    setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif