#include <unistd.h>

int main(int argc, char  *argv[])
{
    if(argc == 2){
        int i = 0;
        int    c;
        while (argv[1][i])
        {
            c = 0;
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                c = argv[1][i] + 1 - 'a';
            else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                c = argv[1][i] + 1 - 'A';
            else{
                write(1,&argv[1][i],1);
            }
            while (c > 0)
            {
                write(1,&argv[1][i],1);
                c--;
            }
            i++;
        }
    }
    write(1,"\n",1);
    return 0;
}
