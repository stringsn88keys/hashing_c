#include <stdio.h>
#include <limits.h>
#include <string.h>

char *string_reverse(char *str)
{
    char *p1, *p2;

    if (!str || !*str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}

char *int128_to_string(unsigned __int128 int128, char *buffer)
{
    char *ptr = buffer;

    while (int128)
    {
        ptr[0] = '0' + (char)(int128 % 10);
        int128 /= 10;
        ptr++;
    }
    string_reverse(buffer);
}

int main(int argc, char **argv)
{
    unsigned __int128 max128 = (unsigned __int128)(0 - 1);
    char buffer[40] = {'\0'};
    printf("%lu\n", sizeof(long long int));
    printf("%lu\n", sizeof(unsigned __int128));

    int128_to_string(max128, buffer);

    printf("%s\n", buffer);
}
