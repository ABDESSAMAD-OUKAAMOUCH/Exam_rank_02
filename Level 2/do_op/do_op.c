#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        int res;
        int nb1 = atoi(argv[1]);
        int nb2 = atoi(argv[3]);
        if(argv[2][0] == '+')
            res = nb1+nb2;
        else if(argv[2][0] == '-')
            res = nb1-nb2;
        else if(argv[2][0] == '*')
            res = nb1*nb2;
        else if(argv[2][0] == '/')
            res = nb1/nb2;
        else if(argv[2][0] == '%')
            res = nb1%nb2;
        printf("%d",res);
    }
    printf("\n");
    return 0;
}
