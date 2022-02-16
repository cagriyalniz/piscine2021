/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:53:49 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/08 10:10:50 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //SİLİNECEK

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

//MAİN SİLİNECEK
int	main()
{
	char s1[] = "cagri yalniz";
	ft_putstr(s1);
}
