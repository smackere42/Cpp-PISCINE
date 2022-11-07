/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZomieHord.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:37:18 by smackere          #+#    #+#             */
/*   Updated: 2022/11/05 01:24:53 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* hord = new Zombie[N];
    int i;

    if (N <= 0)
        return NULL;
    i = 0;
    while (i < N)
    {
        hord[i].setName(name + " " +std::to_string(i + 1));
        i++;
    }
    return (hord);
}