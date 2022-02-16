/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 19:00:21 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/09 11:21:13 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>//SİLİNECEK

char	*ft_strstr(char *str, char *to_find)
{
	int index1;
	int index2;

	index1 = 0;
	index2 = 0;
	if (to_find[index2] == '\0')
		return (str);
	while (str[index1] != '\0')
	{
		while (str[index1 + index2] == to_find[index2] && str[index1 + index2] != '\0')
		{
			index2++;
		}
		if (to_find[index2] == '\0')
		{
			return (str + index1);
		}
		index1++;
		index2 = 0;
	}
	return (0);
}
//MAİN SİLİNECEK
int main()
{

	char s1[] = "cagri yalniz ecole 42";
	char f1[] = "ecole";
	char f2[] = "yalniz";
	char f3[] = "c";
	char f4[] = "";

	printf("%s \n", ft_strstr(s1, f1));
	printf("%s \n", ft_strstr(s1, f2));	
	printf("%s \n", ft_strstr(s1, f4));
}
