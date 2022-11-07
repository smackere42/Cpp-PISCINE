/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 05:44:27 by smackere          #+#    #+#             */
/*   Updated: 2022/11/05 08:59:02 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/Harl.hpp"

int main(void)
{
    Harl Mike;
    Mike.complain("WARNING");
    Mike.complain("DEBUG");
    Mike.complain("ERROR");
    Mike.complain("INFO");
}