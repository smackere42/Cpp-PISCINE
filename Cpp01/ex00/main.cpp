/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:14:18 by smackere          #+#    #+#             */
/*   Updated: 2022/11/05 08:09:48 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Zombie.hpp"

int main(void)
{
    Zombie Sean("Sean");
    Zombie *Malcolm = newZombie("Malcolm");

    Sean.announce();
    randomChump("Garry");
    delete Malcolm;
    return (0);
}