#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strcmp(const char *s1, const char *s2);

void    test(char *s1, char *s2){
    printf("\ns1 = %s\ns2 = %s\nstrcmp = %d\nft_strcmp = %d\n", s1, s2, strcmp(s1, s2), ft_strcmp(s1, s2));
}

int main(void){
    test("a", "b");
    test("ta mere", "ta soeur");
    test("allo ", "allo");
    test("allo", "allo");
    return (0);
}