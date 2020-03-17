/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 12:59:47 by okate             #+#    #+#             */
/*   Updated: 2020/03/03 21:43:01 by okate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
          if (nb < -2147483647)
         {
            ft_putchar('-');
            ft_putchar('2');
            ft_putnbr(147483648);
         }
		ft_putchar('-');
          nb = nb * -1;
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
}
