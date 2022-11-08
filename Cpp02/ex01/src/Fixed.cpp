/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:59:00 by smackere          #+#    #+#             */
/*   Updated: 2022/11/08 17:20:00 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int param)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fp = param << _fraction;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fp = int(roundf(number * (1 << _fraction)));
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fp = copy.getRawBits();
}

Fixed& Fixed:: operator=(const Fixed& oper)
{
	if (this != &oper)
	{
		this->_fp = oper.getRawBits();
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return(*this);
}

int	Fixed::getRawBits(void) const
{
	return this->_fp;
}

void	Fixed::setRawBits(const int raw)
{
	this->_fp = raw;
}

float	Fixed::toFloat(void) const
{
	return (float(this->_fp) / (1 << this->_fraction));
}

int	Fixed::toInt(void) const
{
	return (this->_fp >> _fraction);
}

std::ostream& operator<<(std::ostream& out, const Fixed& copy)
{
	out << copy.toFloat();
	return(out);
}

Fixed::~Fixed()
{
	std::cout << "Distructor called" << std::endl;
}