/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:17:08 by lperis            #+#    #+#             */
/*   Updated: 2024/10/10 13:41:50 by lperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
	#include <stdlib.h>
	
	int main(void);
	int ft_isalnum(int c);	
	int ft_isalpha(int c);	
	int ft_isascii(int c);	
	int ft_isdigit(int c);	
	int ft_isprint(int c);	
	void *ft_memset(void *s, int c, size_t n);
	void *ft_memcpy(void *dest, const void *src, size_t n);
	int ft_strlen(const char *str);	
	void *ft_memmove(void *dest, const void *src, size_t n);
	void ft_bzero(void *s, size_t n);
	size_t	ft_strlcpy(char *dst, const char *src, size_t size);
#endif
