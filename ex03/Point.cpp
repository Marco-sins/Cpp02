/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:33:10 by marco             #+#    #+#             */
/*   Updated: 2025/11/01 19:43:26 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() 
{
    
}

Point::Point(Fixed x, Fixed y) : x(x), y(y) 
{
    
}

Point::~Point() 
{
    
}

Point::Point(Point &point) : x(point.x), y(point.y) 
{
    
}

Fixed const Point::getX() const 
{
    return (this->x);
}

Fixed const Point::getY() const 
{
    return (this->y);
}

Point &Point::operator=(const Point &point)
{
    (void)point;
    return *this;    
}