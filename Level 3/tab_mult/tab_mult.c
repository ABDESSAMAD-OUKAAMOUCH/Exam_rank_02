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
    
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return res;
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int i = 1;
        int res = 0;
        char c;
        int nb = ft_atoi(argv[1]);
        while (i < 10)
        {
            c = i + '0';
            write(1,&c,1);
            write(1," x ",3);
            ft_putnbr(nb);
            res = i * nb;
            write(1," = ",3);
            ft_putnbr(res);
            write(1,"\n",1);
            i++;
        }
    }else{
        write(1,"\n",1);
    }
    return 0;
}