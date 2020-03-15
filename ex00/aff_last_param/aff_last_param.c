/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okate <okate@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 20:51:14 by okate             #+#    #+#             */
/*   Updated: 2020/03/15 18:23:38 by okate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc < 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[argc - 1][i])
	{
		putchar(argv[argc - 1][i]);
		i++;
	}
	putchar('\n');
	return (0);
}
