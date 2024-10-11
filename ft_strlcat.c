/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:16:45 by lperis            #+#    #+#             */
/*   Updated: 2024/10/11 14:52:48 by lperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_length;
	size_t	src_length;
	size_t	i;

	i = 0;
	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if ((dst_length) < size)
	{
		while (src[i] != '\0' && (dst_length + i) < size - 1)
		{
			dst[dst_length + i] = src[i];
			i++;
		}
		dst[dst_length + i] = '\0';
		return (dst_length + src_length);
	}
	else
		return (src_length + size);
}

/*int main(void)
{
	char dst[500] = "abcdefghij";
	const char src[500] = "0123456789";
	size_t size = ft_strlcat(dst, src, 15);
	printf("%zu\n", size);
	printf("%s\n", dst);
	char dst1[500] = "abcdefghij";
	const char src1[500] = "0123456789";
	size_t size1 = strlcat(dst1, src1, 15);
	printf("%zu\n", size1);
	printf("%s", dst1);
}*/
