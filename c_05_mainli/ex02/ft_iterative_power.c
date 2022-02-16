/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:53:20 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/12 12:11:40 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>//SİLİNECEK
#include <stdio.h>//SİLİNECEK

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power <0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			result = nb * result ;
			power--;
		}
	}
	return (result);
}

//MAİN SİLİNECEK
int	main()
{
	printf("%d \n", ft_iterative_power(5, 3));//125
	printf("%d \n", ft_iterative_power(0,0)); //1 çıktısı verecek
	printf("%d \n", ft_iterative_power(5, -3));//0 çıktısını verecek
	printf("%d \n", ft_iterative_power(-5, 2));
	printf("%d \n", ft_iterative_power(5, 0));

}
