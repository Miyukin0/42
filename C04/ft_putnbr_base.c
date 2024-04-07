/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:43:28 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/28 15:31:41 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check(char *base)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (base[i])
	{
		count = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[count])
		{
			if (base[i] == base[count])
				return (0);
			count++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		ft_putchar(nb + '0');
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	destsize;

	ft_check(base);
	destsize = ft_strlen(base);
	if (&ft_check == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	ft_putnbr / destsize;
	return ;
}

int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}
