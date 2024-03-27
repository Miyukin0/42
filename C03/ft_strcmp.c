/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:28:43 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/25 10:41:10 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include<stdio.h>
#include<string.h>
int	main(void)
{
	char s1[] = "Test1";
	char s2[] = "OK";
	char s3[] = "Same";
	char s4[] = "Size";
	char s5[] = "Shorter";
	char s6[] = "ThanMyself";

	printf("%d, %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("%d, %d\n", ft_strcmp(s3, s4), strcmp(s3, s4));
	printf("%d, %d\n", ft_strcmp(s5, s6), strcmp(s5, s6));
	printf("%d, %d\n", ft_strcmp(s5, s5), strcmp(s5, s5));
}
*/
