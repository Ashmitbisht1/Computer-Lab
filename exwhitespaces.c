#include <stdio.h>

int main() {
    char str[1000];
    int i, j;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
       
        if (str[i] == ' ') {
            for (j = i + 1; str[j] == ' ' && str[j] != '\0'; j++)
                ;
            
            
            if (str[j] != ' ' && str[j] != '\0') {
              
                str[++i] = str[j];
            } else {
                int k;
                for (k = i; str[k] != '\0'; k++) {
                    str[k] = str[k + 1];
                }
                i--; 
            }
        }
    }

    printf("String with extra white spaces removed: %s\n", str);

    return 0;
}
