SRC = ft_isalpha.c ft_memcmp.c  ft_strchr.c  ft_strlen.c  ft_substr.c \
ft_atoi.c    ft_isascii.c ft_memcpy.c  ft_strdup.c  ft_strncmp.c ft_tolower.c \
ft_bzero.c   ft_isdigit.c ft_memmove.c ft_strjoin.c ft_strnstr.c ft_toupper.c \
ft_calloc.c  ft_isprint.c ft_memset.c  ft_strlcat.c ft_strrchr.c ft_isalnum.c ft_memchr.c \
ft_strlcpy.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstdelone.c
OBJS = ${SRC:.c=.o}
OBJS_BONUS = ${BONUS:.c=.o}
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
ft_lstclear.c ft_lstiter.c ft_lstmap.c
NAME = libft.a
AR = ar rc
CFLAGS = -Wall -Wextra -Werror

.c.o:
			gcc ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

bonus:		${OBJS_BONUS}
			${AR} ${NAME} ${OBJS_BONUS}
			ranlib ${NAME}