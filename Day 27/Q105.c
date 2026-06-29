#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int words = 0;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File not found.");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == ' ' || ch == '\n')
            words++;
    }

    fclose(fp);

    printf("Total words = %d\n", words + 1);

    return 0;
}