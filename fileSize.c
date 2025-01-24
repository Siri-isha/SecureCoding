#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 256

// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
    // Ensure that the user supplied exactly one command line argument
    if (argc != 2) { 
        fprintf(stderr, "Please provide the address of a file as an input.\n");
        return -1;
    }

    // Give an upper bound to the input
    if (strlen(argv[1]) > 250) {
        fprintf(stderr, "The input file name is invalid as it is longer than 250 characters.\n");
        return -1;
    }

    char str[250];
    strncpy(str, argv[1], sizeof(str) - 1);
    str[sizeof(str) - 1] = '\0';

    // Check if the input string contains special characters like | or &
    int i = 0;
    while (str[i] != '\0') {
        if (!isalnum((unsigned char)str[i]) && str[i] != '.' && str[i] != '/' && str[i] != '_') {
            fprintf(stderr, "Special Character at index %d: %c\n", i, str[i]);
            return -1;
        }
        i++;
    }

    FILE *file = fopen(str, "r");
    if (file == NULL) {
        perror("Error opening file");
        return -1;
    }

    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    fclose(file);

    printf("File size: %ld bytes\n", fileSize);

    return 0;
}
