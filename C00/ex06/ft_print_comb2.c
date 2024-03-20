/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:11:28 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/15 14:49:18 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char c);
void	ft_scan(int calc);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_scan(int calc)
{
	int	div;
	int	mod;

	div = calc / 10;
	mod = calc % 10;
	ft_putchar(div + '0');
	ft_putchar(mod + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_scan(a);
			write(1, " ", 1);
			ft_scan(b);
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*
int main(void)
{
	ft_print_comb2();
}
*/
