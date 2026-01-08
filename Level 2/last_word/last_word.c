#include <unistd.h>
int main(int argc, char const **argv)
{
    if(argc == 2)
    {
        int i = 0;
        int start;
        int end; 
        if(argv[1][i])
        {
            while (argv[1][i])
                i++;
            end = i - 1;
            while (end >= 0 && (argv[1][end] == ' ' || argv[1][end] == '\t'))
                end--;
            start = end;
            while (start >= 0 && argv[1][start] != ' ' && argv[1][start] != '\t')
                start--;
            start++;
            while (start <= end)
            {
                write(1,&argv[1][start],1);
                start++;
            }
        }
    }
    write(1,"\n",1);
    return 0;
}
