/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 10:25:45 by ygolshan          #+#    #+#             */
/*   Updated: 2024/02/18 10:25:49 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b)
{
	T buff;

	buff = a;
	a = b;
	b = buff;
}

template <typename T>
T min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif