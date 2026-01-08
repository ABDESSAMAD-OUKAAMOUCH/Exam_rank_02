#include <unistd.h>
int main(int argc, char **argv)
{
    if(argc == 3){
        int i = 0;
        int j;
        int found;
        while (argv[1][i])
        {
            found = 0;
            j = 0;
            while (j < i)
            {
                if (argv[1][i] == argv[1][j]){
                    found = 1;
                    break;
                }
                j++;
            }
            if (found == 0)
                 write(1,&argv[1][i],1);
            i++;
        }
        i = 0;
        while (argv[2][i])
        {
            found = 0;
            j = 0;
            int k = 0;
            while (argv[1][k])
            {
                if (argv[1][k] == argv[2][j])
                {
                    found = 1;
                    break;
                }
                k++;
            }
            while (found == 0 && j < i)
            {
                if(argv[2][i] == argv[2][j])
                {
                    found = 1;
                    break;
                }
                j++;
            }
            if (found == 0)
                write(1,&argv[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
    return 0;
}
