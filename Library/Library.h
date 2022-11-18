/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:26:24 by agoujdam          #+#    #+#             */
/*   Updated: 2022/11/18 14:26:25 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBB
#define LIBB

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *c, int fd);
void	ft_printp_fd(void *c, int fd);
void	ft_putnbr_fd(int c, int fd);
void	ft_putu_fd(int c, int fd);

#endif
