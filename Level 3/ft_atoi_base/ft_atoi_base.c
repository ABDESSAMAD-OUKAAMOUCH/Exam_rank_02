int	ft_atoi_base(const char *str, int str_base){
    int i = 0;
    int sign = 1;

    if(!str || str_base < 2 || str_base > 16)
        return 0;

    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }
    int value;
    int res = 0;
    while (str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'f')
        {
            value = str[i] - 'a' + 10;
        }
        else if(str[i] >= 'A' && str[i] <= 'F')
        {
            value = str[i] - 'A' + 10;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            value = str[i] - '0';
        }else{
            break;
        }
        if (value >= str_base)
            break;
        res = res * str_base + value;
        i++;
    }
    return res * sign;
}
