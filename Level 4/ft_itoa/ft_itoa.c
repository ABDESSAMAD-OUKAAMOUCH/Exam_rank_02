#include <stdlib.h>

void ft_convert(char *str, long nbr, int len){
    while (nbr > 0)
    {
        len--;
        str[len] = (nbr % 10) + '0';
        nbr /= 10;
    }
}

int ft_len(long nbr)
{
    int len = 0;;
    if (nbr <= 0)
        len = 1;
    if (nbr < 0){
        nbr = -nbr;
    }
    while (nbr > 0)
    {
        nbr /= 10;
        len++;
    }
    return len;
}

char	*ft_itoa(int nbr){
    char *res;
    int len;
    long n = nbr;
    len = ft_len(n);
    res = malloc(len + 1);
    if(!res)
        return NULL;
    res[len] = '\0';
    if (n == 0){
        res[0] = '0';
    }    
    if(n < 0){
        res[0] = '-';
        n = -n;
    }
    ft_convert(res,n,len);
    return (res);
}

#include <stdio.h>

int main(void)
{
    char *arr = ft_itoa(-1234);
    int i = 0;
    while (i < 6)
    {
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}
