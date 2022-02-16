/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:53:15 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/04 18:17:12 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		if((str[index] < 'A' ) || (str[index] > 'Z'))
		{
			return(0);
		}
		index++;
	}
	return(1);
}

int	main()
{
	char s1[] = "";
	char s2[] = "ASD";
	char s3[] = "ADAss";
	char s4[] = "123A";
	char s5[] = "asd";
	char *p1, *p2, *p3, *p4, *p5;

	p1 = s1;
	p2 = s2;
	p3 = s3;
	p4 = s4;
	p5 = s5;	
	printf("%d \n", ft_str_is_uppercase(p1));
	printf("%d \n", ft_str_is_uppercase(p2));
	printf("%d \n", ft_str_is_uppercase(p3));
	printf("%d \n", ft_str_is_uppercase(p4));
	printf("%d \n", ft_str_is_uppercase(p5));
}
