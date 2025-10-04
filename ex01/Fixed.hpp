/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:40:35 by marco             #+#    #+#             */
/*   Updated: 2025/10/01 13:59:52 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

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
        Fixed(const int n);
        Fixed(const float n);
        float toFloat(void) const;
        int toInt(void) const;
        friend std::ostream &operator<<(std::ostream &os, const Fixed &copy);
        
};

#endif