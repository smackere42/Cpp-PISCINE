/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 01:53:37 by smackere          #+#    #+#             */
/*   Updated: 2022/11/05 02:08:11 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string     str("HI THIS IS BRAIN");
    std::string*    strPtr = &str;
    std::string&    strRef = str;

    std::cout << "Address of string:   " << &str << '\n';
    std::cout << "Address held by PTR: " << strPtr << '\n';
    std::cout << "Address held by REF: " << &strRef << '\n';
    std::cout << '\n';
    std::cout << "The value of the string: " << str << '\n';
    std::cout << "Value pointed by PTR:    " << *strPtr <<'\n';
    std::cout << "Value pointed by REF:    " << strRef << '\n';
}