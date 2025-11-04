//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert uppercase to lowercase for simplicity
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 'a' - 'A';
    }

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("The character is a vowel.\n");
    } else {
        printf("The character is a consonant.\n");
    }

    return 0;
}
