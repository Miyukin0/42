/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:14:07 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/26 14:18:33 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (i != 1)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
/*
#include<stdio.h>
#include<stdlib.h>
int	main()
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}*/
