/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 13:21:53 by vmoreau           #+#    #+#             */
/*   Updated: 2021/10/19 18:52:16 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_HPP
#define MAP_HPP

#include "../Utils/utils.hpp"
#include <map>

namespace ft
{
	template < class Key, class T, class Compare = std::less<Key>, class Alloc = std::allocator< ft::pair<const Key, T> > >
		class map
		{
			public:
			// Types //
				typedef Key													key_type;
				typedef T													mapped_type;
				typedef ft::pair<const Key, T>								value_type;
				typedef Compare												key_compare;
				// typedef std::less<value_type>								value_compare;
				typedef Alloc												allocator_type;

				typedef typename allocator_type::reference					reference;
				typedef typename allocator_type::const_reference			const_reference;
				typedef typename allocator_type::pointer					pointer;
				typedef typename allocator_type::const_pointer				const_pointer;
				typedef std::ptrdiff_t										difference_type;
				typedef size_t												size_type;

				typedef typename std::map<Key, T>::iterator					iterator;
				typedef typename std::map<Key, T>::const_iterator			const_iterator;
				typedef typename std::map<Key, T>::reverse_iterator			reverse_iterator;
				typedef typename std::map<Key, T>::const_reverse_iterator	const_reverse_iterator;

			private:
				struct	Node
				{
					Node*			left;
					Node*			right;
					value_type		value;
				};
				Node			*_tree;
				size_type		_size;
				allocator_type	_alloc;
		};
}
#endif
