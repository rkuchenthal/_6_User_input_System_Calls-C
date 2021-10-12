#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    //we were instructed to print the number of entered commands
    printf("Number of commands entered: %i\n",argc);

    //loop counter
    int i = 1;
    //this loop iterates through all entered commands
    //and prints each system(cmd) to the cmd line.
    while(i <= argc-1){
        printf("Command #%i: %s\n", i,argv[i]);
        system(argv[i]);
        i++;
    }
}