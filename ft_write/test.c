#include <stdio.h>
#include <string.h>

ssize_t ft_write(int fd, const void *buf, ssize_t nbyte);

int main(int argc, char **argv){
    char *str = "123456789";
    char *buffer = str;
//    size_t rtn = ft_write(1, 'this is a test string', 21);
//    printf("\nreturn = %zd", rtn);
    
    size_t  rtn = ft_write(1, buffer, 15);
    printf("\nreturn = %zd", rtn);

    return 0;
}