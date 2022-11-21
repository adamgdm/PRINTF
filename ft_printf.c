#include "Library/library.h"

static int ft_do_it(const char c, void *p, fd)
{
	if (c == 'c')
		ft_putchar_fd((char)p, fd);
	else if (c == 's')
		ft_putstr_fd((const char)p, fd);
	else if (c == 'p')
		ft_printp_fd(p, fd);
	else if (c == 'd' || c == 'i')
		ft_putnbr_fd((int)p, fd);
	else if (c == 'u')
		ft_putu_fd((unsigned int)p, fd);
	else if (c == 'x' || c == 'X')
		ft_puthex_fd((int)p, c, fd);
	else if (c == '%')
		ft_putchar_fd('%', fd);
}

int ft_printf(const char *s, ...)
{
	va_list string;
	int	i;
	void *p;

	i = 0;
	va_start(string, s);
	while (s[i])
	{
		while (s[i] && s[i] != '%')
		{
			ft_putchar_fd(str[i++], fd);
		}
		if (s[i] == '%')
		{	
			i++;
			p = va_arg(string, void *, fd)
			ft_do_it(s[i], p);
		}
		else
			break ;
	}
}
