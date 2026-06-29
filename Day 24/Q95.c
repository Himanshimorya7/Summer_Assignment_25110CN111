#include <stdio.h>

int main() {
    char str[200], longest[100];
    int i = 0, j = 0, maxLen = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(1) {
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            if(i - start > maxLen) {
                maxLen = i - start;
                for(j = 0; j < maxLen; j++)
                    longest[j] = str[start + j];
                longest[maxLen] = '\0';
            }
            start = i + 1;
        }

        if(str[i] == '\0')
            break;

        i++;
    }

    printf("Longest word = %s", longest);

    return 0;
}