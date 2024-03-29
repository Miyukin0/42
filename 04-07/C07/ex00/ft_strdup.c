/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:34:12 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/28 17:18:38 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *str)
{
	char	*tab;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(str);
	tab = (char *)malloc(size * sizeof(char));
	if (tab == NULL)
		return (0);
	while (str[i])
	{
		tab[i] = str[i];
		i++;
	}
	return (tab);
}
/*
#include<stdio.h>
int	main(int argc, char **argv)
{
	char	*tab;

	if (argc == 2)
	{
		printf("%s\n", tab = ft_strdup(argv[1]));
		free(tab);
	}
	return (0);
}*/
