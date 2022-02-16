/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:15:02 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/01 20:37:32 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //silinecek

void	ft_strlen(char *str)
{

	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
	i++;
	}

	printf("%d", len);//SİLİNECEK
}

// MAİN SİLİNECEK
int	main()
{
	char array [] = "casdd";
	char *p;

	p = array;
	ft_strlen(p);
}
