/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:40:43 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/16 12:23:38 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> //SİLİNECEK

int	*ft_range(int min, int max)
{
	int *p;
	int i;

	if (min >= max)
		return (0);
	p = malloc(((max - min) + 1) * sizeof(int));
	if (p == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
//SİLİNECEK
void	print_range(int *matris, int size)
{
	if (size > 0)
	{
		while (*matris)
		{
			printf("%d,", *matris);
			matris++;
		}
	}
	else
		printf("NULL");
}
//MAİN SİLİNECEK
int	main()
{
	int size;
	int *matris1;

	size = ft_ultimate_range(&matris1, 3, 13);
	printf("\n size = %d \n", size);
	print_range(matris1, size);
}
