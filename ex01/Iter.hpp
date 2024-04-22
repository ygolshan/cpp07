/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 10:25:24 by ygolshan          #+#    #+#             */
/*   Updated: 2024/02/18 11:38:30 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>


template<typename T>
void	display(T& value)
{
	std::cout << " value : " << value << std::endl;
}

template<typename T>
void	iter(T* ptr, int len, void (*f)(T&))
{
	int	i;

	i = -1;
	while (++i < len)
		f(ptr[i]);
}

#endif