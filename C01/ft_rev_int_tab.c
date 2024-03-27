/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:24:55 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/18 15:07:52 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
// #include<stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;

	i = 0;
	if (size < 1)
		return ;
	size = size - 1;
	while (i < size)
	{
		n = tab[i];
		tab[i] = tab[size];
		tab[size] = n;
		i++;
		size--;
	}
}
