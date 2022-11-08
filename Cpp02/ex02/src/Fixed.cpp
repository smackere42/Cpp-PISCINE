/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:59:00 by smackere          #+#    #+#             */
/*   Updated: 2022/11/08 19:32:17 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed() : _fp(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int param)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_fp = param << _fraction;
}

Fixed::Fixed(const float number)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_fp = int(roundf(number * (1 << _fraction)));
}

Fixed::Fixed(const Fixed& copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->_fp = copy.getRawBits();
}

Fixed& Fixed:: operator=(const Fixed& oper)
{
	std::cout << "Copy assignment operator called" << std::endl;
	 this->_fp = oper._fp;
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

bool	Fixed::operator>(const Fixed& oper) const
{
	return this->_fp > oper._fp;
}

bool	Fixed::operator<(const Fixed& oper) const
{
	return this->_fp < oper._fp;
}

bool	Fixed::operator>=(const Fixed& oper) const
{
	return this->_fp >= oper._fp;
}

bool	Fixed::operator<=(const Fixed& oper) const
{
	return this->_fp <= oper._fp;
}

bool	Fixed::operator!=(const Fixed& oper) const
{
	return this->_fp != oper._fp;
}

bool	Fixed::operator==(const Fixed& oper) const
{
	return this->_fp == oper._fp;
}

Fixed&	Fixed::operator++(void)
{
	this->_fp++;
	return (*this);
}

Fixed&	Fixed::operator--(void)
{
	this->_fp--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;

	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	++*this;

	return (*this);
}

Fixed Fixed::operator+(const Fixed& oper) const
{
	Fixed tmp;

	tmp.setRawBits(this->_fp + oper._fp);
	return Fixed(tmp);
}

Fixed Fixed::operator-(const Fixed& oper) const
{
	Fixed tmp;

	tmp.setRawBits(this->_fp - oper._fp);
	return Fixed(tmp);
}

Fixed Fixed::operator*(const Fixed& oper)
{
	Fixed tmp;

	tmp.setRawBits((this->_fp * oper._fp) >> _fraction);
	return Fixed();
}

Fixed Fixed::operator/(const Fixed& oper)
{
	Fixed tmp;

	tmp.setRawBits((this->_fp * (1 << _fraction)) / oper._fp);
	return Fixed(tmp);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a > b)
		return b;
	else
		return a;
}

const Fixed&	Fixed::min(const Fixed& a,const Fixed& b)
{
	if (a._fp > b._fp)
		return b;
	else
		return a;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return b;
	else
		return a;
}

const Fixed&	Fixed::max(const Fixed& a,const Fixed& b)
{
	if (a._fp > b._fp)
		return a;
	else
		return b;
}


Fixed::~Fixed()
{
	// std::cout << "Distructor called" << std::endl;
}