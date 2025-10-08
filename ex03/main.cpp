/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:45:39 by marco             #+#    #+#             */
/*   Updated: 2025/10/08 10:24:05 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
	bool result;

	// IF POINT IS INSIDE

	Point x(0, 0);
	Point y(3, 0);
	Point z(2, 3);
	Point pt(2, 1);

	result = bsp(x, y, z, pt);
	std::cout << (result ? "In" : "Out") << std::endl;

	// IF POINT IS OUTSIDE

	Point a(0, 0);
	Point b(3, 0);
	Point c(2, 3);
	Point pt2(4, 4);

	result = bsp(a, b, c, pt2);
	std::cout << (result ? "In" : "Out") << std::endl;
}