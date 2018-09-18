/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:28:03 by cshirley          #+#    #+#             */
/*   Updated: 2018/05/31 11:37:29 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;

	if (ft_strnew(ft_strlen(s1) + ft_strlen(s2)) == NULL)
		return (NULL);
	temp = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	temp = ft_strcat(temp, (char*)s1);
	temp = ft_strcat(temp, (char*)s2);
	return (temp);
}
