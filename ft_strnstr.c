/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:26:55 by lperis            #+#    #+#             */
/*   Updated: 2024/10/16 11:55:50 by lperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		little_len;
	size_t	i;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	if (strlen(big) < len)
		len = strlen(big);
	i = 0;
	while ((i + little_len) <= len)
	{
		if (ft_memcmp(big + i, little, little_len) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	const char big[500] = "1X3456789xxxxxxxxxxxxxxxxxxxxxxxx";
	const char little[500] = "89";
	char *res;

	res = ft_strnstr(big, little, 9);
	printf("%s", res);
}*/
