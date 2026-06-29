#include <stdio.h>

int main() {
    char str[100];
    int i, freq[256] = {0};
    char maxChar;
    int max = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
        freq[(unsigned char)str[i]]++;

    for(i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            maxChar = (char)i;
        }
    }

    printf("Maximum occurring character = %c\n", maxChar);
    printf("Frequency = %d", max);

    return 0;
}