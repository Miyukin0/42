/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquemper <lquemper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:48:01 by lquemper          #+#    #+#             */
/*   Updated: 2024/03/25 14:24:14 by lquemper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		while ((str[i + j] == to_find[j]) && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>
int	main(void)
{
	char s1a[] = "This is OK for now";
	char s2a[] = "OK";
	char s1b[] = "This is OK for now";
	char s2b[] = "OK";
	char s3a[] = "Same";
	char s4a[] = "";
	char s3b[] = "Same";
	char s4b[] = "";
	char s5a[] = "Shorter";
	char s6a[] = "Than";
	char s5b[] = "Shorter";
	char s6b[] = "Than";

	printf("%s:%s\n", ft_strstr(s1a, s2a), strstr(s1b, s2b));
	printf("%s\n", strcmp(s1a, s1b) == 0 
		&& strcmp(s2a, s2b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strstr(s3a, s4a), strstr(s3b, s4b));
	printf("%s\n", strcmp(s3a, s3b) == 0 
		&& strcmp(s4a, s4b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strstr(s5a, s6a), strstr(s5b, s6b));
	printf("%s\n", strcmp(s5a, s5b) == 0 
		&& strcmp(s6a, s6b) == 0 ? "Success" : "Fail");
}
*/
