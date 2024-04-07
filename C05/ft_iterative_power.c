/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:05:35 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/26 15:40:29 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		nb = nb * result;
		power--;
	}
	return (nb);
}
/*
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_power(3, 5));
	return (0);
}*/
