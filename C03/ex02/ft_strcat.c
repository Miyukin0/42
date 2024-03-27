/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:48:27 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/26 12:02:19 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destsize;

	i = 0;
	destsize = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[destsize + i] = src[i];
		i++;
	}
	dest[destsize + i] = '\0';
	return (dest);
}
/*
#include<stdio.h>
int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%s\n", ft_strcat(av[1], av[2]));
	return (0);
}*/
