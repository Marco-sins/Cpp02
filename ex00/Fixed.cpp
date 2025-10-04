/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:17:46 by marco             #+#    #+#             */
/*   Updated: 2025/10/01 13:27:31 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_value = fixed.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Default destructor called" << std::endl;
}

int Fixed::getRawBits() const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const rawBits)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = rawBits;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Asignation operator called" << std::endl;
    _value = fixed.getRawBits();
    return *this;
}