NAME = libft.a

SOURCES =	ft_atoi.c \
			ft_itoa.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_split.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strmapi.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_bzero.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_calloc.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \

BONUS_SRCS =	ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstlast.c \
				ft_lstnew.c \
				ft_lstsize.c 

COMPILER = cc

CFLAGS = -Wall -Wextra -Werror

OBJECTS = $(SOURCES:.c=.o)

BONUS_OBJECTS = $(BONUS_SRCS:.c=.o)

# Rule to create the static library
$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

# # Rule to compile each .c file into a .o file
# %.o: %.c
# 	$(COMPILER) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean: 
	rm -f $(OBJECTS)
	rm -f $(BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: 	${BONUS_OBJECTS}
	ar -rcs $(NAME) ${BONUS_OBJECTS}

.PHONY: all clean fclean re bonus