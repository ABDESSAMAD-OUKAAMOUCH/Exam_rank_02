#include <stdlib.h>
int     *ft_rrange(int start, int end){
    int size = 0;
    int tmp = start;
    int *res;
    if (end >= start){
        while (end >= tmp)
        {
            tmp++;
            size++;
        }
    }else{
        while (end <= tmp)
        {
            tmp--;
            size++;
        }
    }
    res = malloc(size * sizeof(int));
    if (!res)
        return NULL;
    int i = 0;
    if(end >= start){
        while (i < size)
        {
            res[i] = end - i;
            i++;
        }
    }else{
        while (i < size)
        {
            res[i] = end + i;
            i++;
        }
    }
    return (res);
}

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int *r = ft_rrange(1,3);
    int i = 0;
    while (i < 3)
    {
        printf("%d",r[i]);
        i++;
    }
    return 0;
}