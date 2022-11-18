#include "Library/library.h"

static int ft_do_it(const char c, void *p, fd)
{
	if (c == 'c')
		ft_putchar((char)p, fd);
	else if (c == 's')
		ft_putstr((const char)p, fd);
	else if (c == 'p')
		ft_printp(p, fd);
	else if (c == 'd' || c == 'i')
		ft_putnbr((int)p, fd);
	else if (c == 'u')
		ft_putu((unsigned int)p, fd);
	else if (c == 'x' || c == 'X')
		ft_puthex((int)p, c, fd);
	else if (c == '%')
		ft_putchar('%', fd);
}

int ft_printf(const char *s, ...)
{
	int	i;
	void *p;

	i = 0;
	va_list string;
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
