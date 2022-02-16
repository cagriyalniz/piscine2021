/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:15:26 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/09 11:08:36 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int index;

	index = 0;
	while((s1[index] != '\0' || s2[index] != '\0') && index < n)
	{
		if(s1[index] > s2[index])
		{	return (1);
		}
		else if (s1 [index] < s2[index])
		{	
			return(-1);
		}
		index++;
	}
	return (0);
}

int main()
{

							char s1[] = "aabaa";

	char s2[] = "abcd";

	char s3[] = "aaa";


								char d1[] = "aaaaa";

	char d2[] = "acde";

	char d3[] = "aaaa";


	printf("s1 -> d1: %d \n", ft_strncmp(s1, d1, 2));

	printf("s2 -> d2: %d \n", ft_strncmp(s2, d2, 4));

	printf("s3 -> d3: %d \n", ft_strncmp(s3, d3, 3));

}
