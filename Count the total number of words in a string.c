#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    int i=0, wrd=1;
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);	

    while(str[i]!='\0')
    {
        if(str[i]==' ') { wrd++; }
            i++;
    }
    printf("Total number of words in the string is : %d\n", wrd);
}