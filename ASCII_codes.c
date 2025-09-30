#include <stdio.h>

int main() {
    char character;
    int choice, character2;

    printf("\n\tEnter your choice\n\t1: Character to ASCII\n\t2: ASCII to Character\n--------> ");
    scanf("%d", &choice);
    getchar(); // To consume the leftover newline from previous input

    if (choice == 1) {
        printf("\n\tEnter a character to get its ASCII code ------->: ");
        scanf("%c", &character);
        printf("The ASCII code of '%c' is %d\n", character, character);
    } 
    else if (choice == 2) {
        printf("\n\tEnter an ASCII code to get its character ------->: ");
        scanf("%d", &character2);
        printf("The character for ASCII code %d is '%c'\n", character2, character2);
    } 
    else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}
