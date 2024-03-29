/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:41:19 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/26 15:58:34 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
	{
		power--;
		return (nb * ft_recursive_power(nb, power));
	}
	return (nb);
}
/*
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_recursive_power(3, 5));
	return (0);
}*/
