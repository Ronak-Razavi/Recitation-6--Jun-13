#include <stdio.h>

int sqrt(int n);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = sqrt(num);
    if (result != -1)
        printf("Square root: %d\n", result);
    else
        printf("No square root found.\n");

    return 0;
}

int sqrt(int n)
{
    for (int guess = 1; guess * guess <= n; guess++)
    {
        if (guess * guess == n)
        {
            return guess;
        }
    }
    return -1;
}
