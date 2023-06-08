#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int main() {
    FILE *inputFile, *outputFile;
    char buffer[BUFFER_SIZE];
    size_t bytesRead;

    // Open the input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Failed to open the input file.\n");
        return 1; // Exit the program with an error
    }

    // Open the output file in write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Failed to create the output file.\n");
        fclose(inputFile);
        return 1; // Exit the program with an error
    }

    // Read from the input file and write to the output file
    while ((bytesRead = fread(buffer, sizeof(char), BUFFER_SIZE, inputFile)) > 0) {
        size_t bytesWritten = fwrite(buffer, sizeof(char), bytesRead, outputFile);
        if (bytesWritten != bytesRead) {
            printf("Failed to write to the output file.\n");
            fclose(inputFile);
            fclose(outputFile);
            return 1; // Exit the program with an error
        }
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    printf("File copied successfully.\n");

    return 0;
}
