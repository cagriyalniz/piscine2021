/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 10:00:45 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/12 12:31:45 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //SİLİNECEK
int	ft_is_prime(int nb)
{
	int sayi;

	sayi = 2;
	if (nb < 2)
		return (0);
	while (sayi <= nb / 2)
	{
		if (nb % sayi == 0)
			return (0);
		sayi++;
	}
	return (1);
}
//MAİN SİLİNECEK
int	main()
{
	printf("%d \n", ft_is_prime(13)); // 1
	printf("%d \n", ft_is_prime(49)); //0
	printf("%d \n", ft_is_prime(1));
	printf("%d \n", ft_is_prime(2));
	printf("%d \n", ft_is_prime(0));
	printf("%d \n", ft_is_prime(-3));
}
