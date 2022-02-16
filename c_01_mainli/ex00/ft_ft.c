/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:49:07 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/01 10:11:00 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //silineck
void	ft_ft(int *nbr)
{
	*nbr = 42;
	printf("%d", *nbr);
}
//main silinecek
int	main()
{
	int	*p;
	int	a = 2;

	p = &a;
	ft_ft(p);

//	printf("%d", *p);
//	printf("%p" , p);

}
