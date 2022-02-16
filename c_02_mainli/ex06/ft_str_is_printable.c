/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:01:07 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/04 16:09:41 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //SİLİNECEL

int	ft_str_is_printable(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		if((str[index] < 32) || (str[index] > 126))
		{
			return(0);
		}
		index++;
	}
	return(1);
}
// 32 -126
int	main()
{
	char s1[] = "asd";
	char s2[] = "123";
	char s3[] = "+()a";
	char *p1, *p2, *p3;

	p1 = s1;
	p2 = s2;
	p3 = s3;
	printf("%d \n", ft_str_is_printable(p1));
	printf("%d \n", ft_str_is_printable(p2));
	printf("%d \n", ft_str_is_printable(p3));

}
