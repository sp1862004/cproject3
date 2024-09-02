// Q.1 Alphabet Skipper
// Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a
// do-while loop.

#include <stdio.h>

int main() {
    char X = 'a'; 

    do {
        printf("%c , ", X);
        X += 4; 
    } while (X <= 'z');

    return 0;
}
