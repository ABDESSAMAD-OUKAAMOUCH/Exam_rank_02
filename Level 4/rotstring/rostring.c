#include <unistd.h>
int main(int argc, char  *argv[])
{
    if (argc > 1)
    {
        int i = 0;
        int start;
        int end;
        int printed = 0;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        start = i;
        while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
            i++;
        end = i - 1;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i])
        {
            while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t'){
                write(1,&argv[1][i],1);
                printed = 1;
                i++;
            }
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
                i++;
            if(argv[1][i])
                write(1," ",1);
        }
        if (printed)
                write(1," ",1);
        while (start <= end)
        {
            write(1,&argv[1][start],1);
            start++;
        }
        
    }
    write(1,"\n",1);
    return 0;
}