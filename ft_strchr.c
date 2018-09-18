/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 07:16:29 by cshirley          #+#    #+#             */
/*   Updated: 2018/05/24 13:49:59 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*temp;
	size_t	index;

	temp = NULL;
	index = 0;
	if (c == '\0')
		return ((char*)&s[ft_strlen(s)]);
	while (s[index] != '\0')
	{
		if (s[index] == c)
			return ((char*)&s[index]);
		index++;
	}
	return (NULL);
}
