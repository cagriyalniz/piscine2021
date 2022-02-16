/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:28:17 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/04 16:40:08 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //SİLİNECEK

char	*ft_strlowcase(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		if((str[index] >= 'A') && (str[index] <= 'Z'))
		{
			str[index] += 32;
		}
		index++;
	}
	return(str);
}
//SİLİNECEK
int	main()
{
	char s1[] = "asd";
	char s2[] = "aAa";
	char s3[] = "aA1s";
	char s4[] = "asdD Add";
	char s5[] = "AsD 1Da";
	char *p1, *p2, *p3, *p4, *p5;

	p1 = s1;
	p2 = s2;
	p3 = s3;
	p4 = s4;
	p5 = s5;
	printf("%s \n", ft_strlowcase(p1));
	printf("%s \n", ft_strlowcase(p2));
	printf("%s \n", ft_strlowcase(p3));
	printf("%s \n", ft_strlowcase(p4));
	printf("%s \n", ft_strlowcase(p5));
}
