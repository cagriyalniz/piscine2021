/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:46:59 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/07 17:06:11 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>//SİLİNECEK

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	ft_calg_neg(char *str)
{
	int index;
	int syc;

	syc = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == '-')
		{
			syc++;
			index++;
		}
		index++;
	}
	if (syc % 2 == 0)
	{
		return (1);
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}

int checkarg(char *str)
{
	int	index1;
	int	index2;
	int	len;

	len = ft_strlen(str);
	index1 = 0;
	if (str[0] == '\0' || len == 1)
		return (0);
	while (str[index1] != '\0')
	{
		if (str[index1] <= 32 || str[index1] == 127 // tabanda istenmeyen krkrt kontrolu
			|| str[index1] == '+' || str[index1] == '-')
			return (0);
		index2 = index1 + 1;
		while (index2 < len)
		{
			if (str[index1] == str[index2])// tabada aynı krktr kontrolu
				return (0);
			index2++;
		}
		index1++;
	}
	return (1);
}
int	ft_putnbr_base(int nbr, char *base)
{
	int len;
	int error;
	long nb;
	int result;

	result = 0;
	error = checkarg(base);
	len = ft_strlen(base);
	nb = nbr;
	if (error == 1)// taban hatasızsa
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < len)
		{	result = result * 10;
			result += base[nb] - '0';
		//	printf("%d", result);
		}
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
	printf("%d resul **\n", result);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	firstkrktr;
	int index;
	int	result;
	long sonsonuc;
	
	sonsonuc = 0;
	index = 0;
	result = 0;
	firstkrktr = ft_calg_neg(str);
	while ((str[index] >= '\t' && str[index] <= '\r'
			|| str[index] == ' ' || str[index] == '-' || str[index] == '+'))
		index++;
//	printf("%d\n", index);
	while  (!(str[index] >= 0 && str[index] <=9))
	{
		if (str[index] >= '0' && str[index] <= '9')
		{
			result = result * 10;
			result += str[index] - '0';
		//	printf("\n %c \n", str[index]);
		//	index++;
		}
		else
			break ;
		index++;

	}

//	printf("%d\n", ft_putnbr_base(result, base));
	sonsonuc = ft_putnbr_base(result, base) * firstkrktr;
	printf("%ld  sonsonuc \n", sonsonuc);
	printf("%d frst \n", firstkrktr);
	return (sonsonuc);

}
//MAİN SİLİNECEK
int	main()
{

	printf("%d", ft_atoi_base("--+--53a2","0123456789abcdef")); 
}
