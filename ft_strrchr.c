/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:22:08 by lperis            #+#    #+#             */
/*   Updated: 2024/10/11 16:45:53 by lperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	c = (unsigned char)c;
	int i;
	int j;
	i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == c)
			j = i;
		i++;
	}
	if(j == i)
		return((char *)&s[j]);
	else if(c == '\0')
		return((char *)&s[i]);
	return(NULL);
}
int main(void)
{
	const char s[500] = "ouiiiiijii";
	const char s1[500] = "ouiiiiijii";
	int c = 'i';
	int c1 = 'i';
	char *res = strrchr(s, c);
	char *res1 = ft_strrchr(s1, c1);
	printf("%s\n", res);
	printf("%s\n", res1);
}
