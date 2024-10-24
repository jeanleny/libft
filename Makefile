# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lperis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 12:41:13 by lperis            #+#    #+#              #
#    Updated: 2024/10/24 17:42:36 by lperis           ###   ########.fr        #
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
		ft_split.c		\
		ft_itoa.c		\
		ft_strmapi.c	\
		ft_striteri.c	\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\

BONUSSRC = ft_lstnew_bonus.c		\
		   ft_lstadd_front_bonus.c	\
		   ft_lstsize_bonus.c		\
		   ft_lstlast_bonus.c		\
		   ft_lstadd_back_bonus.c	\
		   ft_lstdelone_bonus.c		\
		   ft_lstclear_bonus.c		\
		   ft_lstiter_bonus.c		\
		   ft_lstmap_bonus.c		

NAME = libft.a 

CC = cc

CFLAGS += -Wall -Werror -Wextra

RM = rm -f 

OBJ = $(SRC:.c=.o) 

BONUSOBJ = $(BONUSSRC:.c=.o)

all : $(NAME) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


bonus : $(BONUSOBJ) $(OBJ)
	ar -rc $(NAME) $(OBJ) $(BONUSOBJ)

$(NAME) :	$(OBJ)
	ar -rc $(NAME) $(OBJ)	

clean : 
	$(RM) $(OBJ) $(BONUSOBJ)	

fclean :	clean		
			$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean all re bonus	
