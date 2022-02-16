/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:49:21 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/09 11:12:57 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //SİLİNECEK

char *ft_strcat(char *dest, char *src)
{
	int	index1;
	int	index2;

	index1 = 0;
	while (dest[index1] != '\0')
	{
		index1++;
	}
	index2 = 0;
	while (src[index2] != '\0')
	{
		dest[index1] = src[index2];
		index1++;
		index2++;
	}
	dest[index1] = '\0';
	return (dest);
}

int	main()
{
	
							char s1[] = "aaaa";

	char s2[] = "aaaa";

	char s3[] = "aaa";


							char d1[] = "bbbb";

	char d2[] = "bbb";

	char d3[] = "bbbb";

	printf("s1 -> d1: %s \n", ft_strcat(d1, s1));

	printf("s2 -> d2: %s \n", ft_strcat(d2, s2));

	printf("s3 -> d3: %s \n", ft_strcat(d3, s3));
}
