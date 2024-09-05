#include <stdio.h>
#include <string.h>

ssize_t ft_write(int fd, const void *buf, ssize_t nbyte);

int main(int argc, char **argv){
    size_t size = strlen(argv[1]);
    size_t rtn = ft_write(1, argv[1], size);

    printf("rtn = %zd", rtn);
    return 0;
}