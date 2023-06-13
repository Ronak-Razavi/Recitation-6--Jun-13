#include <stdio.h>

void reverse(int array[], int length)
{
    for (int i = 0; i < length / 2; i++) {
        int other = length - i - 1;
        int temp = array[i];
        array[i] = array[other];
        array[other] = temp;
    }
}

int main()
{
    int array[] = {1, 2, 3, 4};
    int length = sizeof(array) / sizeof(array[0]);

    reverse(array, length);

    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
