/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 10:44:13 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/12 12:59:19 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //SİLİNECEK
int	ft_is_prime(int nb)
{
	int sayi;

	sayi = 2;
	if (nb < 2)
		return (0);
	while (sayi <= nb / sayi)
	{
		if (nb % sayi == 0)
			return (0);
		sayi++;
	}
	return (1);
}
int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0 && nb < 2147483647)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return(nb);
}
//MAİN SİLİNECEK
int	main()
{
	printf("%d \n", ft_find_next_prime(2147482641));
	printf("%d", ft_find_next_prime(25));
}
