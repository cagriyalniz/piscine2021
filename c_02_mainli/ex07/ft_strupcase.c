/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:10:51 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/04 16:39:16 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		if((str[index] >= 'a') && (str[index] <= 'z'))
		{
			str[index] -= 32;
		}
		index++;
	}
	return(str);
}

int	main()
{
	char s1[] = "asd";
	char s2[] = "AsA";
	char s3[] = "aSa";
	char s4[] = "a1sD asS";
	char s5[] = "AA";

	char *p1, *p2, *p3, *p4, *p5;

	p1 = s1;
	p2 = s2;
	p3 = s3;
	p4 = s4;
	p5 = s5;

	printf("%s \n", ft_strupcase(p1));
	printf("%s \n", ft_strupcase(p2));
	printf("%s \n", ft_strupcase(p3));
	printf("%s \n", ft_strupcase(p4));
	printf("%s \n", ft_strupcase(p5));
}
