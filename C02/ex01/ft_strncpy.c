/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:28:54 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/19 12:25:13 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
// #include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i <= n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int		main()
{
	int i;
	char dest[] = "Epic fail !!!";
	char src[] = "Success";
	printf("%s\n%s\n%s\n", src, ft_strncpy(dest, src, 8), dest);
	i = 9;
	while (i < 8)
	{
		if (dest[i] != '\0')
		{
			printf("FAIL! Remainder of dst must be filled with `\\0' 
			characters, got %c (\\%x) at pos %d\n", dest[i], dest[i], i);
			return (1);
		}
		i++;
	}
	return (0);
}
*/
