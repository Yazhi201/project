#include "csapp.h"

int main() {
    int clientfd = socket(AF_INET, SOCK_STREAM, 0);
    printf("%d\n", clientfd);


}

