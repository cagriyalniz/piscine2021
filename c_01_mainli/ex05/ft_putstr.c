/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:01:52 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/01 20:34:42 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>	//silinecek

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
{
	ft_write(str[i]);
	i++;
}

}
// MAİN SİLİNECEK
int	main()
{
	char name[] = "cagr";
	char *p;

	p = name;
	printf("%c\n", p[1]);
	printf("%p", p);
	ft_putstr(p);
}
