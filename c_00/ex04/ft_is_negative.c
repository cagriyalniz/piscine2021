/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:45:01 by cyalniz           #+#    #+#             */
/*   Updated: 2021/11/28 18:56:55 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int		sayi;
	char	d1;
	char	d2;

	sayi = n;
	d1 = 'P';
	d2 = 'N';
	if (sayi >= 0)
	{
		write(1, &d1, 1);
	}
	else
	{
		write(1, &d2, 1);
	}
}
