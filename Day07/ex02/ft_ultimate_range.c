/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 19:52:05 by okate             #+#    #+#             */
/*   Updated: 2020/03/05 23:23:44 by okate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*str;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	if (!(str = (int*)malloc(sizeof(*str)) + (max - min)))
		return (0);
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	**range = *str;
	return (i);
}
