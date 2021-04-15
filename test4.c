#include <stdio.h>
int     is_power_of_2(unsigned int n)
{
    while (n % 2 == 0)
    {
        n = n/2;

    }
    if (n == 1)
    {
        return (1); 
    }
    return (0);


}

void ft_putnbr(int n)
{
   
    if (n < 0){
        ft_putchar('-');
        n = -n;
    }
    if (n > 10){
        ft_putnbr(n / 10);
    }
    ft_putchar('0' +  n % 10);
    
}

int main(void)
{
    printf("%i\n", is_power_of_2(74));
}
