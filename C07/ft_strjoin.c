/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:40:24 by lquemper          #+#    #+#             */
/*   Updated: 2024/04/04 12:55:33 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	tot_len(int size, char **strs, char *sep)
{
	int	len;
	int	n;

	n = 0;
	len = 0;
	while (n < size)
	{
		len += ft_strlen(strs[n]);
		n++;
	}
	len += (size - 1) * ft_strlen(sep);
	return (len);
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = tot_len(size, strs, sep);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	str[0] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*
#include<stdio.h>
int	main()
{
	char *strs[1] = {""};
	char *sep = " ";
	char *ptr = ft_strjoin(1, strs, sep);
	free(ptr);
}
*/
