/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:48:50 by cyalniz           #+#    #+#             */
/*   Updated: 2021/12/04 14:21:06 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h> //SİLİNECEK
char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while(src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);

}
//SİLİNECEK
int	main()
{
	char a[] = "aa";
	char b[] = "bbb";
	char	*dest;
	char *dest2;
	char *dest3;

	char c[] = "ccc";
	char d[] = "ddd";


	char e[] = "eeee";
	char f[] = "fff";

	printf("1---öncesi---\n a: %s\n b: %s\n", a, b);
	dest = ft_strcpy(b, a);
	printf("1---sonrası---\n a: %s\n b: %s\n", a, b);
	
	printf("2---öncesi---\n c: %s\n d: %s\n", c, d);
	dest2 = ft_strcpy(d, c);
	printf("2---sonrası--\n c: %s\n d: %s\n", c, d);
	
	printf("3---öncesi---\n e: %s\n f: %s\n", e, f);
	dest3 = ft_strcpy(f, e);
	printf("3---öncesi---\n e: %s\n f: %s\n", e, f);

	return (0);
}
