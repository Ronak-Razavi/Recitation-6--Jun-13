#include <stdio.h>

void printUnorderedPairs(int arrayA[], int lengthA, int arrayB[], int lengthB)
{
    for (int i = 0; i < lengthA; i++) {
        for (int j = 0; j < lengthB; j++) {
            if (arrayA[i] < arrayB[j]) {
                printf("%d, %d\n", arrayA[i], arrayB[j]);
            }
        }
    }
}

int main()
{
    int arrayA[] = {1, 2, 3, 4};
    int arrayB[] = {5, 6, 7, 8};
    int lengthA = sizeof(arrayA) / sizeof(arrayA[0]);
    int lengthB = sizeof(arrayB) / sizeof(arrayB[0]);

    printUnorderedPairs(arrayA, lengthA, arrayB, lengthB);
    return 0;
}
