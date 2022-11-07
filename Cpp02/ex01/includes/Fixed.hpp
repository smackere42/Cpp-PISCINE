/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:18:47 by smackere          #+#    #+#             */
/*   Updated: 2022/11/05 11:12:25 by smackere         ###   ########.fr       */
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
    // Fixed& operator=(const Fixed& per);
    ~Fixed();

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

    float   toFloat( void ) const;
    int     toInt( void ) const;
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);

#endif