/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 19:33:57 by okate             #+#    #+#             */
/*   Updated: 2020/03/10 21:43:59 by okate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int	*str;

	i = 0;
	if (!(str = malloc(sizeof(int) * length)))
	{
		return (0);
	}
	while (i < length)
	{
		str[i] = (*f)(tab[i]);
		i++;
	}
	return (str);
}
