/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okate <okate@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:24 by okate             #+#    #+#             */
/*   Updated: 2020/03/15 20:44:00 by okate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (av[1][i])
	{
		if ((av[1][i] >= 'a' && av[1][i] <= 'y') || (av[1][i] >= 'A' && av[1][i] <= 'Y'))
		av[1][i] += 1;
		else if (av[1][i] == 'z' || av[1][i] == 'Z')
		av[1][i] -= 25;
		ft_putchar(av[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
