/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:19:59 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/16 12:30:40 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>//SİLİNECEK
#include <stdio.h>//SİLİNECEK

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;
	
	i = 0;
	k = 0;
	if (size == 0)
		return (malloc(sizeof(char)));
	str = malloc(sizeof(strs)); 
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k] = strs[i][j];
			k++;
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{	
			str[k] = sep[j];
			j++;
			k++;
		}	
		i++;
	}
	str[k] = '\0';
	return (str);
}

//MAİN SİLİNECEK
int	main()
{
char *text[10];
	text[0] = "cagri";
	text[1] = "y";
	text[2] = "ecole";
	text[3] = "42";
	text[4] = "koca";
	text[5] = "e";
	text[6] = "li";
	text[7] = "\' - \'";
	text[8] = "...";
	text[9] = "10";
	printf("%s\n", ft_strjoin(10, text, " - "));
}
