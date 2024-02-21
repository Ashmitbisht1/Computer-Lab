#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int longestStart = -1;
    int longestEnd = -1;
    int currentStart = 0;
    int currentEnd = 0;
    int isAlphabet;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            isAlphabet = 1;
            currentEnd = i;
        } else {
            if (isAlphabet) {
                if (currentEnd - currentStart > longestEnd - longestStart) {
                    longestStart = currentStart;
                    longestEnd = currentEnd;
                }
                isAlphabet = 0;
            }
            currentStart = i + 1;
        }
    }

    if (isAlphabet && currentEnd - currentStart > longestEnd - longestStart) {
        longestStart = currentStart;
        longestEnd = currentEnd;
    }

    printf("Longest palindrome word: ");
    for (int i = longestStart; i <= longestEnd; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
