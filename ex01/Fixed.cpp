/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:47:10 by marco             #+#    #+#             */
/*   Updated: 2025/10/21 14:32:55 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(Fixed const &fixed)
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
    std::cout << "Copy assignment operator called" << std::endl;
    _value = fixed.getRawBits();
    return *this;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = value << this->_fractionalBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constuctor called" << std::endl;
    this->_value = roundf(value * (1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
    return ((int)(this->_value >> this->_fractionalBits));
}

float Fixed::toFloat(void) const
{
    return ((float)(this->_value / (float)(1 << this->_fractionalBits)));
}

std::ostream &operator<<(std::ostream &os, const Fixed &copy)
{
    os << copy.toFloat();
    return (os);
}