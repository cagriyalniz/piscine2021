/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:38:01 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/01 15:18:46 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>//silinecek

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	bos;

	if(*b != 0)
	{
	bos = *a;
	*a = *a / *b;
	*b = bos % *b;
	}
}

//main silinecek
int	main()
{
	int s1;
	int s2;
	int *p1;
	int *p2;

	s1 = 55;
	s2 = 0;
	p1 = &s1;
	p2 = &s2;
	ft_ultimate_div_mod(p1, p2);
	printf("%d\n", *p1);//silinecek
	printf("%d", *p2);//silinecek
}
