/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:18:38 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/08 11:12:38 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>//SİLİNECEK

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	checkarg(char *str)
{
	int	index1;
	int	index2;
	int len;

	len = ft_strlen(str);
	index1 = 0;
	if (str[0] == '\0' || len == 1)
		return (0);
	while (str[index1] != '\0')
	{
		if (str[index1] <= 32 || str[index1] == 127 //tabanda istenmeyen karakter kontrolü
			|| str[index1] == '+' || str[index1] == '-')
			return (0);
		index2 = index1 + 1;
		while (index2 < len)
		{
			if (str[index1] == str[index2]) // tabanda aynı krktr 2 kere bulunma kontrolü
				return (0);
			index2++;
		}
		index1++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int len;
	int error;
	long nb;

	error = checkarg(base);
	len = ft_strlen(base);
	nb = nbr;
	if (error == 1)//taban hatasızsa
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < len)
			ft_putchar(base[nb]);
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}
//MAİN SİLİNCEK
int	main()
{
	//ft_putnbr_base(-20, "01");
	//printf("\n");
	ft_putnbr_base(53, "01234567");
	//printf("\n");
	//ft_putnbr_base(15, "0123456789");
	//printf("\n");
//	ft_putnbr_base(53, "!'^%&");
}
