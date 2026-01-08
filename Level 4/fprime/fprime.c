#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if(argc == 2){
        int nb = atoi(argv[1]);
        if(nb == 1){
            printf("1");
        }
        int i = 2;
        while (nb > 1)
        {
            if (nb % i == 0){
                printf("%d",i);
                nb = nb / i;
                if(nb > 1){
                    printf("*");
                }
            }else{
                i++;
            }
        }
    }
    printf("\n");
    return 0;
}