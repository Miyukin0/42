/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:10:29 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/26 10:59:36 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srcsize;
	unsigned int	destsize;

	i = 0;
	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	if (size <= destsize)
		return (srcsize + size);
	while (dest[i] != '\0' && i < size - 1)
	{
		dest[destsize + i] = src[i];
		i++;
	}
	dest[destsize + i] = '\0';
	return (srcsize + destsize);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 4)
		printf("%d\n", ft_strlcat(av[1], av[2], atoi(av[3])));
	return (0);
}*/