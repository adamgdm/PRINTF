/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:41:39 by agoujdam          #+#    #+#             */
/*   Updated: 2022/11/21 15:52:13 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Library.h"

void	ft_puthex_fd(unsigned long int n, int fd, char c)
{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			ft_puthex_fd(-n, fd, c);
		}
		else if (n >= 16)
		{
			ft_puthex_fd(n / 16, fd, c);
			ft_puthex_fd(n % 16, fd, c);
			return ;
		}
		else if (n < 16 && n >= 10
				&& (c >= 65 && c <= 90))
			ft_putchar_fd(n + 'A' - 10, fd);
		else if (n < 16 && n >= 10
				&& (c >= 97 && c <= 122))
			ft_putchar_fd(n + 'a' - 10, fd);
		else if (n < 10)
			ft_putchar_fd(n + '0', fd);
}

int main()
{
	ft_puthex_fd(454564, 1, 'x');

}
