char    *ft_strcpy(char *s1, char *s2){
    int i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);    
}
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char dst[20];
    ft_strcpy(dst,"abcd");
    printf("%s",dst);
    return 0;
}
