/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:08:49 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/12 12:12:57 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>//SİLİNECEK

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else
	{
		result = nb * ft_recursive_power(nb, power -1);

	}
	return (result);
}
//MAİN SİLİNECEK
int	main()
{
	printf("%d \n", ft_recursive_power(3, 4)); // çıktı 81
	printf("%d \n", ft_recursive_power(0, 0)); //çıktı 1
	printf("%d \n", ft_recursive_power(3, -1)); // çıktı 0
	printf("%d \n", ft_recursive_power(-3, 3)); // çıktı 81
	printf("%d \n", ft_recursive_power(5, 0)); //çıktı 1
	printf("%d \n", ft_recursive_power(1, 5)); // çıktı 1


}
