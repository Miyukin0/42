/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:06:18 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/19 17:22:15 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
// #include<stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			str++;
		else
			return (0);
	}
	return (1);
}
/*
int		main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
		ft_str_is_lowercase("")?"OK":"Fail",
		ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
		!ft_str_is_lowercase("ABCDEFGHIJKLMNOPQRSTUVWXZabcdefgh
		ijklmnopqrstuvwxyz")?"OK":"Fail",
		!ft_str_is_lowercase("0123456789")?"OK":"Fail",
		!ft_str_is_lowercase(" ")?"OK":"Fail",
		!ft_str_is_lowercase("\\")?"OK":"Fail",
		!ft_str_is_lowercase("\n")?"OK":"Fail");
}
*/
