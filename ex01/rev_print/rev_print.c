/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okate <okate@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:02:44 by okate             #+#    #+#             */
/*   Updated: 2020/03/15 20:30:00 by okate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(int argc, char **argv)
{
	int i;
	char *str;

	i = 0;
	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		i++;
	}
	while (i != -1)
	{
		ft_putchar(argv[1][i]);
		i--;
	}
	ft_putchar('\n');
	return (0);
}
