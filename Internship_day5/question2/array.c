#include "array.h"
#include <stdio.h>

void readIntArrayFromFile(const char *filename, int *array, int size) {
    FILE *file = fopen(filename, "rb+");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return; // Exit the function
    }

    fread(array, sizeof(int), size, file);

    fclose(file);
}

int sumIntArray(const int *array, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

