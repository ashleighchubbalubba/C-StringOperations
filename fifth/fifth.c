#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define _GNU_SOURCE

int main(int argc, char **argv) {

    char output[100000];
    int x, i;
    int outputIndex = 0;

    for(x=1; x<argc; x++){
        for(i=0;i<strlen(argv[x]); i++){
            if(argv[x][i] == 'a' || argv[x][i] == 'e' || argv[x][i] == 'i'|| argv[x][i] == 'o' || argv[x][i] == 'u' || argv[x][i] == 'A' || argv[x][i] == 'E' || argv[x][i] == 'I'|| argv[x][i] == 'O' || argv[x][i] == 'U'){
                output[outputIndex] = argv[x][i];
                outputIndex++;
            }
        }
    }
    printf("%s", output);
    return 0;
}
