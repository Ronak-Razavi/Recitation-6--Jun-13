#include <stdio.h>

int powerOf2(int n);

int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = powerOf2(n);
    printf("Result: %d\n", result);

    return 0;
}

int powerOf2(int n)
{
    if (n < 1)
    {
        return 0;
    }
    else if (n == 1)
    {
        printf("1\n");
        return 1;
    }
    else
    {
        int prev = powerOf2(n / 2);
        int curr = prev * 2;
        printf("%d\n", curr);
        return curr;
    }
}
