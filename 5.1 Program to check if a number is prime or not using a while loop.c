#include <stdio.h>
void main()
{
    int num, i = 1, c = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    while (i <= num)
    {
        if (num % i == 0)
            c++;
        i++;
    }
    if (c == 2)
        printf("\n%d is prime number", num);
    else
        printf("\n%d is not prime number", num);
}