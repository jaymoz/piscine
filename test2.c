#include <stdio.h>
#include<string.h>

int     ft_atoi(char *str)
{
    int i;
    int symbol = 1;
    int result = 0;
    i = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\f'
     || str[i] == '\r')
     {
         i++;
     }
     while (str[i] == '+' || str[i] == '-'){
         if (str[i++] == '-')
         {
             symbol = -1;
         }
     }
     while (str[i] && str[i] >= '0' && str[i] <= '9')
     {
         result = result * 10 + (int)str[i] - '0';
         i++;
     }
     return (symbol * result);


}
int main(void)
{
    char *str = "    \n\n\v\f\r\t -5234AAAgreghrsth";
    printf("%i\n", ft_atoi(str));
}