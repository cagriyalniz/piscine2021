/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 19:30:17 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/06 16:21:55 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //SİLİNECEK

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return(index);
}
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{

	unsigned int	index1;
	unsigned int	index2;
	unsigned int	dlen;
	unsigned int	slen;

	index1 = 0;
	index2 = 0;
	while (dest[index1] != '\0')
	{
		index1++;
	}
	dlen = index1;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[index2] != '\0' && index1 < size - dlen -1)
	{
		dest[dlen] = src [index1];
		index1++;
		dlen++;
	}
	dest[dlen] = '\0';
	return (dlen + slen);
}


//MAİN SİLİNECEK
int	main()
{

	char s1[] = "aa34567890a";
	char d1[] = "bb";

	printf("%d \n", ft_strlcat(d1, s1, 16));
	printf("%s \n", d1);
}
