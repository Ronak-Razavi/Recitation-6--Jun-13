#include <stdio.h>

void printFibonacci(int n);
int fib(int n);

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms:\n", n);
    printFibonacci(n);

    return 0;
}

void printFibonacci(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }

    printf("\n");
}

int fib(int n)
{
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
