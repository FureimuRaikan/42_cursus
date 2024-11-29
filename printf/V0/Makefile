# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yguinio <yguinio@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 11:29:57 by yguinio           #+#    #+#              #
#    Updated: 2024/11/26 09:29:09 by yguinio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG_NAME = prog
NAME = libftprintf.a
LIB_FILES = libft.a
FILES = ft_printf.c ft_putstr_len.c ft_putchar_len.c ft_putnbr_len.c ft_uitoa.c \
		ft_putnbr_hex_len.c ft_putptr_len.c

SRC_DIR= ./srcs/
OBJ_DIR= ./obj/
LIB_DIR= ./libft/
INC_DIR= ./includes/

SRC = $(addprefix $(SRC_DIR), $(FILES))
OBJ = $(addprefix $(OBJ_DIR), $(FILES:.c=.o))
LIB = $(addprefix $(LIB_DIR), $(LIB_FILES))

CC = cc
CFLAGS = -Werror -Wextra -Wall
INC = -I $(INC_DIR) -I $(addprefix $(LIB_DIR), $(INC_DIR))
AR = ar rc

all : $(NAME) 

$(LIB) : 
	make -C $(LIB_DIR)
	
$(NAME) : $(OBJ) $(LIB)
	cp $(LIB) .
	mv libft.a $(NAME)
	$(AR) $(NAME) $(OBJ) $(LIB)
	
$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	
go : all
	@$(CC) -g3 $(OBJ) $(LIB) -o $(PROG_NAME)
	./$(PROG_NAME)	

clean :
	@rm -f $(OBJ)
	@make -C $(LIB_DIR) fclean

fclean : clean
	rm -f $(NAME)

re : fclean all

del : fclean
	rm -f $(PROG_NAME)

.PHONY : all clean fclean re bonus