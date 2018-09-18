/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:21:26 by cshirley          #+#    #+#             */
/*   Updated: 2018/05/31 11:35:34 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	index;

	index = 0;
	if (ft_strnew(len) == NULL)
		return (NULL);
	temp = ft_strnew(len);
	while (index < len)
	{
		if (s[index] == '\0')
			return (NULL);
		temp[index] = s[start];
		start++;
		index++;
	}
	return (temp);
}
