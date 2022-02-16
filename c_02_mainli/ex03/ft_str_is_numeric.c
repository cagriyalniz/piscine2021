/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:41:17 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/04 15:09:18 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //SİLİNECEK

int	ft_str_is_numeric(char *str)
{
	int	index;
	
	index = 0;
	while(str[index] != '\0')
	{
		if((str[index] < '0') ||( str[index] > '9'))
			return (0);
		index++;
	
	}
	return(1);
}

int	main()
{
	char str1[] = "";
	char str2[] = "123";
	char str3[] = "12c12";
	char *p1;
	char *p2;
	char *p3;

	p1 = str1;
	p2 = str2;
	p3 = str3;

	printf("%d\n", ft_str_is_numeric(p1));
	printf("%d\n", ft_str_is_numeric(p2));
	printf("%d\n", ft_str_is_numeric(p3));
}
