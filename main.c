#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>

size_t  ft_strlen(const char *s);
char    *ft_strdup(const char *s);
char    *ft_strcpy(char *dest, const char *src);
int     ft_strcmp(const char *s1, const char *s2);
ssize_t ft_write(int fd, const void *buf, size_t count);
ssize_t ft_read(int fd, void *buf, size_t count);


void    test_strlen(){
    printf("\n========================\n");
    printf("=        STRLEN        =\n");
    printf("========================\n");
    
    char    test_str1[] = "";
    printf("\ntest string = '%s'", test_str1);
    printf("\n ==> strlen = %ld\n", strlen(test_str1));
    printf(" ==> ft_strlen = %ld\n", ft_strlen(test_str1));
    
    char    test_str2[] = "Et quant à ceux qui ne croient pas en Nos versets, Nous les ferons entrer dans le Feu. Chaque fois que leur peau sera consumée, Nous leur donnerons une autre peau en échange afin qu'ils goûtent au châtiment. (Sourate An-Nisa, 4:56)";
    printf("\ntest string = '%s'", test_str2);
    printf("\n ==> strlen = %ld\n", strlen(test_str2));
    printf(" ==> ft_strlen = %ld\n", ft_strlen(test_str2));

    char    test_str3[] = "Le jour où les visages seront tournés dans le Feu, ils diront : 'Hélas pour nous! Si seulement nous avions obéi à Allah et obéi au Messager!' (Sourate Al-Ahzab, 33:66)"; 
    printf("\ntest string = '%s'", test_str3);
    printf("\n ==> strlen = %ld\n", strlen(test_str3));
    printf(" ==> ft_strlen = %ld\n\n", ft_strlen(test_str3));
}

void    test_strdup(){
    printf("\n\n========================\n");
    printf("=        STRDUP        =\n");
    printf("========================\n");
    
    char    test_str1[] = "";
    printf("\ntest string = '%s'", test_str1);
    printf("\n ==> strdup = '%s'\n", strdup(test_str1));
    printf(" ==> ft_strdup = '%s'\n", ft_strdup(test_str1));
    
    char    test_str2[] = "Et quant à ceux qui ne croient pas en Nos versets, Nous les ferons entrer dans le Feu. Chaque fois que leur peau sera consumée, Nous leur donnerons une autre peau en échange afin qu'ils goûtent au châtiment. (Sourate An-Nisa, 4:56)";
    printf("\ntest string = '%s'", test_str2);
    printf("\n ==> strdup = '%s'\n", strdup(test_str2));
    printf(" ==> ft_strdup = '%s'\n", ft_strdup(test_str2));

    char    test_str3[] = "Le jour où les visages seront tournés dans le Feu, ils diront : 'Hélas pour nous! Si seulement nous avions obéi à Allah et obéi au Messager!' (Sourate Al-Ahzab, 33:66)"; 
    printf("\ntest string = '%s'", test_str3);
    printf("\n ==> strdup = '%s'\n", strdup(test_str3));
    printf(" ==> ft_strdup = '%s'\n\n", ft_strdup(test_str3));
}

void    test_strcpy(){
    printf("\n\n========================\n");
    printf("=        STRCPY        =\n");
    printf("========================\n");
    
    char    test_str1[] = "";
    char    *copy1 = malloc(sizeof(char) * (strlen(test_str1) + 1));
    printf("\ntest string = '%s'", test_str1);
    printf("\n ==> strcpy = '%s'\n", strcpy(copy1, test_str1));
    printf(" ==> ft_strcpy = '%s'\n", ft_strcpy(copy1, test_str1));
    
    char    test_str2[] = "Et quant à ceux qui ne croient pas en Nos versets, Nous les ferons entrer dans le Feu. Chaque fois que leur peau sera consumée, Nous leur donnerons une autre peau en échange afin qu'ils goûtent au châtiment. (Sourate An-Nisa, 4:56)";
    char    *copy2 = malloc(sizeof(char) * (strlen(test_str2) + 1));
    printf("\ntest string = '%s'", test_str2);
    printf("\n ==> strcpy = '%s'\n", strcpy(copy2, test_str2));
    printf(" ==> ft_strcpy = '%s'\n", ft_strcpy(copy2, test_str2));

    char    test_str3[] = "Le jour où les visages seront tournés dans le Feu, ils diront : 'Hélas pour nous! Si seulement nous avions obéi à Allah et obéi au Messager!' (Sourate Al-Ahzab, 33:66)"; 
    char    *copy3 = malloc(sizeof(char) * (strlen(test_str3) + 1));
    printf("\ntest string = '%s'", test_str3);
    printf("\n ==> strcpy = '%s'\n", strcpy(copy3, test_str3));
    printf(" ==> ft_strcpy = '%s'\n\n", ft_strcpy(copy3, test_str3));
}

void    test_strcmp(){
    printf("\n\n========================\n");
    printf("=        STRCPY        =\n");
    printf("========================\n");
    
    char    *test_str1 = strdup("");
    char    *test_str2 = strdup("");
    printf("\ntest string 1 = '%s'", test_str1);
    printf("\ntest string 2 = '%s'", test_str2);
    printf("\n ==> strcmp = %d\n", strcmp(test_str1, test_str2));
    printf(" ==> ft_strcmp = %d\n", ft_strcmp(test_str1, test_str2));
    free(test_str1);
    free(test_str2);
    
    test_str1 = strdup("111111111");
    test_str2 = strdup("111111112");
    printf("\ntest string 1 = '%s'", test_str1);
    printf("\ntest string 2 = '%s'", test_str2);
    printf("\n ==> strcmp = %d\n", strcmp(test_str1, test_str2));
    printf(" ==> ft_strcmp = %d\n", ft_strcmp(test_str1, test_str2));
    free(test_str1);
    free(test_str2);

    test_str1 = strdup("aaaaaaaaaa");
    test_str2 = strdup("aaaaaz");
    printf("\ntest string 1 = '%s'", test_str1);
    printf("\ntest string 2 = '%s'", test_str2);
    printf("\n ==> strcmp = %d\n", strcmp(test_str1, test_str2));
    printf(" ==> ft_strcmp = %d\n\n", ft_strcmp(test_str1, test_str2));
    free(test_str1);
    free(test_str2);

    test_str1 = strdup("aaaaaaa");
    test_str2 = strdup("aaaaaaaaaaa");
    printf("\ntest string 1 = '%s'", test_str1);
    printf("\ntest string 2 = '%s'", test_str2);
    printf("\n ==> strcmp = %d\n", strcmp(test_str1, test_str2));
    printf(" ==> ft_strcmp = %d\n\n", ft_strcmp(test_str1, test_str2));
    free(test_str1);
    free(test_str2);
}

void    test_write(){
    printf("\n\n========================\n");
    printf("=        WRITE        =\n");
    printf("========================\n");

    char    test_str[] = "this is a lonnnnnnnnnnnnnnnnnnnnnng test string";
    int     rtn_val;
    printf("\ntest string = '%s'", test_str);

    printf("\n\n ==> write(1, test_str, strlen(test_str)) = ");
    fflush(stdout);
    rtn_val = write(1, test_str, strlen(test_str));
    printf("\n   ===> return value = %d", rtn_val);
    printf("\n ==> ft_write(1, test_str, strlen(test_str)) = ");
    fflush(stdout);
    rtn_val = ft_write(1, test_str, strlen(test_str));
    printf("\n   ===> return value = %d", rtn_val);
    fflush(stdout);

    printf("\n\n ==> write(1, test_str, 0) = ");
    fflush(stdout);
    rtn_val = write(1, test_str, 0);
    printf("\n   ===> return value = %d", rtn_val);
    printf("\n ==> ft_write(1, test_str, 0) = ");
    fflush(stdout);
    rtn_val = ft_write(1, test_str, 0);
    printf("\n   ===> return value = %d", rtn_val);

    printf("\n\n ==> write(1, test_str, 10) = ");
    fflush(stdout);
    rtn_val = write(1, test_str, 7);
    printf("\n   ===> return value = %d", rtn_val);
    printf("\n ==> ft_write(1, test_str, 10) = ");
    fflush(stdout);
    rtn_val = ft_write(1, test_str, 7);
    printf("\n   ===> return value = %d\n", rtn_val);

    int     fd1 = open("write_read.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
    int     fd2 = open("ft_write_read.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
    printf("\nwrite(1, test_str, strlen(test_str)) in write_read.txt");
    printf("\nft_write(1, test_str, strlen(test_str)) in ft_write_read.txt\n");
    write(fd1, test_str, strlen(test_str));
    ft_write(fd2, test_str, strlen(test_str));
}

void    test_read(){
    printf("\n\n========================\n");
    printf("=         READ         =\n");
    printf("========================\n");

    int     fd1 = open("write_read.txt", O_RDONLY, 0777);
    int     fd2 = open("ft_write_read.txt", O_RDONLY, 0777);
    int     rtn_val;
    char    buffer1[10 + 1];
    char    buffer2[10 + 1];

    printf("\n\n ==> read(fd1, buffer1, 10) = ");
    rtn_val = read(fd1, buffer1, 10);
    if (rtn_val != -1) {
        buffer1[rtn_val] = '\0';
    }
    printf("%s\n", buffer1);
    printf("   ===> return value = %d\n", rtn_val);

    printf("\n\n ==> ft_read(fd2, buffer2, 10) = ");
    rtn_val = ft_read(fd2, buffer2, 10);
    if (rtn_val != -1) {
        buffer2[rtn_val] = '\0';
    }
    printf("%s\n", buffer2);
    printf("   ===> return value = %d\n", rtn_val);

}


int main(void){
    test_strlen();
    test_strdup();
    test_strcpy();
    test_strcmp();
    test_write();
    test_read();
    
    return 69;
}