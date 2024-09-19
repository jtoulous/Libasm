NAME = libasm.a
ASM_FILES = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s
OBJ_FILES = $(ASM_FILES:.s=.o)
NASM_FLAGS = -f elf64
CC = gcc
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

%.o: %.s
	nasm $(NASM_FLAGS) $< -o $@

test: $(NAME) main.c
	$(CC) $(CFLAGS) main.c -L. -lasm -o test_program

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME) test_program

re: fclean $(NAME)

.PHONY: all clean fclean re test