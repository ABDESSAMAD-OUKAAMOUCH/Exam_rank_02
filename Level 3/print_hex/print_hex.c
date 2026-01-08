#include <unistd.h>
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

void print_h(int nb){
    char *hex = "0123456789abcdef";
    if (nb >= 16)
        print_h(nb / 16);
    write(1,&hex[nb % 16], 1);
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int nb = ft_atoi(argv[1]);
        print_h(nb);
    }
    write(1,"\n",1);
    return 0;
}
