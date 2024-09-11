#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcpy(char *dest, const char *src);

void    test(char *str){
    char *src;
    char *dst;

    src = strdup(str);
    if (src == NULL){
        printf("src allocation failed");
        exit(-1);
    }
    dst = malloc(strlen(src) + 1);
    if (dst == NULL){
        printf("dst allocation failed");
        exit(-1);
    }
    dst = ft_strcpy(dst, src);
    
    printf("\nsrc = '%s'\ndst = '%s'\n\n", src, dst);
    free(src);
    free(dst);
}    

int main(void){ 
    test("test1");
    test("test2\n\n\ntest2");
    test("test333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333");
    test("test4 4 4 4      4 4 4  4   4");

    return (0);
}