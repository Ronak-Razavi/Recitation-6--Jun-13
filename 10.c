#include <stdio.h>

void printFibonacci(int n);

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
    int first = 0, second = 1;

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", first);

        int next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}
