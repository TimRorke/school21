/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okate <okate@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 23:40:02 by okate             #+#    #+#             */
/*   Updated: 2020/03/11 23:43:26 by okate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_last(t_list *begin_list)
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
	return (begin_list);
}
