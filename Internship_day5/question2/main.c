#include "array.h"
#include <stdio.h>

int main() {
    int array[10];

    readIntArrayFromFile("data.bin", array, 10);

    int sum = sumIntArray(array, 10);

    printf("Sum of array elements: %d\n", sum);

    return 0;
}

