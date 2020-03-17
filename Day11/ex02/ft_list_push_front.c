/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okate <okate@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 23:07:08 by okate             #+#    #+#             */
/*   Updated: 2020/03/11 23:23:51 by okate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*front_elem;
	t_list	*pointer;

	front_elem = ft_create_elem(data);
	pointer = *begin_list;
	if (pointer == NULL)
		pointer = front_elem;
	else
	{
		front_elem->next = pointer;
		pointer = front_elem;
	}
}
