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
SRC_FILES +=	f_pexit.c
SRC_FILES +=	f_alc_add.c
SRC_FILES +=	f_alc_double.c
SRC_FILES +=	f_alc_init.c

# Object files
OBJ_FILES = $(SRC_FILES:%.c=%.o)

# Rules
all: $(TARGET)

$(LIB1):
	$(MAKE) -C $(LIB_DIR1) all

$(TARGET): $(LIB1) $(OBJ_FILES)
	ar rcs $(TARGET) $(OBJ_FILES) $(LIB1)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)
	$(MAKE) -C $(LIB_DIR1) clean

fclean: clean
	rm -f $(TARGET)
	$(MAKE) -C $(LIB_DIR1) fclean

re: fclean all

.PHONY: clean fclean all re
