#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26

int main() {
    char str[1000];
    int freq[ALPHABET_SIZE] = {0}; 
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
 
        if (ch >= 'A' && ch <= 'Z') {
            ch += 'a' - 'A';
        }
     
        if (ch >= 'a' && ch <= 'z') {

            freq[ch - 'a']++;
        }
    }

    printf("Alphabet frequencies in increasing order:\n");
    for (i = 0; i < ALPHABET_SIZE; i++) {
        int min_freq = -1;
        int min_index = -1;
       
        for (j = 0; j < ALPHABET_SIZE; j++) {
            if (freq[j] > 0 && (min_freq == -1 || freq[j] < min_freq)) {
                min_freq = freq[j];
                min_index = j;
            }
        }
        if (min_freq != -1) {
            printf("%c: %d\n", 'a' + min_index, min_freq);
            freq[min_index] = 0;
        }
    }

    return 0;
}
