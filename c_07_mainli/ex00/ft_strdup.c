/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:03:43 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/16 12:13:07 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>//SİLİNECEK

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char *ft_strdup(char *src)
{
	char *dest;
	int	i;

	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if	(dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
//SİLİNECEK
int	main()
{
	char *test;
	char *dup;

	test = "deneme mesajı";
	dup = ft_strdup(test);
	printf("%s\n", dup);
}
