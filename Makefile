# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adkhan <adkhan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/16 20:22:47 by adkhan            #+#    #+#              #
#    Updated: 2025/11/23 19:57:10 by adkhan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar rcs
GREEN = \033[32m
YELLOW = \033[33m
CYAN = \033[36m
RED = \033[31m
RESET = \033[0m

PF_SRCS = ft_utoa_base.c \
			ft_handle_char.c \
			ft_handle_hex_lower.c \
			ft_handle_hex_upper.c \
			ft_handle_int.c \
			ft_handle_percent.c \
			ft_handle_ptr.c \
			ft_handle_str.c \
			ft_handle_unsigned_int.c \
			ft_dispatcher.c \
			ft_strlen.c \
			ft_strlcpy.c \
			ft_strdup.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_itoa.c \
			ft_printf.c


PF_OBJS = $(PF_SRCS:.c=.o)

%.o: %.c ft_printf.h
	@echo -e "$(GREEN)Creating $@$(RESET)"
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all bonus clean fclean re rebonus help index logo

all: logo $(NAME)

$(NAME): $(PF_OBJS)
	@echo -e "$(GREEN)Making Library with $(shell echo $(PF_SRCS) | wc -w) Mandatory Files$(RESET)"
	$(AR) $(NAME) $(PF_OBJS)
	@echo -e "$(GREEN)Libftprintf is online!$(RESET)"

clean:
	@echo -e "$(RED)Cleaning all the Object Files$(RESET)"
	$(RM) $(PF_OBJS)
	@echo -e "$(RED)Object Files Removed$(RESET)"

fclean: clean
	@echo -e "$(RED)Removing the Library$(RESET)"
	$(RM) $(NAME)
	@echo -e "$(RED)Library Removed$(RESET)"

re: fclean all
	@echo -e "$(GREEN)Recreated everything from Scratch excluding Bonus files$(RESET)"

help:
	@echo -e "$(CYAN)Available commands:"
	@echo "-------------------"
	@echo "make all     - Compiles the mandatory libftprintf.a library."
	@echo "make clean   - Removes all object files (.o)."
	@echo "make fclean  - Removes all object files and the libftprintf.a library."
	@echo "make re      - Rebuilds the libftprintf library from scratch (fclean + all)."
	@echo "make help    - Shows this help message."
	@echo "make index   - Shows index of all the functions included in libftprintf.$(RESET)"

index:
	@echo -e "$(RED)--- Mandatory Functions ($(shell echo $(PF_SRCS) | wc -w)) ---$(RESET)"
	@for file in $(PF_SRCS); do \
		echo $$file; \
	done

logo: 
	@echo " ███████████ ███████████           ███████████  ███████████   █████ ██████   █████ ███████████ ███████████";
	@echo "▒▒███▒▒▒▒▒▒█▒█▒▒▒███▒▒▒█          ▒▒███▒▒▒▒▒███▒▒███▒▒▒▒▒███ ▒▒███ ▒▒██████ ▒▒███ ▒█▒▒▒███▒▒▒█▒▒███▒▒▒▒▒▒█";
	@echo " ▒███   █ ▒ ▒   ▒███  ▒            ▒███    ▒███ ▒███    ▒███  ▒███  ▒███▒███ ▒███ ▒   ▒███  ▒  ▒███   █ ▒ ";
	@echo " ▒███████       ▒███               ▒██████████  ▒██████████   ▒███  ▒███▒▒███▒███     ▒███     ▒███████   ";
	@echo " ▒███▒▒▒█       ▒███               ▒███▒▒▒▒▒▒   ▒███▒▒▒▒▒███  ▒███  ▒███ ▒▒██████     ▒███     ▒███▒▒▒█   ";
	@echo " ▒███  ▒        ▒███               ▒███         ▒███    ▒███  ▒███  ▒███  ▒▒█████     ▒███     ▒███  ▒    ";
	@echo " █████          █████    █████████ █████        █████   █████ █████ █████  ▒▒█████    █████    █████      ";
	@echo "▒▒▒▒▒          ▒▒▒▒▒    ▒▒▒▒▒▒▒▒▒ ▒▒▒▒▒        ▒▒▒▒▒   ▒▒▒▒▒ ▒▒▒▒▒ ▒▒▒▒▒    ▒▒▒▒▒    ▒▒▒▒▒    ▒▒▒▒▒       ";
	@echo "                                                                                                          ";
	@echo "                                                                                                          ";
	@echo "                                                                                                          ";