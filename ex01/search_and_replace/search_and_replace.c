/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okate <okate@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 15:31:11 by okate             #+#    #+#             */
/*   Updated: 2020/03/15 16:14:53 by okate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}
int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 4 )
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[2][i] && argv[3][i])
	{
		if (i > 1)
		{
			write(1, "\n", 1);
			return (0);
		}
		i++;
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == argv[2][0])
		{
			argv[1][i] = argv[3][0];
		}
		putchar(argv[1][i]);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
