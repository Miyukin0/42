/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 17:45:41 by lquemper          #+#    #+#             */
/*   Updated: 2024/04/04 18:44:50 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	result = 0;
	i = 0;
	sign = 0;
	while ((str[i] >= '\a' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' && sign == 0)
			sign++;
		else
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (sign == 1)
		return (-result);
	else
		return (result);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("my atoi : %d\n", ft_atoi(argv[1]));
		printf("real atoi : %d\n", atoi(argv[1]));
	}
	return (0);
}
