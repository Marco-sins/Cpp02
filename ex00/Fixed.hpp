/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:07:17 by marco             #+#    #+#             */
/*   Updated: 2025/10/01 13:59:18 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed 
{
    private:
        int _value;
        static const int _fractionalBits;
    public:
        Fixed();
        Fixed(Fixed &fixed);
        ~Fixed();   
        int getRawBits() const;
        void setRawBits(int const rawBits);
        Fixed &operator=(const Fixed &fixed);
        
};

#endif