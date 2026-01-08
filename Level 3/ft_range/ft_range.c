#include <stdlib.h>
int *ft_range(int start, int end)
{
    int *res;
    int size = 0;
    int tmp = start;
    if(start >= end){
        while (tmp >= end)
        {
            size++;
            tmp--;
        }
    }
    else{
        while (tmp <= end)
        {
            size++;
            tmp++;
        }
    }
    res = malloc(size * sizeof(int));
    if (res == NULL)
        return NULL;
    int i = 0;
    if (start >= end){
        while (i < size)
        {
            res[i] = start - i;
            i++;;
        }
    }
    else{
        while (i < size)
        {
            res[i] = start + i;
            i++;;
        }
    }
    return res;
}


#include <stdio.h>

int main(int argc, char const *argv[])
{
    int *res = ft_range(1,5);
    int i = 0;
    while (i < 5)
    {
        printf("%d",res[i]);
        i++;
    }
    return 0;
}
