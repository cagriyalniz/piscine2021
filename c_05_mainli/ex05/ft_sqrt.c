/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 09:33:34 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/12 12:31:03 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>//SİLİNECEK

int	ft_sqrt(int nb)
{
	int sayi;

	sayi = 1;
	if (nb > 0)
	{
		while ( sayi * sayi <= nb)
		{
			if (sayi * sayi == nb)
				return (sayi);
			else if (sayi >= 46341)
				return (0);
			sayi++;
		}
	}
	return (0);
}
//MAİN SİLİNECEK
int	main()
{
	printf("%d \n", ft_sqrt(9));
	printf("%d \n", ft_sqrt(10));
	printf("%d \n", ft_sqrt(-5));
	printf("%d \n", ft_sqrt(0));

}
