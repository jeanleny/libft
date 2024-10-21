/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:58:25 by lperis            #+#    #+#             */
/*   Updated: 2024/10/21 12:00:47 by lperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void ft_free(char **tab, int i)
{
	while(i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
}

int ft_strnlen(char *s, char c)
{	
	int length;
	length = 0;
	while((*s != '\0') && (*s != c))
	{
		length++;
		s++;
	}
	return(length);
}

static void ft_wordalloc(char *s, char c, char **tab)
{
	int i;
	int size;
	i = 0;
	while(*s != '\0')
	{
		while(*s == c)
			s++;
		if(*s != '\0')
		{
			size = ft_strnlen(s, c);
			tab[i] = ft_calloc(size + 1, (sizeof(char)));	
			if(tab[i] == NULL)
			{
				ft_free(tab, i);
				return ;
			}
			ft_strlcpy(tab[i], s, size + 1);
			i++;
			s += size;
		}
	}
	tab[i] = NULL;
}

static int ft_countwords(char *s, char sep)
{
	int count;
	int inword;
	inword = 0;
	count = 0;
	while(*s)
	{
		if(*s == sep)
			inword = 0;
		else if(*s != sep && inword == 0)
		{
			inword = 1;
			count++;
		}
		s++;
	}
	return(count);
}

char **ft_split(char const *s, char c)
{
	char **words_tab;
	if(!s)
		return(NULL);
	words_tab = ft_calloc(ft_countwords((char *)s, c) + 1, (sizeof(char *)));
	if(words_tab == NULL)
		return(NULL);
	ft_wordalloc((char *)s, c, words_tab);
	return(words_tab);
}

/*int main(void)
{	
	int i = 0;
	char **tab = ft_split("ooooo koudsjhoooooooofdsjkiooooooo", 'o');
	while(tab[i] != NULL)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	ft_free(tab, i);
}*/
