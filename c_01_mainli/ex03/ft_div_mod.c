/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:23:21 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/01 10:15:13 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if ( b != 0)
	{
	*div = (a / b);
	*mod = (a % b);
	printf("%d", *div);//silinecek
	printf("%d", *mod);//silinecek
	}
}
//int main silinecek
int	main()
{
int s1;
int s2;
int *p1;
int *p2;

	s1 = 10;
	s2 = 2;
	p1 = &s1;
	p2 = &s2;
	ft_div_mod(s1, s2, p1, p2);
}
