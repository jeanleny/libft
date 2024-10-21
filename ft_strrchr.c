/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:22:08 by lperis            #+#    #+#             */
/*   Updated: 2024/10/13 19:54:25 by lperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	c = (unsigned char)c;
	j = -1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (j != -1)
		return ((char *)&s[j]);
	else if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*int main(void)
{
	const char s[500] = "ouiiiiijii";
	const char s1[500] = "ouiiiiijii";
	int c = 'j';
	int c1 = 'j';
	char *res = strrchr(s, c);
	char *res1 = ft_strrchr(s1, c1);
	printf("%s\n", res);
	printf("%s\n", res1);
}*/
