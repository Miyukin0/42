/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:59:17 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/18 16:05:37 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
/*
int		main(void)
{
	int a, *b, **c, ***d, ****e, *****f, ******g, *******h, ********i, *********j;


	j = &i;
	i = &h;
	h = &g;
	g = &f;
	f = &e;
	e = &d;
	d = &c;
	c = &b;
	b = &a;

	ft_ultimate_ft(j);
	if (a == 42)
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "FAIL\n", 5);
	}
}
*/
