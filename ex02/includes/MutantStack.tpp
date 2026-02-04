/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:52:28 by njooris           #+#    #+#             */
/*   Updated: 2026/02/04 17:08:11 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <exception>
#include <stdexcept>
#include <algorithm>

template <typename T>
MutantStack<T>::MutantStack(){}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const& toCopy)
{
	(void)toCopy;
}

template <typename T>
MutantStack<T>::~MutantStack(){}

template <typename T>
MutantStack<T> const&	MutantStack<T>::operator=(MutantStack const& toCopy)
{
	(void)toCopy;
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::rend()
{
	return (this->c.rend());
}