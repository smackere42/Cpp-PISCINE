/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:27:52 by smackere          #+#    #+#             */
/*   Updated: 2022/11/04 04:21:51 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact()
{
    return;
}

Contact::~Contact()
{
    return;
}

void    Contact::set_first_name(std::string str)
{
    _first_name = str;
}

void    Contact::set_last_name(std::string  str)
{
    _last_name = str;
}

void    Contact::set_nick_name(std::string str)
{
    _nick_name = str;
}

void    Contact::set_phone_number(std::string str)
{
    _phone_number = str;
}

void    Contact::set_darkest_secret(std::string str)
{
    _darkest_secret = str;
}

std::string   Contact::get_first_name() const
{
    return (_first_name);
}

std::string Contact::get_last_name() const
{
    return (_last_name);
}

std::string Contact::get_nick_name() const
{
    return (_phone_number);
}

std::string Contact::get_phone_number() const
{
    return (_phone_number);
}

std::string Contact::get_darkest_secret() const
{
    return  (_darkest_secret);
}