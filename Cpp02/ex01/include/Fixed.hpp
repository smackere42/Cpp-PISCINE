/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:58:57 by smackere          #+#    #+#             */
/*   Updated: 2022/11/08 17:16:43 by smackere         ###   ########.fr       */
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
    Fixed& operator=(const Fixed& oper);
    ~Fixed();

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

    float   toFloat( void ) const;
    int     toInt( void ) const;
};

std::ostream&   operator<<(std::ostream& out, const Fixed& Fixed);

#endif