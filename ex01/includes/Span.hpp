/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:41:05 by njooris           #+#    #+#             */
/*   Updated: 2026/02/03 12:22:53 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class	Span
{
	private:
		int					sizeMax_;
		std::vector<int>	table_;
	public:
		void				addNumber(int number);
		void				addRangeNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int		shortestSpan() const;
		unsigned int		longestSpan() const;
	
		Span();
		Span(int size);
		Span(Span const& toCopy);
		~Span();

		Span const&	operator=(Span const& toCopy);
};

#endif