/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:21:16 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/05 12:49:09 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //SİLİNECEK
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{

	unsigned int index;

	index = 0;
	while((src[index] != '\0') && (index < n))
	{
		dest[index] = src[index];
		index++;
	}
	while(index< n) // -1 olacak mı sor???!!!!
	{
		dest[index] = '\0';
		index++;
	}
	return(dest);

}
//MAİN SİLİNECEK
int	main()
{
	char src[] = "abcdefgh";
	char dest[] = "xxxxx";
	unsigned int n;

	n = 2;

	printf("öncesi src: %s \n dest: %s\n", src, dest);

	ft_strncpy(dest, src, n);

	printf("sonrası src: %s \n dest: %s\n", src, dest);
	return (0);

}
