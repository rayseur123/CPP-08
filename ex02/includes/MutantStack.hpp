/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njooris <njooris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:20:04 by njooris           #+#    #+#             */
/*   Updated: 2026/02/04 17:07:48 by njooris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
template <typename T>
class	MutantStack : public std::stack<T>
{
	private:

	public:
	MutantStack();
	MutantStack(MutantStack const& toCopy);
	~MutantStack();

	MutantStack const&			operator=(MutantStack const& toCopy);

	typedef typename std::stack<T>::container_type::iterator iterator;
	
	iterator	begin();
	iterator	end();
	iterator	rbegin();
	iterator	rend();
};

#include "MutantStack.tpp"

#endif