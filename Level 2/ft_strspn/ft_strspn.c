#include <stdlib.h>
size_t  ft_strspn(const char *s, const char *charset)
{
    size_t i = 0;
    size_t j;
    int check;
    while (s[i])
    {
        check = 0;
        j = 0;
        while (charset[j])
        {
            if(s[i] == charset[j]){
                check = 1;
                break;
            }
            j++;
        }
        if (check == 0)
            break;
        i++;
    }
    return i;
}