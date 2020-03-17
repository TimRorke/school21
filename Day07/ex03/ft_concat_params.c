/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 22:08:21 by okate             #+#    #+#             */
/*   Updated: 2020/03/05 22:53:17 by okate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	char	a;
	int		b;
	char	*str;

	i = 0;
	a = 1;
	b = 1;
	while (b < argc)
	{
		while (argv[b][i] != '\0')
		{
			if (!(str = (char*)malloc(sizeof(*str)) * (a)))
				return (0);
			ft_putchar(argv[b][i]);
			i++;
			a++;
		}
		ft_putchar('\n');
		b++;
		i = 0;
	}
	return (str);
}
int		main(int argc, char **argv)
{
	char *rez;
	rez = ft_concat_params(argc, argv);
	return (0);
}
