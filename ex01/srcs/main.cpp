/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:11:04 by njooris           #+#    #+#             */
/*   Updated: 2026/02/03 12:50:40 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

void	testSubject()
{
	std::cout << "Test 1 :" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;
}

void	testThrow()
{
	std::cout << "Test 2 :" << std::endl;
	try{
		Span sp = Span(1);
		sp.addNumber(6);
		sp.addNumber(9);
	}catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void	testAddRangeNumber()
{
	std::cout << "Test 3 :" << std::endl;
	try{
		std::vector<int> v;
		v.push_back(1);
		v.push_back(3);
		v.push_back(8);
		v.push_back(42);
		Span sp = Span(4);
		sp.addRangeNumber(v.begin(), v.end());
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void	testBadOrder()
{
	std::cout << "Test 4 :" << std::endl;
	try{
		std::vector<int> v;
		v.push_back(3);
		v.push_back(1);
		v.push_back(42);
		v.push_back(8);
		Span sp = Span(4);
		sp.addRangeNumber(v.begin(), v.end());
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void	testBigSize()
{
	std::cout << "Test 5 :" << std::endl;
	try{
		std::vector<int> v;
		for (int i = 0; i < 10000; i++)
		{
			v.push_back(i);
		}
		Span sp = Span(10000);
		sp.addRangeNumber(v.begin(), v.end());
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

int main()
{
	testSubject();
	testThrow();
	testAddRangeNumber();
	testBadOrder();
	testBigSize();
	return 0;
}