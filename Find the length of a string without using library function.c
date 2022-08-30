#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    int len = 0;

    fgets(str, sizeof str, stdin);

    while(str[len] != '\0') { len++; }
    printf("Length of String: %d",len-1);

    return 0;
}