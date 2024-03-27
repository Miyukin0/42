/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:45:40 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/20 15:22:43 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcapitalize(char *str);

char	*ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (str);
}
/*
char	ft_action(char *str)
{
	while (*str >= 'a' && *str <= 'z')
		str++;
	while (!(*str >= 'a' && *str <= 'z'))
		str++;
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - 32;
		if ((*str - 1) >= 0 && (*str -1) <= 9)
			*str = *str + 32;
	}
	str++;
	if (*str == '\0')
		return (*str);
	ft_action(str);
	return (*str);
}*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || (!(str[i - 1] >= 'a' && str[i -1] <= 'z')
					&& !(str[i - 1] >= '0' && str[i - 1] <= '9')
					&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
/*
void	ft_putstr(char *str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int	main()
{
	char c[] = "salut, coMMent tu vAs ? 42mOts quArAnTe-dEux; cinQuante+et+un\n";
	ft_putstr("Salut, Comment Tu Vas ? 42mots Quarante-Deux; 
			Cinquante+Et+Un:\n");
	ft_putstr(ft_strcapitalize(c));
	ft_putstr("");
	ft_putstr(c);
}
*/
