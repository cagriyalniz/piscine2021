/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:28:41 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/12 09:32:50 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>//SİLİNECEK
int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		result = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
		return (result);
	}
	else
		return (-1);
}
//MAİN SİLİNECEK
int	main()
{
	// 0 1 1 2 3 5 8 13 21
	printf("%d \n", ft_fibonacci(-3)); // çıktı -1
	printf("%d \n", ft_fibonacci(0));// 0 
	printf("%d \n", ft_fibonacci(1)); // 1
	printf("%d \n", ft_fibonacci(2));// 1	
	printf("%d \n", ft_fibonacci(3)); // 2
	printf("%d \n", ft_fibonacci(4));// 3	
	printf("%d \n", ft_fibonacci(5)); // 5
	printf("%d \n", ft_fibonacci(6));// 8
	printf("%d \n", ft_fibonacci(7)); // 13
}
