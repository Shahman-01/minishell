# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppeapod <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 16:01:23 by ppeapod           #+#    #+#              #
#    Updated: 2022/03/06 16:01:33 by ppeapod          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= 	ms_bkslash_and_clean_cmd.c \
				ms_build_1.c \
				ms_build_2.c \
				ms_build_3.c \
				ms_build_run.c \
				ms_check_open.c \
				ms_child_path.c \
				ms_creat_list.c \
				ms_dollar.c \
				ms_env_add.c \
				ms_free_exit.c \
				ms_free_redir.c \
				ms_heredoc.c \
				ms_main.c \
				ms_pars_env.c \
				ms_parsing.c \
				ms_pipe_do.c \
				ms_pipex.c \
				ms_prepars.c \
				ms_redir_add.c \
				ms_redir_cmd_count.c \
				ms_redirect.c \
				ms_shellevel.c \
				ms_signals.c \
				ms_utils_func.c \
				ms_utils_func_2.c


OBJS		= $(SRCS:.c=.o)

LIBDIR		= libft

LIBFT_LIB	= $(LIBDIR)/libft.a

LIB			= -L$(LIBDIR) -lft

NAME		= minishell

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

RDLN		= -lreadline -L ~/.brew/Cellar/readline/8.1.2/lib \
			  -I~/.brew/Cellar/readline/8.1.2/include

RM			= rm -f

%.o: %.c	minishell.h
			$(CC) $(CFLAGS) -I$(LIBDIR) -c $< -o $@

$(NAME):	$(LIBFT_LIB) $(OBJS)
			$(CC) $(CFLAGS) -I$(LIBDIR) $(OBJS) -o $(NAME) $(LIB) $(RDLN)

all:		$(NAME)

$(LIBFT_LIB):	make_lib ;

make_lib:
			make -C $(LIBDIR)

clean:
			make clean -C $(LIBDIR)
			$(RM) $(OBJS)

fclean:		clean
			make fclean -C $(LIBDIR)
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re make_lib
