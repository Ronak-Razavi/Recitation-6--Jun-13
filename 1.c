#include <stdio.h>

void foo(int array[], int length)
{
    int sum = 0;
    int product = 1;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    for (int i = 0; i < length; i++) {
        product *= array[i];
    }
    printf("%d, %d\n", sum, product);
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int length = sizeof(array) / sizeof(array[0]);
    foo(array, length);
    return 0;
}
