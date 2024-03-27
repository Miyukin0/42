/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:01:56 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/14 19:29:57 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

/*	#include<stdio.h>	*/

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	reste;

	div = *a / *b;
	reste = *a % *b;
	*a = div;
	*b = reste;
}
/*
int main()
{
	int	div;
	int	reste;
	int	*a;
	int	*b;
	int	n;
	int	m;
	n = 10;
	m = 5;
	a = &n;
	b = &m;
	ft_ultimate_div_mod(a, b);
	printf("%d %d", n, m);
}
*/
