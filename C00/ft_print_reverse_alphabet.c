/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:59:38 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/13 16:35:32 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 122;
	while (i > 96)
	{
		write (1, &i, 1);
		i--;
	}
}
/*
int main()
{
	ft_print_reverse_alphabet();
}
*/
