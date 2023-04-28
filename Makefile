# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalonso <aalonso@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 17:03:54 by aalonso           #+#    #+#              #
#    Updated: 2023/04/25 08:29:35 by aalonso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library name:
NAME			= 	libft.a

# Header file name:
INCLUDE			=	libft.h

# Source files:
SRC_FILES		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c

# Object files:
OBJ_FILES		=	$(SRC_FILES:.c=.o)

# Compiler & flags:
CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra

# Commands:
LIB				=	ar rcs  
#					ar: Command to create/modify static libraries
#					r: Adds/replaces the files to the archive
#					c: Creates the archive if it does not exist.
#					s: Writes an index into the archive to make linking faster.
RM				=	rm -f

# Default target. It specifies that libft.a should be built.
all:			$(NAME)

# Instructions to create the static library. Objects and header file required.
$(NAME):	 	$(OBJ_FILES) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ_FILES)
	@echo "The library $(NAME) has been created!"

# Instructions to build the object files from source files:	
# $@ expands to the target name and $< expands to the first dependency name	
%.o:%.c
	@$(CC) $(CFLAGS) -c -o $@ $< 

# Remove objects:
clean:			 
	@$(RM) $(OBJ_FILES)
	@echo "Objects have been removed!"

# Remove objects and binary file:
fclean: 		clean
	@$(RM) $(NAME)
	@echo "The library $(NAME) has been removed!"

# Re-make:
re: 			fclean all

# This names are not files:
.PHONY: 		all clean fclean re

