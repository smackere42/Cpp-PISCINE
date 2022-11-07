/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:43:21 by smackere          #+#    #+#             */
/*   Updated: 2022/11/05 01:28:45 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int main(void)
{
    int count = 8;
    Zombie* horde = zombieHorde(count, "Sean");

    for ( int i = 0; i < count; i++)
        horde[i].announce();
    delete [] horde;
    return(0);
}