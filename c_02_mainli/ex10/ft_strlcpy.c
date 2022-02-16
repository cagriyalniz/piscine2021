/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:01:29 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/04 18:37:41 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>//SİLİNECEK

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int index;

	index = 0;
	while(src[index] != '\0' && index < size)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return(index);
}
//MAİN SİLİNECEK
int	main()
{
	char src1[] = "AaaaaA";
	char dest1[] = "bbb";
	unsigned int n;

	n = 2;

	printf("--öncesi-- \n src1:%s \n dest1:%s \n", src1, dest1);
	ft_strlcpy(dest1, src1, n);
	printf("--sonrası--\n src1:%s \n dest1:%s \n", src1, dest1);

	printf(" %d \n", ft_strlcpy(dest1, src1, n));

}
