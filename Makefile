SRC = ft_isalpha.c ft_memcmp.c  ft_strchr.c  ft_strlen.c  ft_substr.c \
ft_atoi.c    ft_isascii.c ft_memcpy.c  ft_strdup.c  ft_strncmp.c ft_tolower.c \
ft_bzero.c   ft_isdigit.c ft_memmove.c ft_strjoin.c ft_strnstr.c ft_toupper.c \
ft_calloc.c  ft_isprint.c ft_memset.c  ft_strlcat.c ft_strrchr.c ft_isalnum.c ft_memchr.c \
ft_strlcpy.c ft_strtrim.c
OBJS = ${SRC:.c=.o}
NAME = libft.a
AR = ar rc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
all:	${NAME}

.c.o:
			gcc ${CFLAGS} -c $< -o ${<:.c=.o}
${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
