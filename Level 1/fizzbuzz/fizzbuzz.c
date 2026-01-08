
#include <unistd.h>

void putnbr(int n){
    char c;
    if(n >= 10){
        putnbr(n / 10);
        putnbr(n % 10);
    }else{
        c = n + '0';
        write(1,&c,1);
    }
}
int main(void)
{
    int i = 1;
    while ( i <= 100)
    {
        if(i % 3 == 0 && i % 5 == 0)
            write(1,"fizzbuzz\n",9);
        else if(i % 3 == 0)
            write(1,"fizz\n",5);
        else if(i % 5 == 0)
            write(1,"buzz\n",5);
        else{
            putnbr(i);
            write(1,"\n",1);
        }
        i++;
    }
    return 0;
}