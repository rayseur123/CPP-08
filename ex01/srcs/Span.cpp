/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:52:28 by njooris           #+#    #+#             */
/*   Updated: 2026/02/03 12:21:36 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <stdexcept>
#include <algorithm>

void	Span::addNumber(int number)
{
	if (static_cast<int>(table_.size()) >= sizeMax_)
		throw (std::out_of_range("The span is full"));
	
	std::vector<int>::iterator it = std::lower_bound(table_.begin(), table_.end(), number);
	table_.insert(it, number);
}

void	Span::addRangeNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	table_.insert(table_.end(), begin, end);
	std::sort(table_.begin(), table_.end());
}

unsigned int	Span::shortestSpan() const
{
	if (table_.size() <= 1)
		throw (std::length_error("The span is empty"));

	int span = longestSpan();
	for (size_t i = 0; i + 1 < table_.size(); i++)
	{
		if (table_[i + 1] - table_[i] < span)
			span = table_[i + 1] - table_[i];
	}
	return (span);
}

unsigned int	Span::longestSpan() const
{
	if (table_.size() <= 1)
		throw (std::length_error("The span is empty"));
	
	return (*(--table_.end()) - *table_.begin());
}
	
Span::Span()
: sizeMax_(0)
{}

Span::Span(int size)
: sizeMax_(size)
{}

Span::Span(Span const& toCopy)
: sizeMax_(toCopy.sizeMax_), table_(toCopy.table_)
{}

Span::~Span()
{}

Span const&	Span::operator=(Span const& toCopy)
{
	if (this == &toCopy)
	{
		return (*this);
	}
	sizeMax_ = toCopy.sizeMax_;
	table_ = toCopy.table_;
	return (*this);
}