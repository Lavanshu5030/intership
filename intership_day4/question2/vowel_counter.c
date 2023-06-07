#include <string.h>
#include <ctype.h>
#include "vowel_counter.h"

void countVowels(const char* sentence, int* vowelCount) {
    for (int i = 0; i < strlen(sentence); i++) {
        switch (tolower(sentence[i])) {  // We can use the tolower() function to count vowel of both uppercase and lowercase
            case 'a':
                vowelCount[0]++;
                break;
            case 'e':
                vowelCount[1]++;
                break;
            case 'i':
                vowelCount[2]++;
                break;
            case 'o':
                vowelCount[3]++;
                break;
            case 'u':
                vowelCount[4]++;
                break;
        }
    }
}
