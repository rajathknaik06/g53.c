/*You are working on a text transformation tool that requires converting uppercase letters to their corresponding lowercase forms. 



To achieve this, you want to create a program that takes an uppercase letter as input and generates its lowercase equivalent. 



Your task is to design a program that accomplishes this transformation and provides users with a helpful text manipulation utility.

Input format :
The input consists of an uppercase letter.

Output format :
The output prints the lowercase equivalent of the input letter.*/

#include <stdio.h>

int main() {
    char uppercaseLetter;
    scanf("%c", &uppercaseLetter);
    
    char lowercaseLetter = uppercaseLetter + 'a' - 'A';
    printf("%c", lowercaseLetter);
    
    return 0;
}
