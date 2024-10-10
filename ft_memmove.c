/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:49:31 by lperis            #+#    #+#             */
/*   Updated: 2024/10/09 19:28:52 by lperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	char *cast_dest;
	char *cast_src;
	i = 0;
	cast_dest = (char *)dest;
	cast_src = (char *)src;
	if(n == 0 || cast_dest == cast_src)
		return(cast_dest);
	else if(cast_dest < cast_src)
		while(i < n)
		{
			cast_dest[i] = cast_src[i];
			i++;
		}
	else if(cast_dest > cast_src)
	{
			while(n > 0) 
			{
				cast_dest[n-1] = cast_src[n-1];
				n--;
			}
		}
	return(cast_dest);
}

/*int main(void)
{
	char str1[100] = "NOOON";
	char str2[100] = "OIkuffgd";
	printf("%s",(char *) ft_memmove(str1, str2, 7));
}*/