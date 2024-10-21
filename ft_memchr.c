/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:57:17 by lperis            #+#    #+#             */
/*   Updated: 2024/10/14 09:58:12 by lperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cast_s;

	c = (unsigned char) c;
	cast_s = (unsigned char *) s;
	while (n)
	{
		if (c == *cast_s)
		{
			return ((void *)cast_s);
		}
		cast_s++;
		n--;
	}
	return (NULL);
}
/*int main(void)
{
	char tab[500] = "ouidakor";
	char *res = memchr(tab, 'i', 2);
	printf("%s\n", res);
	char tab1[500] = "ouidakor";
	char *res1 = ft_memchr(tab1, 'i', 2);
	printf("%s", res1);
}*/
