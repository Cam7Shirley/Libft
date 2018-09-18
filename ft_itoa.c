/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 09:33:44 by cshirley          #+#    #+#             */
/*   Updated: 2018/05/31 10:43:16 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(int n)
{
	unsigned int	num;
	int				count;

	num = n;
	count = 0;
	if (n < 0)
		num = -1 * num;
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	unsigned int	tmp;
	size_t			index;
	char			*str;

	index = get_size(n);
	tmp = (unsigned int)n;
	if (n < 0)
	{
		tmp = -1 * n;
		index++;
	}
	if (ft_strnew(index) == NULL)
		return (NULL);
	str = ft_strnew(index);
	if (n == 0)
		str[0] = '0';
	str[--index] = tmp % 10 + 48;
	while (tmp != 0)
	{
		tmp = tmp / 10;
		str[--index] = tmp % 10 + 48;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
