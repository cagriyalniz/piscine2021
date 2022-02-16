/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:46:43 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/09 11:04:41 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //SİLİNECEK

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while((s1[index] == s2[index]) && (s1[index] != '\0') && (s2[index] != '\0'))
		index++;
	return(s1[index] - s2[index]);
}
//MAİN SİLİNECEK
int	main()
{
	char s1[] = "a";

							char s2[] = "aa";




	char s3[] = "a";

	char d1[] = "a";

							char d2[] = "ab";



	char d3[] = "aa";


	printf("s1 -> d1: %d \n", ft_strcmp(s1, d1));
	printf("s2 -> d2: %d \n", ft_strcmp(s2, d2));
	printf("s3 -> d3: %d \n", ft_strcmp(s3, d3));

//The C library function int strcmp(const char *str1, const char *str2) 
//compares the string pointed to, by str1 to the string pointed to by str2.	
}
