/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:30:25 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/01 13:33:24 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	bos;

	x = 0;
	while (x < (size / 2))
	{
		bos = tab[x];
		tab[x] = tab[size - 1 - x];
		tab[size - 1 - x] = bos;
		x++;
	}
}
