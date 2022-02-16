/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:35:34 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/16 12:24:05 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> //SİLİNECEK

int	*ft_range(int min, int max)
{
	int	*p;
	int	index;

	index = 0;
	if (min >= max)
		return (0);
	p = malloc(((max - min) + 1) * sizeof(int));
	if (p == NULL)
		return (0);
	while(min < max)
	{
		p[index] = min;
		index++;
		min++;
	}
	return (p);
}
//SİLİNECEK
void	print_range(int *sayimatrisi, int size)
{
	if (size > 0)
	{
	while (*sayimatrisi)
	{
		printf("%d,", *sayimatrisi);
		sayimatrisi++;
	}
	}
	else
		printf("NULL");
}
//MAİN SİLİNECEK
int	main()
{
	int	*sayimatrisi1;
	int *sayimatrisi2;

	sayimatrisi1 = ft_range(3,23);
	printf("\n sayimatrisi1 (3, 23): ");
	print_range(sayimatrisi1, 20);

	sayimatrisi2 = ft_range(3,3);
	printf("\n sayimatrisi2 (3, 3): ");
	print_range(sayimatrisi2, 0);

}
