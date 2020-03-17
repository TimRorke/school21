/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:54:37 by okate             #+#    #+#             */
/*   Updated: 2020/03/04 22:28:54 by okate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (b < argc)
	{
		while (argv[b][a] != '\0')
		{
			ft_putchar(argv[b][a]);
			a++;
		}
		ft_putchar('\n');
		b++;
		a = 0;
	}
	return (0);
}
