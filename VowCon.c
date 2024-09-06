#include <stdio.h>

int countVowelsAndConsonants(const char *str, int *vowels, int *consonants) {
	
    for (int i = 0; str[i] != '\0'; ++i) {
        char currentChar = str[i];
        if ((currentChar >= 'a' && currentChar <= 'z') || (currentChar >= 'A' && currentChar <= 'Z')) {
            *vowels += (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' ||
                        currentChar == 'o' || currentChar == 'u' ||
                        currentChar == 'A' || currentChar == 'E' || currentChar == 'I' ||
                        currentChar == 'O' || currentChar == 'U');
            *consonants += !(currentChar == 'a' || currentChar == 'e' || currentChar == 'i' ||
                             currentChar == 'o' || currentChar == 'u' ||
                             currentChar == 'A' || currentChar == 'E' || currentChar == 'I' ||
                             currentChar == 'O' || currentChar == 'U');
        }
    }
    return 0; 
}

int main() {
	
    char inputString[100];

    printf("Enter a string: ");
    
    char c;
    int i = 0;
    
    while (i < 99 && scanf("%c", &c) == 1 && c != '\n') {
        inputString[i++] = c;
    }
    inputString[i] = '\0';

    int vowels = 0, consonants = 0;

    countVowelsAndConsonants(inputString, &vowels, &consonants);

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);

    return 0;
}
