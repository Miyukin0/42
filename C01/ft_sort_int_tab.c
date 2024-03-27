/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:46:07 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/18 15:55:12 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
// #include<stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	t = 0;
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			t = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = t;
			i = -1;
		}
		i++;
	}
}
/*
int		main(void)
{
	int tab[5] = {5, 10, 0, 11, 4};
	ft_sort_int_tab(tab, 5);
	printf("Ordre croissant:? ");
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}
*/
