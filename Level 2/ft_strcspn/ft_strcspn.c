#include <stdlib.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t j;
    int check;
    while (s[i])
    {
        check = 0;
        j = 0;
        while (reject[j])
        {
            if(s[i] == reject[j]){
                check = 1;
                break;
            }
            j++;
        }
        if (check == 1)
            break;
        i++;
    }
    return i;
}