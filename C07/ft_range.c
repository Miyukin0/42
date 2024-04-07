/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:20:04 by lquemper          #+#    #+#             */
/*   Updated: 2024/04/02 13:38:39 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	tmp;
	int	j;

	if (min >= max)
		return (NULL);
	tmp = (unsigned int)max - (unsigned int)min;
	tab = (int *)malloc(tmp * sizeof(int));
	if (tab == NULL)
		return (NULL);
	i = 0;
	j = min;
	while (j < max)
	{
		tab[i] = j;
		i++;
		j++;
	}
	return (tab);
}
/*
#include<stdio.h>
int	main(void)
{
	int	*tab;
	int		i;
	int		min;
	int		max;
	
	i = 0;
	min = 5;
	max = 10;
	tab = ft_range(min, max);
	while ((unsigned int)i < ((unsigned int)max - (unsigned int)min))
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
