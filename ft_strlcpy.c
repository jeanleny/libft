/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:35:33 by lperis            #+#    #+#             */
/*   Updated: 2024/10/10 14:04:48 by lperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h" 
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	i = 0;
	if(size != 0)
	{
		while(i < size -1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return(ft_strlen(src));
}

/*int main(void)
{
	char src[500] = "nood";
	char dest[500] = "ouidd";
	size_t size = ft_strlcpy(dest, src, 0);
	printf("%zu\n", size);
	printf("%s",dest);
}*/
