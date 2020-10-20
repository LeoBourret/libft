SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c     \
		ft_putstr.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strcpy.c   \
		ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c   \
		ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c  \
		ft_substr.c ft_tolower.c ft_toupper.c
OBJ = $(SRC:.c=.o)
BONUS = ft_lstnew.c 		\
		ft_lstadd_front.c 	\
		ft_lstadd_back.c 	\
		ft_lstclear.c 		\
		ft_lstdelone.c 		\
		ft_lstiter.c		\
		ft_lstlast.c		\
		ft_lstmap.c			\
		ft_lstsize.c
BONUS_OBJ = $(BONUS:.c=.o)

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

RED          := $(shell tput -Txterm setaf 1)
GREEN        := $(shell tput -Txterm setaf 2)
YELLOW       := $(shell tput -Txterm setaf 3)
LIGHTPURPLE  := $(shell tput -Txterm setaf 4)
PURPLE       := $(shell tput -Txterm setaf 5)
BLUE         := $(shell tput -Txterm setaf 6)
WHITE        := $(shell tput -Txterm setaf 7)

RESET        := $(shell tput -Txterm sgr0)

all: $(NAME)

$(NAME): $(OBJ)
		@echo ""
		@echo "$(BLUE)	[	generating libft.a	]$(RESET)"
		@echo ""
		ar rcs $(NAME) $(OBJ)

bonus:  $(OBJ) $(BONUS_OBJ)
		@echo ""
		@echo "$(LIGHTPURPLE)	[	compilation bonus	]$(RESET)"
		@echo ""
		ar rcs $(NAME) $(OBJS) $(BONUS_OBJ)
clean:
		@echo ""
		@echo "$(PURPLE)	[	cleaning	]$(RESET)"
		@echo ""
		$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean bonus
