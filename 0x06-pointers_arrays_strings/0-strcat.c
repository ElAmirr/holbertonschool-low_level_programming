char *_strcat(char *dest, char *src)
{
    //move till the end of s1
    int i = 0;
    while(dest[i] != '\0')
    {
        i++;
    }
    //coppuy s to s1
    int j = 0;

    while(src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
return dest; 
