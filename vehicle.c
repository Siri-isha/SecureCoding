#include <stdio.h>
#include <stdlib.h>
    
int main(int argc, char **argv) {
    char *items[] = {"boat", "car", "truck", "train"};
    int index = atoi(argv[4]);
    printf("You selected %s\n", items[index]);
}
