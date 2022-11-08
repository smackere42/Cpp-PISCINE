/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 09:03:18 by smackere          #+#    #+#             */
/*   Updated: 2022/11/08 13:55:29 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int    _fp;
    static const int    _fraction = 8;
public:
    //Constructor
    Fixed(void);
    //Copy constructor
    Fixed(const Fixed& copy);
    //Copy assingment operator
    Fixed operator=(const Fixed& as_op);
    //Destructor
    ~Fixed(void);

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
};

#endif