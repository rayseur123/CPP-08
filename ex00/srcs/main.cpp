/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:11:04 by njooris           #+#    #+#             */
/*   Updated: 2026/01/30 16:29:51 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyFind.hpp"

void	test1()
{
	std::vector<int> vec;

	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}
	std::cout << "result : " << *easyfind(vec, 4) << std::endl;
}

void	test2()
{
	std::vector<int> vec;

	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}
	try
	{
		std::cout << "result : " << *easyfind(vec, 99) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	test1();
	std::cout << std::endl;
	test2();
	return 0;
}