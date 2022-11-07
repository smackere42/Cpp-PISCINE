/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:27:01 by smackere          #+#    #+#             */
/*   Updated: 2022/11/05 11:17:33 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << '\n';
}

Fixed::Fixed(const int param)
{
    std::cout << "Int constructor called" << '\n';
    this->_fp = (param << _fraction);
}

Fixed::Fixed(const float number)
{
    std::cout << "Float constructor called" << '\n';
    this->_fp = int(roundf(number * (1 << _fraction)));
}

Fixed::Fixed(const Fixed& copy)
{
    this->_fp = copy.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Distructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fp;
}

void    Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fp = raw;
}

float   Fixed::toFloat() const
{
    return float(this->_fp) / (1 << _fraction);
}

int     Fixed::toInt() const
{
    return (this->_fp >> _fraction);
}

std::ostream& operator << (std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return o;
}