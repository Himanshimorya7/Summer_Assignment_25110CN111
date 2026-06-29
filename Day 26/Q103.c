#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("data.txt", "a");

    if(fp == NULL) {
        printf("File not found.");
        return 1;
    }

    fprintf(fp, "\nThis line is appended.");

    fclose(fp);

    printf("Data appended successfully.");

    return 0;
}