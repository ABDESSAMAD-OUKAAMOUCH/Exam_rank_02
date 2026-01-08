#include <unistd.h>
int main(int argc, char *argv[])
{
    if (argc == 3){
        int i = 0;
        int found;
        int print;
        int j;
        while (argv[1][i])
        {
            found = 0;
            j = 0;
            while (argv[2][j])
            {
                if(argv[1][i] == argv[2][j])
                {
                    found = 1;
                    break;
                }
                j++;
            }
            int k = 0;
            print = 0;
            while (k < i)
            {
                if (argv[1][i] == argv[1][k]){
                    print = 1;
                    break;
                }
                k++;
            }
            if (found && !print)
                write(1,&argv[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
    return 0;
}