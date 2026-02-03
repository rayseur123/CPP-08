/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:09:13 by njooris           #+#    #+#             */
/*   Updated: 2026/02/02 13:03:59 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include <algorithm>
#include <iostream>
#include <exception>
#include <stdexcept>

#include "easyFind.hpp"

template<typename T>
typename T::iterator	easyfind(T& container, int toFind)
{
	typename T::iterator buff;
	
	buff = std::find(container.begin(), container.end(), toFind);
	if (buff == container.end())
	{
		throw (std::out_of_range("Value not found"));
	}
	return (buff);
}

#endif