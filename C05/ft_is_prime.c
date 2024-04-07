/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:53:34 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/29 14:45:19 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

/*void	ft_putstr(int *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str, 1);
		i++;
	}
}*/

char	ft_putchar()

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
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2 || (nb % 2 == 0 && nb != 2))
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return(0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_putnbr(ft_is_prime(atoi(argv[1])));
	return (0);
}
