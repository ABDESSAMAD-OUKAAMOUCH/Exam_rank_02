#include <stdio.h>
char    *ft_strrev(char *str){
    int i = 0;
    int j = 0;
    char tmp;
    while(str[i])
        i++;
    i--;
    while (i > j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i--;
        j++;
    }
    return str;
}

int main(int argc, char const *argv[])
{
    char str[] = "abcd";
    ft_strrev(str);
    printf("%s",str);
    return 0;
}
