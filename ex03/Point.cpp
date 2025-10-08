/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:33:10 by marco             #+#    #+#             */
/*   Updated: 2025/10/07 12:13:18 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() {}

Point::Point(Fixed x, Fixed y) : x(x), y(y) {}

Point::~Point() {}

Point::Point(Point &point) : x(point.x), y(point.y) {}

Fixed const Point::getX() const 
{
    return (this->x);
}

Fixed const Point::getY() const 
{
    return (this->y);
}