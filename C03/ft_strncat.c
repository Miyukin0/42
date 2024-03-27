/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:15:14 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/25 10:37:35 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
// #include<stdio.h>
// #include<string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	s;

	s = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (s < nb && src[s] != '\0')
	{
		dest[i] = src[s];
		i++;
		s++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char s1a[10] = "Test1";
	char s2a[] = "OK";
	char s1b[10] = "Test1";
	char s2b[] = "OK";
	char s3a[10] = "Same";
	char s4a[10] = "Size";
	char s3b[10] = "Same";
	char s4b[10] = "Size";
	char s5a[20] = "Shorter";
	char s6a[] = "ThanMyself";
	char s5b[20] = "Shorter";
	char s6b[] = "ThanMyself";

	printf("%s:%s\n", ft_strncat(s1a, s2a, 5), strncat(s1b, s2b, 5));
	printf("%s\n", strcmp(s1a, s1b) == 0 
		&& strcmp(s2a, s2b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strncat(s3a, s4a, 10), strncat(s3b, s4b, 10));
	printf("%s\n", strcmp(s3a, s3b) == 0 
		&& strcmp(s4a, s4b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strncat(s5a, s6a, 0), strncat(s5b, s6b, 0));
	printf("%s\n", strcmp(s5a, s5b) == 0 
		&& strcmp(s6a, s6b) == 0 ? "Success" : "Fail");
}
*/
