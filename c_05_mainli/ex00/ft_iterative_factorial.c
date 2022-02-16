/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:09:06 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/12 12:10:13 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>//SİLİNECEK
#include <stdio.h>//SİLİNECEK

int	ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		while (nb > 0)
		{
			result = result * nb;
			nb--;
		}
	}
	return (result);
}
//MAİN SİLİNECEK
int	main()
{
	printf("%d \n", ft_iterative_factorial(0));
	printf("%d \n", ft_iterative_factorial(-2));
	printf("%d \n", ft_iterative_factorial(5));
}
