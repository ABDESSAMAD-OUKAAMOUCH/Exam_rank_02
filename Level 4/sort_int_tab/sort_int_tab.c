void    sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    unsigned int j;
    int tmp;
    while (i < size - 1)
    {
        j = i + 1;
        while (j < size)
        {
            if(tab[i] > tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int tab[7] = {6,0,9,2,-1,5,1};
    sort_int_tab(tab, 7);
    int i = 0;
    while (i < 7)
    {
        printf("%d",tab[i]);
        i++;
    }
    return 0;
}
