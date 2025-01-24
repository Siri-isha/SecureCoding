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

 //Give an upper bound to the input
 if(strlen(argv[1] > 250)
   fprintf("The input file name is invalid as it is longer than 250 characters");
 
 char str[250];

 //check if the input string contains special characters like | or &
  str = argv[1];
 int i = 0;
 while (str[i] != '\0') {
   if(str[i] == '|' || str[i] == '&') {
            fprintf("Character at index %d: %c\n", i, str[i]);
    return -1;
   }
  i++;
 }
    char cmd[BUFSIZE] = "wc -c < ";
    
    strcat(cmd, argv[1]);
    system(cmd);
}
