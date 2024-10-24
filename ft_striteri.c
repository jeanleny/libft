/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:35:47 by lperis            #+#    #+#             */
/*   Updated: 2024/10/24 12:06:06 by lperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void f(unsigned int c, char *d)
{
	d[c] -= 48;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
