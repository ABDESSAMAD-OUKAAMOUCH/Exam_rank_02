#include <unistd.h>
void lowercase(char *str){
    int i = 0;
    while (str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
}

int main(int argc, char  **argv)
{
    if(argc > 1 ){
        int i = 1;
        int j;
        while (i < argc)
        {
            j = 0;
            lowercase(argv[i]);
            if(argv[i][j] >= 'a' && argv[i][j] <= 'z'){
                argv[i][j] -= 32;
            }
            while (argv[i][j])
            {
                write(1,&argv[i][j],1);
                if((argv[i][j] == ' ' || argv[i][j] == '\t') &&  argv[i][j+1] && argv[i][j+1] >= 'a' && argv[i][j+1] <= 'z'){
                    argv[i][j+1] -= 32;
                }
                j++;
            }
            write(1,"\n",1);
            i++;
        }        
    }else{
        write(1,"\n",1);
    }
    return 0;
}
