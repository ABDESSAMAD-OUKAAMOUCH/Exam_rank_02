#include <unistd.h>
int main(int argc, char  *argv[])
{
    if (argc == 3){
        int i = 0;
        int j;
        int found;
        int l = 0;
        while (argv[1][i])
        {
            j = l;
            found = 0;
            while (argv[2][j])
            {
                if (argv[2][j] == argv[1][i]){
                    found = 1;
                    l = j + 1;
                    break;
                }
                j++;
            }
            if(!found)
                break;
            i++;
        }
        if (argv[1][i] == '\0'){
                write(1,"1",1);
        }else{
                write(1,"0",1);
        }
    }
    write(1,"\n",1);
    return 0;
}
