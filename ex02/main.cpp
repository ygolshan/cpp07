/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 10:30:05 by ygolshan          #+#    #+#             */
/*   Updated: 2024/02/18 11:32:52 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
	Array<char>	test(4);
	std::cout << test.size() << std::endl;
	try
	{
		for(int i = 0; i < 4; i++)
			test[i] = i + 68;
		for(int i = 0; i < 8; i++)
			std::cout << test[i] << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (1);
}