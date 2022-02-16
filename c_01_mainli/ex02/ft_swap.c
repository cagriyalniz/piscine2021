/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:16:39 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/01 10:13:04 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	bos;

	bos = *a;
	*a = *b;
	*b = bos;
	printf("%d \n", *a); //silinecek
	printf("%d", *b); // silinecek
}
//MAİN SİLİNECEK

int	main()
{
	int a;
	int b;
	int *p1;
	int *p2;

	a = 5;
	b = 100;
	p1 = &a;
	p2 = &b;
	

	ft_swap(p1, p2);
}
