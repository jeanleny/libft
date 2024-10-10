# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lperis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 18:28:50 by lperis            #+#    #+#              #
#    Updated: 2024/10/10 13:42:22 by lperis           ###   ########.fr        #
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
		ft_strlcpy.c

NAME = libft.a #var that define the NAME content .a is extension for library

RM = rm -f #commande bash to remove all even with errors

OBJ = $(SRC:.c=.o) #var that compile .c to objetcts files

all : $(NAME) #command that make execute first (always all)

$(NAME) :	$(OBJ)	#redefine the content of object || compile with ar and the -rc flag
			ar -rc	$(NAME) $(OBJ)	
#ar take the library indexed by OBJ
#r is flag to insert members(name for files)
#c is flag that create the archive.

clean : 
	$(RM) $(OBJ)	#clean call RM wich is the command bash to remove all even with errors

fclean :	clean		
			$(RM) $(NAME)

re : fclean libft.a

.PHONY : clean fclean all re	#.PHONY is use to call ONLY the command that are present in the
								# makefile. it avoid relink (calling another command with same name
