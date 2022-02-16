/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:27:38 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/01 16:40:03 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //SİLİNECEK

void	ft_sort_int_tab(int *tab, int size)
{
	
	int bos;
	int x = 0;
	int y;

	while(x < size - 1)
	{
		
		y = 0;

		while(y < size - x - 1)
		{
			if(tab[y] > tab[y + 1])
			{
				bos = tab[y];
				tab[y] = tab[y + 1];
				tab[y + 1] = bos;
			
			}

			y++;
		
		}
		x++;
	
	}



int i = 0;
	while(i <= 35)
	{
	
		printf("%d, ", tab[i]);
		i++;
	}

}

//MAİN SİLİNECEK
int	main()
{ 
	int array[] = {4, 5, 3, -2, 9, 0, 1, 7, 6, 8, 11, 76, 56, 23, 44, 55, 66, 77, 88, 99, 32, 43, 54, 65, 76, 87, 98,123, 321, 234,456, 678, 876, 543, 1234};
	int size;
	int *p;

	size = 36;
	p = array;
//	printf("%d", p[1]);

	ft_sort_int_tab(p, 36);
}

