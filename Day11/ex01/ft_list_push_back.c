/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okate <okate@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 19:30:35 by okate             #+#    #+#             */
/*   Updated: 2020/03/11 23:00:53 by okate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*back_elem;
	t_list	*pointer;

	pointer = *begin_list;
	back_elem = ft_create_elem(data);
	if (pointer == NULL)
		pointer = back_elem;
	else
	{
		while (pointer->next != NULL)
			pointer = pointer->next;
		pointer->next = back_elem;
	}
}
