#include <stdio.h> 

int main(void) {
    int i; 
    char letter;
    char vowels[5] = "aeiou";

    printf("Enter your letter >>> ");
    scanf(" %c", &letter); 

    for (i = 0; i < 5; i++) {
        if (letter == vowels[i]) {
            printf("Vowel! \n");
            return 0; 
        }
    }

    printf("Consonant \n");
    return 0; 
}
