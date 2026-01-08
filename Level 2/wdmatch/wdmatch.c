#include <unistd.h>
int main(int argc, char *argv[])
{
    if(argc == 3){
        int i = 0;
        int k;
        int j = 0;
        int found;
        while (argv[1][i])
        {
            found = 0;
            k = j;
            while (argv[2][k])
            {
                if (argv[1][i] == argv[2][k])
                {
                    found = 1;
                    j = k + 1;
                    break;
                }
                k++;
            }
            if (!found)
                break;
            i++;
        }
        if (argv[1][i] == '\0'){
            i = 0;
            while (argv[1][i])
            {
                write(1,&argv[1][i],1);
                i++;
            }
        }
    }
    write(1,"\n",1);
    return 0;
}
