/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:47:10 by marco             #+#    #+#             */
/*   Updated: 2025/10/07 12:45:25 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    //std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(Fixed const &fixed)
{
    //std::cout << "Copy constructor called" << std::endl;
    this->_value = fixed.getRawBits();
}

Fixed::~Fixed()
{
    //std::cout << "Default destructor called" << std::endl;
}

int Fixed::getRawBits() const 
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const rawBits)
{
    //std::cout << "setRawBits member function called" << std::endl;
    this->_value = rawBits;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    //std::cout << "Asignation operator called" << std::endl;
    _value = fixed.getRawBits();
    return *this;
}

Fixed::Fixed(const int value)
{
    //std::cout << "Int constructor called" << std::endl;
    this->_value = value << this->_fractionalBits;
}

Fixed::Fixed(const float value)
{
    //std::cout << "Float constuctor called" << std::endl;
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

bool Fixed::operator!=(const Fixed &fixed) const
{
    return (this->toFloat() != fixed.toFloat());
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return (this->toFloat() == fixed.toFloat());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return (this->toFloat() <= fixed.toFloat());
}

bool Fixed::operator<(const Fixed &fixed) const 
{
    return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator>(const Fixed &fixed) const
{
    return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return (this->toFloat() >= fixed.toFloat());
}


Fixed Fixed::operator+(const Fixed &fixed) const
{
    return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-(const Fixed &fixed) const 
{
    return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*(const Fixed &fixed) const 
{
    return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed &fixed) const 
{
    return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed Fixed::operator++(int)
{
    Fixed aux(*this);
    operator++();
    return (aux);
}

Fixed &Fixed::operator++()
{
    this->_value++;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed aux(*this);
    operator--();
    return (*this);
}

Fixed &Fixed::operator--()
{
    this->_value--;
    return (*this);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}
        