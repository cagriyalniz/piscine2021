/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 18:11:01 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/13 13:40:52 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index1;
	unsigned int	index2;

	index1 = 0;
	index2 = 0;
	while (dest[index1] != '\0')
	{
		index1++;
	}
	while (index2 < nb && src[index2] != '\0')
	{
		dest[index1] = src[index2];
		index2++;
		index1++;
	}
	dest[index1] = '\0';
	return (dest);
}

int	main()
{

	char s1[] = "aaaa";




	char d1[] = "bbbb";




	printf("s1 -> d1: %s \n", ft_strncat(d1, s1, 1));

	printf("s2 -> d2: %s \n", ft_strncat(d2, s2, 1));

}
