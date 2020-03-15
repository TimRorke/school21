/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okate <okate@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 17:55:41 by okate             #+#    #+#             */
/*   Updated: 2020/03/15 19:59:14 by okate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}
int main(int argc, char **argv)
{
	int i;
	i = 0;

	if (argc != 2)
	{
		putchar('\n');
		return (0);
	}
	while (argv[1][i])
	{
		while ((argv[1][i] == ' ' || argv[1][i] == '\t') && (argv[1][i]))
			i++;
		while ((argv[1][i] != ' ' && argv[1][i] != '\t') && (argv[1][i]))
		{
			putchar(argv[1][i]);
			i++;
		}
		if (argv[1][i] == ' ' || argv[1][i] == '\t')
			break;
	}
	putchar('\n');
	return(0);
}
