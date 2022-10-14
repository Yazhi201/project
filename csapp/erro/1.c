#include <stdio.h>
#include "csapp.h"

int main() {
    pid_t pid;
    int x = 1;
    pid = fork();
    char *ch[3];
    ch[0] = "./2";
    // ch[1] = NULL;
    if (pid == 0) {
        printf("chile : x=%d\n", ++x);
        printf("begin\n");
        execve(ch[0], ch, environ);
        printf("end\n");

        exit(0);
    }
    printf("parent: x=%d\n", --x);
    exit(0);
    

}