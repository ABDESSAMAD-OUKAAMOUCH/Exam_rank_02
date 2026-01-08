#include <unistd.h>
void ft_putnbr(int nbr)
{
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
int main(int argc, char const *argv[])
{
    ft_putnbr(argc - 1);
    write(1,"\n",1);
    return 0;
}
