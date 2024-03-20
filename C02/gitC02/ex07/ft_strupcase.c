/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:31:44 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/19 18:41:24 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (str);
}
/*
void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}
int		main()
{
	char c[] = "AbCdEfG-YzklPl;";
	ft_putstr("ABCDEFG-YZ:");
	ft_putstr(ft_strupcase(c));
	ft_putstr(" ");
	ft_putstr(c);
}
*/
