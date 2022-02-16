/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:41:50 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/05 14:51:27 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>//SİLİNECEK

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 32 && str[index] <= 126)
		{
			ft_putchar(str[index]);		
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[index] / 16]); // 0 gelmesi için
			ft_putchar("0123456789abcdef"[str[index] % 16]);
		}
		index++;
	}
}

//MAİN SİLİNECEK
int	main()
{
	char s1[] = "\vXXX\nXXX\t";
	char *p1;

	p1 = s1;
ft_putstr_non_printable(p1);
}
