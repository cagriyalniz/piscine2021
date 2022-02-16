/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:16:41 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/12 09:47:05 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>//SİLİNECEK
#include <stdio.h>//SİLİNECEK

int	ft_recursive_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		return(nb * (ft_recursive_factorial(nb -1)));
	}
}
//MAİN SİLİNECEK
int	main()
{
	printf("%d \n", ft_recursive_factorial(3));
	printf("%d \n", ft_recursive_factorial(0));
	printf("%d \n", ft_recursive_factorial(-1));
}
