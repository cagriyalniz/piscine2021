/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:38:01 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/01 11:35:08 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	bos;

	if (*b != 0)
	{
	bos = *a;
	*a = *a / *b;
	*b = bos % *b;
	}
	else
	{	
		return ;
	}
}
