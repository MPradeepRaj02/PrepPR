#include <stdio.h>
#define size 100 

int test(char* s1, char* s2){
    int flag = 0;
    while (*s1 != '\0' || *s2 != '\0') {
        if (*s1 == *s2) {
            s1++;
            s2++;
        }
        else {
            flag = 1;
            break;
        }
    }
  return flag;
}

int main() {
    char str1[size], str2[size];
    int flg=0;
    printf("\nInput the 1st string : ");
    fgets(str1, sizeof str1, stdin);
    printf("Input the 2nd string : ");
    fgets(str2, sizeof str2, stdin);          

    flg = test(str1, str2);

    if(flg == 0)
       printf("\nStrings are equal.\n");
    else if(flg == 1)
      printf("\nStrings are not equal.");

    return 0;
}
