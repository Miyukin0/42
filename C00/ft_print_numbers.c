/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:14:09 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/13 16:35:22 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int	i;

	i = 48;
	while (i < 58)
	{
		write(1, &i, 1);
		i++;
	}
}
/*
int main()
{
	ft_print_numbers();
}
*/
