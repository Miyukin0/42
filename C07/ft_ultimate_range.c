/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 10:20:42 by lquemper          #+#    #+#             */
/*   Updated: 2024/04/02 13:38:03 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	tmp;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	tmp = (unsigned int)max - (unsigned int)min;
	*range = (int *)malloc(tmp * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < tmp)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
#include<stdio.h>
int	main(void)
{
	int	*tab[100];
	int		i;
	int		min;
	int		max;

	i = 0;
	min = 5;
	max = 10;
	ft_ultimate_range(tab, min, max);
	while ((unsigned int)i < ((unsigned int)max - (unsigned int)min))
	{
		printf("%d\n", (*tab)[i]);
		i++;
	}
	return (0);
}*/
