#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
    int i, j;

    i = 0;
    j = 0;

    while (dest[i])
        i++;
    
    while (src[j])
    {
        dest[i] = src[j];
        i++;
        j++; 
    }
    dest[i] = '\0';

    return(dest);
}

int main(void)
{
    char buffer1[50] = "Hello";
    char buffer2[50] = "";
    char buffer3[50] = "42";
    char buffer4[50] = "Base";

    printf("Test 1:\n");
    printf("Before: \"%s\"\n", buffer1);
    ft_strcat(buffer1, " World!");
    printf("After:  \"%s\"\n\n", buffer1);

    printf("Test 2 (empty dest):\n");
    printf("Before: \"%s\"\n", buffer2);
    ft_strcat(buffer2, "Only source");
    printf("After:  \"%s\"\n\n", buffer2);

    printf("Test 3 (empty src):\n");
    printf("Before: \"%s\"\n", buffer3);
    ft_strcat(buffer3, "");
    printf("After:  \"%s\"\n\n", buffer3);

    printf("Test 4 (both non-empty):\n");
    printf("Before: \"%s\"\n", buffer4);
    ft_strcat(buffer4, " Camp");
    printf("After:  \"%s\"\n\n", buffer4);

    return 0;
}