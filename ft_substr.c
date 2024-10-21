/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:12:59 by lperis            #+#    #+#             */
/*   Updated: 2024/10/16 19:46:56 by lperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	unsigned int i;
	i = 0;
	if(start > (unsigned int)ft_strlen(s))
		return(ft_strdup(""));
	if((start + len) > (unsigned int)ft_strlen(s))
		str = malloc(sizeof(char) * (ft_strlen(s) - start)+1);
	else
		str = malloc((len + 1) * sizeof(char));	
	if(!str)
		return(NULL);
	while(s[start + i] != '\0' && (len > 0))
		{
			str[i] = s[start + i];
			i++;
			len--;
		}
		str[i] = '\0';
	return(str);
}

/*int main(void)
{
	printf("%s", ft_substr("ouite", 0, 18));
}*/
