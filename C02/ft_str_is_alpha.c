/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:27:32 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/19 15:40:13 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
// #include<stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			if (str[i] == '\0')
				return (1);
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*
int		main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_alpha("")?"OK":"Fail",
			ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXZabcdefg
			hijklmnopqrstuvwxyz")?"OK":"Fail",
			!ft_str_is_alpha("1")?"OK":"Fail",
			!ft_str_is_alpha(" ")?"OK":"Fail",
			!ft_str_is_alpha("\\")?"OK":"Fail",
			!ft_str_is_alpha("\n")?"OK":"Fail");
}
*/
