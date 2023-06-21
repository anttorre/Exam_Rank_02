int ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
    int sign = 1;
    int max_digit;
    
    if (*str == '-')
    {
        sign = -1;
        ++str;
    }
    if (str_base <= 10)
        max_digit = str_base + '0' - 1;
    else
        max_digit = str_base - 10 + 'a' - 1;
    while (*str != '\0')
    {
        int digit = *str;
        if (digit >= 'A' && digit <= 'Z')
            digit = digit + ('a' - 'A');
        if (digit >= '0' && digit <= max_digit)
        {
            if (digit > '9')
                digit = digit - 'a' + 10;
            else
                digit = digit - '0';
            result = result * str_base + digit;
        }
        else
            break;
        ++str;
    }
    return result * sign;
}
