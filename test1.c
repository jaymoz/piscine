#include <unistd.h>
#include <stdio.h>
#include <string.h>

void    ft_swap(char *a, char *b)
{
    char c;
    c = *a;
    *a = *b;
    *b = c;
}

char    *ft_strrev(char *str)
{
   int i;
   int j;
   i = 0;
   while (str[i]){
       i++;
   }
   j = 0;
   while (j < i/2)
    {
        ft_swap(&str[j], &str[i - 1 - j]);
        j++;
    }
    return (str);


}
int main(void)
{
    char *c;

    c = "jacob";
    printf("%s\n", ft_strrev(c));
    return 0;
}