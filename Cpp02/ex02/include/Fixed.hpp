/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:58:57 by smackere          #+#    #+#             */
/*   Updated: 2022/11/08 19:30:32 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
    static const int    _fraction = 8;
    int                 _fp;
public:
    Fixed(void);
    Fixed(const int param);
    Fixed(const float number);
    Fixed(const Fixed& copy);
    Fixed&  operator=(const Fixed& oper);
    bool    operator>(const Fixed& oper) const;
    bool    operator<(const Fixed& oper) const;
    bool    operator>=(const Fixed& oper) const;
    bool    operator<=(const Fixed& oper) const;
    bool    operator==(const Fixed& oper) const;
    bool    operator!=(const Fixed& oper) const;
    Fixed   operator+(const Fixed& oper) const;
    Fixed   operator-(const Fixed& oper) const;
    Fixed   operator*(const Fixed& oper);
    Fixed   operator/(const Fixed& oper);
    ~Fixed();

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

    float   toFloat( void ) const;
    int     toInt( void ) const;

    //Pre increment
    Fixed& operator++(void);
    //Pre decrement
	Fixed& operator--(void);
    //Post increment
	Fixed operator++(int);
    //Post decrement
	Fixed operator--(int);

    static			Fixed& min(Fixed& a, Fixed& b);
	static const	Fixed& min(const Fixed& a, const Fixed& b);
	static			Fixed& max(Fixed& a, Fixed& b);
	static const	Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream&   operator<<(std::ostream& out, const Fixed& copy);

#endif