#include <stdlib.h>
size_t ft_strlen(char *str){
    size_t i= 0;
    while (str[i])
        i++;
    return (i);
}
char    *ft_strdup(char *src){
    char *str;
    int i = 0;
    str = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    while (src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}