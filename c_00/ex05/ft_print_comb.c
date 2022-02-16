/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 19:07:31 by cyalniz           #+#    #+#             */
/*   Updated: 2021/11/28 15:13:53 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_yazdirma(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	bir;
	char	iki;
	char	uc;

	bir = '0';
	while (bir <= '7')
	{
		iki = bir + 1;
		while (iki <= '8')
		{
			uc = iki + 1;
			while (uc <= '9')
			{
				ft_yazdirma(bir, iki, uc);
				uc++;
			}
			iki ++;
		}
		bir++;
	}
}
