/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:43:05 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/04 17:59:09 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //SİLİNECEK

char	*ft_strcapitalize(char *str)
{
	int index;
	int i;

	i = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if (i == 0 && (str[index] >= 'a' && str[index] <= 'z'))
		{
			str[index] -= 32;
			i++;
		}
		else if (i > 0 && (str[index] >= 'A' && str[index] <= 'Z'))
		{
			str[index] += 32;
		}
		else if( (str[index] < '0') || (str[index] > '9' && str[index] < 'A') || (str[index] > 'Z' && str[index] < 'a') || (str[index] > 'z'))
		{
			i = 0;
		}
		else
			i++;
		index++;
	}
	return(str);
}

int	main()
{
	char s1[] = "hE, world!my Name-is";
	char *p1;

	p1 = s1;
	printf("%s", ft_strcapitalize(p1));
}
