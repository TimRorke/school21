/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 22:42:39 by okate             #+#    #+#             */
/*   Updated: 2020/02/27 22:42:44 by okate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_ft(int *nbr)
{
   *nbr = 42;
}

int      main()
{
    int a;
    int *nbr;

    nbr = &a;
    ft_ft();
    write(1, &a, 1);

}