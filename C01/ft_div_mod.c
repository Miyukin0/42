/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:20:59 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/19 15:17:49 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

// #include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	div = a / b;
	mod = a % b;
}
/*
int main(void)
{
	int	a;
	int	b;
	int	n;
	int	m;
	int	*div;
	int	*mod;
	a = 10;
	b = 5;
	div = &n;
	mod = &m;
	ft_div_mod(a, b, div, mod );
	printf("%d %d", *div, *mod);
}
*/
