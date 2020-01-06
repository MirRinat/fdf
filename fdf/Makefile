.PHONY: all, $(NAME), clean, fclean, re

NAME = fdf

IDIR = ./includes/
INCS = libft.h	\
	   fdf.h \
	   get_next_line.h \
	   mlx.h

SDIR = ./src/
SRCS = my_main.c get_next_line.c drawing.c mouse_click.c \
       my_abs.c read_map.c  key_click.c iso.c

SRCC = $(addprefix $(SDIR),$(SRCS))

OBJS = $(SRCS:.c=.o)

FLAG = -Wall -Werror -Wextra

$(NAME):
	@make fclean -C ./libft/ && make -C ./libft/
	gcc $(FLAG) -c $(SRCC) -I$(IDIR)
	gcc $(FLAG) $(OBJS) ./libft/libft.a -I /usr/X11/include -g -L /usr/X11/lib -l mlx \
	-framework OpenGL -framework AppKit -o $(NAME)

all: $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	@make -C ./libft/ fclean
	/bin/rm -f $(NAME)

re: fclean all
