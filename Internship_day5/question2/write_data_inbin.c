#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    FILE *file = fopen("data.bin", "wb");
    if (file == NULL) {
        printf("Failed to create the file.\n");
        return 1; // Exit the program with an error
    }

    fwrite(array, sizeof(int), size, file);

    fclose(file);

    printf("File created successfully.\n");

    return 0;
}
