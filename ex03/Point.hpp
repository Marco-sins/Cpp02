/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:22:34 by marco             #+#    #+#             */
/*   Updated: 2025/10/07 10:33:03 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    
    public:
        Point();
        Point(Fixed x, Fixed y);
        Point(Point &p);
        ~Point();
        Point &operator=(const Point &point);
        const Fixed getX() const;
        const Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif