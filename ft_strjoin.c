/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:01:17 by lperis            #+#    #+#             */
/*   Updated: 2024/10/16 13:03:04 by lperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int s1_length;
	int s2_length;
	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);

	str = malloc(sizeof(char) * (s1_length + s2_length) + 1);
	if(!str)
		return(NULL);
	ft_memcpy(str, s1, s1_length);
	ft_memcpy(str + s1_length, s2, s2_length + 1);
	//str[s1_length + s2_length] = '\0';
	return(str);
}
