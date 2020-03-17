/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okate <okate@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 19:32:40 by okate             #+#    #+#             */
/*   Updated: 2020/03/14 17:21:53 by okate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*new_elem;

	new_elem = malloc(sizeof(t_btree));
	if (new_elem)
	{
		new_elem->right = 0;
		new_elem->left = 0;
		new_elem->item = item;
	}
	return (new_elem);
}
