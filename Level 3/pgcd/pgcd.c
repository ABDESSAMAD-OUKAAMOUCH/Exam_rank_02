#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc == 3){
        int nb1 = atoi(argv[1]);
        int nb2 = atoi(argv[2]);
        int tmp;
        while (nb2 != 0)
        {
            tmp = nb2;
            nb2 = nb1 % nb2;
            nb1 = tmp;
        }
        printf("%d",nb1);
    }
    printf("\n");
    return 0;
}