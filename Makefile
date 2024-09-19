# The compiler
CC = cc

# Compiler flags
CFLAGS := -Wall -Wextra -Werror

# Debugging (DEBUG=1)
ifeq ($(DEBUG), 1)
	CFLAGS += -g3 -O0
endif

# Targets
TARGET = flib.a

# Directories
LIB_DIR1 = ../Libft/

# Libraries
LIB1 = $(LIB_DIR1)libft.a

# Source files
SRC_FILES +=	f_lmt_check.c
SRC_FILES +=	f_miniprint.c
SRC_FILES +=	f_strtoi.c

# Object files
OBJ_FILES = $(SRC_FILES:%.c=%.o)

# Rules
all: $(TARGET)

$(LIB1):
	$(MAKE) -C $(LIB_DIR1) all

$(TARGET): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES) $(LIB1)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)
	$(MAKE) -C $(LIB_DIR1) clean

fclean: clean
	rm -f $(SERVER) $(CLIENT)
	$(MAKE) -C $(LIB_DIR1) fclean

re: fclean all

.PHONY: clean fclean all re
