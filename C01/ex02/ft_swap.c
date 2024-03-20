/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:07:49 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/14 19:06:29 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

//	#include<stdio.h>  pour le printf

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
/*
int main()
{
	int	n;
	int	m;
	int	*a;
	int	*b;
	n = 5;
	m = 10;
	a = &n;
	b = &m;
	ft_swap(a, b);
	printf("%d %d", n, m);
}
*/
