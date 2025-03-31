#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(1000);
    answer = my_string;
    int i = 0;
    int j = s;
    for(;s < j + strlen(overwrite_string);s++){
        answer[s] = overwrite_string[i];
        i++;
    }
    printf("%s", answer);
    return answer;
}