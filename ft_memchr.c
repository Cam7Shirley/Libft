/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 06:58:05 by cshirley          #+#    #+#             */
/*   Updated: 2018/05/24 06:27:25 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	index;

	str = (char*)s;
	index = 0;
	while (index < n)
	{
		if (str[index] == c)
			return (&str[index]);
		index++;
	}
	return (NULL);
}
