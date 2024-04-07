/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:33:54 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/28 10:39:52 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write (1, "-", 1);
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(nb % 10 + '0');
	}
	return ;
}
/*
int	main(int arc, char **arv)
{
	if (arc == 2)
		ft_putnbr(&arv[1][0]);
	return (0);
}
*/
