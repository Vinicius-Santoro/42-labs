GREEN = \033[0;32m
BLUE = \033[0;34m
RED = \033[0;31m
RESET = \033[0m

NAME_CLI = CLI
NAME_SERVER = SERVER

CLI_DIR = ./src/cli/
SERVER_DIR = ./src/server/

CLI =		$(addprefix $(CLI_DIR), \
			cli.c\
			get_next_line.c\
			get_next_line_utils.c\
			init_vars.c\
			print_methods.c\
			verify_methods.c\
			)

SERVER =	$(addprefix $(SERVER_DIR), \
			main.c\
			mongoose.c\
			)

OBJS_CLI = $(CLI:.c=.o)
OBJS_SERVER = $(SERVER:.c=.o)

cli: $(NAME_CLI)

$(NAME_CLI): $(OBJS_CLI)
	gcc $(OBJS_CLI) -o $(NAME_CLI)
	@echo "$(BLUE)"
	@echo "██╗ ██╗ ██████╗ ██╗       ███╗   ██████╗  ██████╗ "
	@echo "██║ ██║     ██║ ██║      █████╗  ██   ██╗ ██╔═══╝ "
	@echo "██████║ ██████║ ██║     ██   ██╗ █████╔═╝ ██████╗ "
	@echo "    ██║ ██╔═══╝ ██║     ███████║ ██   ██╗     ██║ "
	@echo "    ██║ ██████╗ ██████╗ ██║  ██║ ██████╔╝ ██████║ "
	@echo "    ╚═╝ ╚═════╝ ╚═════╝ ╚═╝  ╚═╝ ╚═════╝  ╚═════╝ "
	@echo "                    CLI is Done!        $(RESET)  "
	@echo "                                                  "

server: $(NAME_SERVER)

$(NAME_SERVER): $(OBJS_SERVER)
	gcc $(OBJS_SERVER) -o $(NAME_SERVER)
	@echo "$(GREEN)"
	@echo "██╗ ██╗ ██████╗ ██╗       ███╗   ██████╗  ██████╗ "
	@echo "██║ ██║     ██║ ██║      █████╗  ██   ██╗ ██╔═══╝ "
	@echo "██████║ ██████║ ██║     ██   ██╗ █████╔═╝ ██████╗ "
	@echo "    ██║ ██╔═══╝ ██║     ███████║ ██   ██╗     ██║ "
	@echo "    ██║ ██████╗ ██████╗ ██║  ██║ ██████╔╝ ██████║ "
	@echo "    ╚═╝ ╚═════╝ ╚═════╝ ╚═╝  ╚═╝ ╚═════╝  ╚═════╝ "
	@echo "                   Server is Done!        $(RESET)"
	@echo "                                                  "

clean:
	rm -f $(OBJS_CLI) $(OBJS_SERVER)

fclean: clean
	rm -f $(NAME_CLI) $(NAME_SERVER)

fclean_server: clean
	rm -f $(NAME_SERVER)

fclean_cli: clean
	rm -f $(NAME_CLI)

re_server: fclean_server server

re_cli: fclean_cli cli