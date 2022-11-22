/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:26:24 by agoujdam          #+#    #+#             */
/*   Updated: 2022/11/22 14:56:21 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBa
#define LIBa

#include <unistd.h>

int	ft_printp_fd(void *c, int fd);
int	ft_putchar_fd(char c, int fd);
int	ft_puthex_fd(unsigned long int n, int fd, char c);
int	ft_putnbr_fd(int n, int fd);
int ft_putstr_fd(char *s, int fd);
int	ft_putu_fd(unsigned int n, int fd);

#endif
