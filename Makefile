SRC = Library/ft_putchar_fd.c Library/ft_putnbr_fd.c Library/ft_putu_fd.c Library/ft_printp_fd.c Library/ft_puthex_fd.c Library/ft_putstr_fd.c ft_printf.c

LIB = lib.h Library/Library.h

ADF = Lib.h.gch Library/library.h.gch

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

CC = cc

NAME = libftprintf.a
	
all : $(NAME)	

$(NAME) : $(SRC)
	@echo "Creating \"libft.a\""
	@$(CC) $(CFLAGS) $(SRC) $(LIB) -c 
	@ar -rc $(NAME) $(OBJ)
	@echo "Creation of the Library: SUCCESSFUL"

clean :
	@echo "Deleting object files"
	@rm -rf *.o $(ADF)
	@echo "Deletion of object files: SUCCESSFUL

fclean:
	@echo "Deleting Library and object files"
	@rm -rf *.o $(ADF) library.a
	@echo "Deletion of library and object files: SUCCESSFUL"

re: fclean all

.PHONY : all clean fclean re bonus
