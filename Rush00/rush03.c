/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:20:30 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/16 16:59:58 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_exeption(int car, int lin)
{
	int	i;

	i = 1;
	if (lin == 1 && car == 1)
		ft_putchar('A');
	if (car == 1 && lin >= 2)
	{
		write (1, "A\n", 2);
		i++;
		while (i != lin - 1)
		{
			write (1, "B\n", 2);
			i++;
		}
		write (1, "A\n", 2);
	}
	if (lin <= 0 || car <= 0)
		write (1, "STOP", 4);
}

void	ft_printline(int car, int l)
{
	int	c;

	c = 1;
	if (car >= 2 && c == 1)
	{
		ft_putchar('A');
		c++;
		if (car >= 2)
		{
			while (c != car)
			{
				ft_putchar('B');
				c++;
			}
		}
			write (1, "C\n", 2);
			l++;
	}	
}

void	rush03(int car, int lin)
{
	int	l;
	int	c;

	l = 1;
	c = 1;	
	ft_exeption(car, lin);
	ft_printline(car, l);
	if (lin > 2)
	{
		while (l != lin - 1)
		{
			ft_putchar('B');
			c++;
			while (c != car)
			{
				write (1, " ", 1);
				c++;
			}
			write (1, "B\n", 2);
			l++;
			c = 1;
		}
	}
	if (lin >= 2)
		ft_printline(car, l);
}

int	main(void)
{	
	rush03(0, 5);
	return(0);
}
