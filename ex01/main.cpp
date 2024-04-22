/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 10:28:10 by ygolshan          #+#    #+#             */
/*   Updated: 2024/02/18 11:08:59 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iostream>

template <typename T>
void display(T const &a)
{
	std::cout << a << std::endl;
}

int main(void)
{
	int A[2];
	float B[2];

	A[0] = 1;
	A[1] = -10;
	B[0] = 0.0f;
	B[1] = 5.0f;
	std::cout << "A" << std::endl;
	::iter(A, 2, &display);
	std::cout << "B" << std::endl;
	::iter(B, 2, &display);
	return (0);
}