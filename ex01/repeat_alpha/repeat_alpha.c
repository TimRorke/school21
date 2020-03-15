/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okate <okate@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 14:27:00 by okate             #+#    #+#             */
/*   Updated: 2020/03/15 15:29:42 by okate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}

int 	check(char c)
{
	int		index;

	index = 0;
	if (c >= 'a' && c <= 'z')
	{
		index = c - 'a' + 1;
		return (index);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		index = c - 'A' + 1;
		return (index);
	}
	else
		index = 1;
	return(index);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		index;

	i = 0;
	j = 1;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	while (argv[j][i] != '\0')
	{
		index = check(argv[1][i]);
		while (index > 0)
		{
			putchar(argv[1][i]);
			index--;
		}
		i++;
	}
	write (1, " ", 1);
	write (1, "\n", 1);
	return (0);
}
