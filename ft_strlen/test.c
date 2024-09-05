#include <stdio.h>

size_t ft_strlen(char *str);

int main(int argc, char **argv){
    printf("count = %zd\n", ft_strlen(argv[1]));
    return (0);
}