/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:04:36 by lperis            #+#    #+#             */
/*   Updated: 2024/10/14 11:22:35 by lperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cast_s1;	
	unsigned char	*cast_s2;

	n = (unsigned char)n;
	cast_s1 = (unsigned char *) s1;
	cast_s2 = (unsigned char *) s2;
	while (n)
	{
		if (*cast_s1 != *cast_s2)
			return (*cast_s1 - *cast_s2);
		n--;
		cast_s1++;
		cast_s2++;
	}
	return (0);
}
/*
int main(void)
{
	char str1[500] = "GNiE";
	char str2[500] = "enIE";
	printf("%d\n", memcmp(str1, str2, 1));
	char stra[500] = "GNiE";
	char strb[500] = "enIE";
	printf("%d", ft_memcmp(stra, strb, 1));

}*/
