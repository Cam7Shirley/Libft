/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 06:30:59 by cshirley          #+#    #+#             */
/*   Updated: 2018/05/24 09:15:31 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			index;

	str = (unsigned char*)s;
	index = 0;
	if (n > 0)
	{
		while (index < n && str[index] != '\0')
		{
			str[index] = 0;
			index++;
		}
	}
}
