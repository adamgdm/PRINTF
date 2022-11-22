/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:14:57 by agoujdam          #+#    #+#             */
/*   Updated: 2022/11/22 14:16:32 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Library.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s)
	{
		while (s[i])
		{
			count += ft_putchar_fd(s[i], fd);
			i++;
		}
	}
	return (count);
}
