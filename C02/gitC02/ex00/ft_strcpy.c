/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:00:50 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/18 18:21:15 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
// #include<stdio.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int		main()
{
	char dest[] = "Epic fail";
	char src[] = "Success";
	printf("Must all be same (3 lines):\n%s
	\n%s\n%s\n", src, ft_strcpy(dest, src), dest);
	char dest1[] = "";
	char src1[] = "";
	ft_strcpy(dest1, src1);
}
*/
