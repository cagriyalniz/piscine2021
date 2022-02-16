/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:30:25 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/01 18:04:10 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //SİLİNECEK

void	ft_rev_int_tab(int *tab, int size)
{
	int x;
	int bos;
	int k;

	k = 0;

	x = 0;
	while(x< (size/ 2)
	{
		bos = tab[x];
		tab[x] = tab[size - 1 -x];
		tab[size - 1 - x] = bos;
		x++;

	}
	
	

//	printf("%d", array2[0]);
	while(k <= 5)
	{
		printf("%d", tab[k]);
		k++;
		

	
	}

}
//MAİN SİLİNECEK
int	main()
{
	int array[]  = {1,2,3,4,5, 6};
	int i;
	int size;
	int *p;

	p = array;
	size = 6;
	ft_rev_int_tab(p, size);

}
