#include <unistd.h>

void ft_putnbr(int nbr){
    char c;
    if (nbr >= 10)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }else
    {
        c = nbr + '0';
        write(1,&c,1);
    }
}

int ft_atoi(char *str){
    int res = 0;
    int i = 0;
    int sign = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-' || str[i] == '+'){
        if(str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return res * sign;
}

int ft_isprime(int nb){
    if (nb < 2)
        return 0;
    int i = 2;
    while (i < nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int argc, char **argv)
{
    if(argc != 2){
        write(1,"0\n",2);
        return 0;
    }
    int nb = ft_atoi(argv[1]);
    if (nb <= 0)
    {
        write(1,"0\n",2);
        return 0; 
    }
    int i = 2;
    int sum = 0;
    while (i <= nb)
    {
        if (ft_isprime(i))
            sum += i;
        i++;
    }
    ft_putnbr(sum);
    write(1,"\n",1);
}