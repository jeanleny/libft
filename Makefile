# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lperis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 12:41:13 by lperis            #+#    #+#              #
#    Updated: 2024/10/21 12:26:53 by lperis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_strlen.c		\
		ft_isprint.c	\
		ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strncmp.c	\
		ft_strnstr.c	\
		ft_calloc.c		\
		ft_atoi.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_split.c		
NAME = libft.a 
#var that define the NAME content .a is extension for library

CFLAGS = -Wall -Werror -Wextra

RM = rm -f 
#commande bash to remove all even with errors

OBJ = $(SRC:.c=.o) 
#var that compile .c to objetcts files

all : $(NAME) 
#command that make execute first (always all)

$(NAME) :	$(OBJ)
			ar -rc $(NAME) $(OBJ)	
#ar take the library indexed by OBJ
#r is flag to insert members(name for files)
#c is flag that create the archive.

clean : 
	$(RM) $(OBJ)	
#clean call RM wich is the command bash to remove all even with errors

fclean :	clean		
			$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean all re	
#.PHONY is use to call ONLY the command that are present in the
# makefile. it avoid relink (calling another command with same name
