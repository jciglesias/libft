size_t ft_strlcat(char *dest, char *src, size_t size)
{
    size_t i;
    size_t a;
    size_t j;
 
    i = 0;
    a = 0;
    j = 0;
    while (dest[i])
        i++;
    while (src[a])
        a++;
    a = (a < size) ? i + a : i + size;
    while (j < size && src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (j);
}
