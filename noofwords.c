#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;
    int inWord = 0; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            if (!inWord) {
                count++;
                inWord = 1; 
            }
        } else {
            inWord = 0;
        }
    }

    printf("Number of words in the string: %d\n", count);

    return 0;
}
