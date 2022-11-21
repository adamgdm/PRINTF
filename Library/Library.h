/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:26:24 by agoujdam          #+#    #+#             */
/*   Updated: 2022/11/21 15:50:34 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBB
#define LIBB

void	ft_printp_fd(void *c, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_puthex_fd(unsigned long int n, int fd, char c);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putu_fd(unsigned int n, int fd);

#endif
