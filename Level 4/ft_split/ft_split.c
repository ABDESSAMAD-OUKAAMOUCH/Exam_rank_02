#include <stdio.h>
#include <stdlib.h>

int count_words(char *str)
{
    int i = 0;
    int len = 0;
    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        if(str[i] == '\0')
            break;    
        len++;
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            i++;
    }
    return (len);
}

char  *copy_words(char *str, int *index)
{
    char *res;
    int len = 0;
    int j = *index;
    while (str[j] && str[j] != ' ' && str[j] != '\t' && str[j] != '\n')
    {
        j++;
        len++;
    }
    res = malloc(len + 1);
    if(!res){
        return NULL;
    }
    int i = 0;
    while (i < len)
    {
        res[i] = str[*index];
        i++;
        (*index)++;
    }
    res[i] = '\0';
    return (res);
}

char    **ft_split(char *str)
{
    char **res;
    int i = 0;
    res = malloc((count_words(str) + 1) * sizeof(char *));
    if(!res)
        return NULL;
    int index = 0;
    while (str[index])
    {
        while (str[index] && (str[index] == ' ' || str[index] == '\t' || str[index] == '\n'))
            index++;
        if(str[index]){
            res[i] = copy_words(str,&index);
            if(!res[i]){
                return NULL;
            }
            i++;
        }
    }
    res[i] = NULL;
    return (res);
}

int main(int argc, char const *argv[])
{
    char **res  = ft_split("abcd efhg");
    int i = 0;
    while (res[i])
    {
        printf("%s\n",res[i]);
        i++;
    }
    
    return 0;
}
