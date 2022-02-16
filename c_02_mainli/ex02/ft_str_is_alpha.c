/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:41:44 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/05 11:28:16 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> // silinecek

int	ft_str_is_alpha(char *str)
{

	int	index;

	index = 0;
	while(str[index] != '\0')
	{
		if(((str[index] < 'A') ||( str[index] > 'Z' )) 
		&& ((str[index] < 'a') ||( str[index] > 'z')))	
			return(0);
		index++;

	}
	return(1);
}
//MAİN SİLİNECEK
int	main()
{
	char str1[] = "";
	char str2[] = "aaa";
	char str3[] = "aa2";
	char *p1;
	char *p2;
	char *p3;

	p1 = str1;
	p2 = str2;
	p3 = str3;
	
	printf("%d\n", ft_str_is_alpha(p1));
	printf("%d\n", ft_str_is_alpha(p2));
	printf("%d\n", ft_str_is_alpha(p3));
}
