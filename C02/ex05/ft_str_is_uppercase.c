/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:26:56 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/19 18:22:20 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
// #include<stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
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
		ft_str_is_uppercase("")?"OK":"Fail",
		ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXZ")?"OK":"Fail",
		!ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXZabcdefghijklmno
			pqrstuvwxyz")?"OK":"Fail",
		!ft_str_is_uppercase("0123456789")?"OK":"Fail",
		!ft_str_is_uppercase(" ")?"OK":"Fail",
		!ft_str_is_uppercase("\\")?"OK":"Fail",
		!ft_str_is_uppercase("\n")?"OK":"Fail");
}
*/
