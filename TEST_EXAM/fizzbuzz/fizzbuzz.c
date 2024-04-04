/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:19:31 by lquemper          #+#    #+#             */
/*   Updated: 2024/04/04 15:06:52 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char nb)
{
	write (1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	fizzbuzz(int nb)
{
	while (nb <= 100)
	{
		if (nb % 3 == 0)
			write (1, "fizz", 5);
		if (nb % 5 == 0)
			write (1, "buzz", 5);
		if (nb % 3 != 0 && nb % 5 != 0)
			ft_putnbr(nb);
		write (1, "\n", 1);
		nb++;
	}
}

int	main()
{
	int	nb;

	nb = 1;
	fizzbuzz(nb);
	return (0);
}
