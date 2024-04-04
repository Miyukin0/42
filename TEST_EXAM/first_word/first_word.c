/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:42:44 by lquemper          #+#    #+#             */
/*   Updated: 2024/04/04 17:26:59 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == 9)
		i++;
	while (str[i] && str[i] != ' ' && str[i] != 9)
	{
		ft_putchar(str[i]);
		if (str[i + 1] == ' ' || str[i + 1] == 9)
			str[i + 1] = '\0';
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	else
		write (1, "\n", 1);
	return (0);
}
