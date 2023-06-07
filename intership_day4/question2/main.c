#include <stdio.h>
#include "vowel_counter.h"

#define MAX_LENGTH 100

int main() {
    char sentence[MAX_LENGTH];
    int vowelCount[5] = {0};  // Array to store vowel counts [a, e, i, o, u]

    printf("Enter a sentence: ");
    fgets(sentence, MAX_LENGTH, stdin);

    countVowels(sentence, vowelCount);

    printf("Occurrences of vowels:\n");
    printf("a: %d\n", vowelCount[0]);
    printf("e: %d\n", vowelCount[1]);
    printf("i: %d\n", vowelCount[2]);
    printf("o: %d\n", vowelCount[3]);
    printf("u: %d\n", vowelCount[4]);

    return 0;
}
