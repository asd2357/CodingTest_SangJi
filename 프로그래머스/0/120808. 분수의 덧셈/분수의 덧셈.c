#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numer1, int denom1, int numer2, int denom2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(8);
    numer1 = numer1*denom2 + numer2*denom1;
    denom1 = denom1*denom2;
    int smaller;
    int bigger;
    if(numer1 > denom1){
        smaller = denom1;
        bigger = numer1;
    }
    else{
        smaller = numer1;
        bigger = denom1;
    }
    for(int i = 2;i < smaller+1;i++){
        while(1){
            if(smaller % i == 0){
                if(bigger % i == 0){
                    smaller /= i;
                    bigger /= i;
                } else break;
            } else break;
        }
    }
    if(numer1 > denom1){
        answer[0] = bigger;
        answer[1] = smaller;
    }
    else{
        answer[0] = smaller;
        answer[1] = bigger;
    }
    return answer;
}