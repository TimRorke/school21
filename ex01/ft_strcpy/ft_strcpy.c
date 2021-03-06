/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okate <okate@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 22:38:53 by okate             #+#    #+#             */
/*   Updated: 2020/03/16 22:58:54 by okate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] ='\0';
	return (s1);
}
int main()
{
	char s1[] = "sdfsdfs";
	char s2[] = "hello";
	printf("%s\n", ft_strcpy(s1, s2));
	return (0);
}
