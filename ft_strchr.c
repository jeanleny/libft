/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:30:00 by lperis            #+#    #+#             */
/*   Updated: 2024/10/11 16:11:15 by lperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	c = (unsigned char)c;
	while (*s != c && *s)
	{
		s++;
	}
	if(c == *s)
		return ((char *)s);
	return (NULL);
}

/*int main(void)
{
	const char s[500] = "ouiiiiijii";
	const char s1[500] = "ouiiiiijii";
	int c = '\0';
	int c1 = '\0';
	char *res = strchr(s, c);
	char *res1 = ft_strchr(s1, c1);
	printf("%s\n", res);
	printf("%s\n", res1);
}
*/

