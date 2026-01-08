int		max(int* tab, unsigned int len)
{
    if (len == 0){
        return 0;
    }
    unsigned int i = 1;
    int max_v = tab[0];
    while (i < len)
    {
        if(tab[i] > max_v)
            max_v = tab[i];
        i++;
    }
    return max_v;
}