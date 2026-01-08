int	    is_power_of_2(unsigned int n){
    unsigned int nb = 1;
    while (nb <= n)
    {
        if(nb == n)
            return 1;
        nb = nb * 2;
    }
    return 0;
}

#include <stdio.h>

int main()
{
    printf("%d",is_power_of_2(2));
    return 0;
}
