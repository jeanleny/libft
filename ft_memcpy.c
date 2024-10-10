/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:31:09 by lperis            #+#    #+#             */
/*   Updated: 2024/10/09 14:48:43 by lperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*cast_src;
	char		*cast_dest;
	size_t			i;
	i = 0;

	cast_src = (char *) src;
	cast_dest = (char *) dest;
	
	while(i < n)
	{
		cast_dest[i] = cast_src[i];
		i++;
	}
	return(cast_dest);
}