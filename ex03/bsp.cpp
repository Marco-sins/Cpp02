/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:35:03 by marco             #+#    #+#             */
/*   Updated: 2025/10/08 10:35:36 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


//|x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2)|


static Fixed abs(Fixed const fixed)
{
    if (fixed < 0)
        return (fixed * -1);
    return (fixed);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed div;
    Fixed abc;
    Fixed pab;
    Fixed pbc;
    Fixed pca;

    div = 0.5f;

    abc = div * abs((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY())));
    pab = div * abs((point.getX() * (a.getY() - b.getY())) + (a.getX() * (b.getY() - point.getY())) + (b.getX() * (point.getY() - a.getY())));
    pbc = div * abs((point.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - point.getY())) + (c.getX() * (point.getY() - b.getY())));
    pca = div * abs((point.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - point.getY())) + (a.getX() * (point.getY() - c.getY())));
    
    //std::cout << abc << std::endl << (pab + pbc + pca) << std::endl;
    if ((pab + pbc + pca) != abc)
        return (false);
    return (true);
}