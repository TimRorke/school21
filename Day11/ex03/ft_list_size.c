/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okate <okate@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 23:26:16 by okate             #+#    #+#             */
/*   Updated: 2020/03/11 23:31:56 by okate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	int		i;

	i = 0;
	if (begin_list == NULL)
		return (0);
	else
	{
		while (begin_list != NULL)
		{
			i++;
			begin_list = begin_list->next;
		}
	}
	return (i);
}
