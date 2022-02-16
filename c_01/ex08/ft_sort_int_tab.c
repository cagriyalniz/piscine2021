/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:27:38 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/01 18:58:28 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	bos;
	int	x;
	int	y;

	x = 0;
	while (x < size - 1)
	{
		y = 0;
		while (y < size - x - 1)
		{
			if (tab[y] > tab[y + 1])
			{
				bos = tab[y];
				tab[y] = tab[y + 1];
				tab[y + 1] = bos;
			}
			y++;
		}
		x++;
	}
}
