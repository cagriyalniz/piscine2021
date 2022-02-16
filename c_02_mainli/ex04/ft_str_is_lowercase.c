/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:52:18 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/04 15:53:53 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //SİLİNECEK

int	ft_str_is_lowercase(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		if((str[index] < 'a') ||( str[index] > 'z'))
			return(0);
		index++;

	}
	return(1);
}
//SİLİNECEK
int	main()
{
	char s1[] = "";
	char s2[] = "asd";
	char s3[] = "ASD";
	char s4[] = "ASsdd";
	char s5[] = "asd1";

	char *p1, *p2, *p3, *p4, *p5;

	p1 = s1;
	p2 = s2;
	p3 = s3;
	p4 = s4;
	p5 = s5;

	printf("%d \n", ft_str_is_lowercase(p1));
	printf("%d \n", ft_str_is_lowercase(p2));
	printf("%d \n", ft_str_is_lowercase(p3));
	printf("%d \n", ft_str_is_lowercase(p4));
	printf("%d \n", ft_str_is_lowercase(p5));
}
