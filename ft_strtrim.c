/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:28:28 by cshirley          #+#    #+#             */
/*   Updated: 2018/05/31 11:37:57 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*trim(char const *s, size_t f, size_t b)
{
	char	*tmp;
	size_t	index;

	index = 0;
	if (ft_strnew(ft_strlen(s)) == NULL)
		return (NULL);
	tmp = ft_strnew(ft_strlen(s));
	while (f < b)
	{
		tmp[index] = s[f];
		f++;
		index++;
	}
	return (tmp);
}

char		*ft_strtrim(char const *s)
{
	size_t	front;
	size_t	back;
	size_t	size;
	size_t	index;
	char	*temp;

	front = 0;
	index = 0;
	back = ft_strlen(s);
	while (s[front] == '\n' || s[front] == '\t' || s[front] == ' ')
		front++;
	while (s[back - 1] == '\n' || s[back - 1] == '\t' || s[back - 1] == ' ')
		back--;
	if (front > back)
		return ("");
	size = back - front;
	temp = trim(s, front, back);
	return (temp);
}
