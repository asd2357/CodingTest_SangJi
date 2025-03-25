#include <stdio.h>
#define LEN_INPUT 20

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    int i = 0;
    while(1){
        if(s1[i] == 0){
            break;
        }
        if(s1[i] > 91){
            s1[i] = s1[i] - 32;
        } else{
            s1[i] = s1[i] + 32;
        }
        i++;
    }
    printf("%s", s1);
    return 0;
}
