#include <stdio.h>
#include <unistd.h>

int    ft_repeat(char c)
{
    int repeat;
    if (c >= 'A' && c <= 'Z')
    {
        repeat = c - 'A' + 1;
    }
    else if (c >= 'a' && c <= 'z')
    {
        repeat = c - 'a' + 1;
    }
    else{
        repeat = 1;
    }
    return repeat;
}

int main(int argc, char *argv[])
{
    int repeat;
    int i;
    if (argc == 2){
        i = 0;
        while (argv[1][i])
        {
            repeat = ft_repeat(argv[1][i]);
            while (repeat--)
            {
                write(1, argv[1] + i, 1);
            }
            i++;
        }

    }
    write(1, "\n", 1);

    return 0;
}
