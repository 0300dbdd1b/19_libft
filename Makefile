

SRCDIR		=	./srcs/
INCDIR		=	./includes/


INCLUDES	=	libft.h

SRCNAME		= 	ft_memset.c			\
				ft_bzero.c			\
				ft_memcpy.c			\
				ft_memccpy.c		\
				ft_memmove.c		\
				ft_memchr.c			\
				ft_memcmp.c			\
				ft_strlen.c			\
				ft_isalpha.c		\
				ft_isdigit.c		\
				ft_isalnum.c		\
				ft_isascii.c		\
				ft_isprint.c		\
				ft_toupper.c		\
				ft_tolower.c		\
				ft_strchr.c			\
				ft_strrchr.c		\
				ft_strncmp.c		\
				ft_strlcpy.c		\
				ft_strlcat.c		\
				ft_strnstr.c		\
				ft_atoi.c			\
				ft_calloc.c			\
				ft_strdup.c			\
				ft_substr.c 		\
				ft_strjoin.c 		\
				ft_strtrim.c		\
				ft_split.c			\
				ft_itoa.c			\
				ft_strmapi.c		\
				ft_putchar_fd.c		\
				ft_putstr_fd.c		\
				ft_putendl_fd.c 	\
				ft_putnbr_fd.c		\

BONUSNAME	=	ft_lstnew.c			\
				ft_lstadd_front.c	\
				ft_lstsize.c		\
				ft_lstlast.c		\
				ft_lstadd_back.c	\
				ft_lstdelone.c		\
				ft_lstclear.c		\
				ft_lstiter.c		\
				ft_lstmap.c			\

SRCS		=	${addprefix ${SRCDIR}, ${SRCNAME}}
BONUS		=	${addprefix ${SRCDIR}, ${BONUSNAME}}

OBJS		= 	${SRCS:.c=.o}
BONUSOBJS	=	${BONUS:.c=.o}

CC			= 	gcc
CFLAGS 		=	-Wall -Werror -Wextra

.c.o        :
				${CC} ${CFLAGS} -I ${INCDIR} -c $< -o ${<:.c=.o}


NAME		= 	libft.a
${NAME} 	: 	${OBJS}
				ar rc ${NAME} ${OBJS}


all:		${NAME}					## Cree une Bibliotheque Statique "libft.a"

clean:								## Supprime tout les .o inclus dans la bibliotheque "libft.a"
			rm -f ${OBJS} ${BONUSOBJS}

fclean:		clean					## Supprime la Bibliotheque Statique et ses fichiers objets
			rm -f ${NAME}

re:			fclean all   			## Supprime et recompile la Bibliotheque Statique avec ses fichiers objets

bonus:		${OBJS} ${BONUSOBJS}	## Cree une bibliotheque libft.a incluant les bonus
			ar rc ${NAME} ${OBJS} ${BONUSOBJS}
			ranlib ${NAME}

complete:	${OBJS} ${BONUSOBJS}
			ar rc ${NAME} ${OBJS} ${BONUSOBJS}
			ranlib ${NAME}

it:			fclean complete			## recompile completement la libft.a
			rm ${SRCDIR}*.o

help:								## Liste toutes les commandes
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | sort | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'

.PHONY	= 	all clean fclean re
