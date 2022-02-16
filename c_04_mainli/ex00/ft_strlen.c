/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:47:57 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/06 16:52:22 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //SİLİNECEK

int	ft_strlen(char *str)
{
	int index;
	int	krktrsys;

	krktrsys = 0;
	index = 0;
	while (str[index] != '\0')
	{
		krktrsys++;
		index++;
	}
	return(krktrsys);
}

//MAİN SİLİNECEK
int	main()
{
	char s1[] = "cagri yalniz";
	printf("%d", ft_strlen(s1));
}
