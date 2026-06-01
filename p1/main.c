#include <stdio.h>

int main(void){
    
    char arr[10] = {}; 
    char *p = nullptr,*q = nullptr ;
    
    for(p = arr; p < arr + 10; p++){
        scanf("%c", p);
    }

    char max_char = *p; // 가장 많이 나타난 문자
    int max_count = 0;      // 빈도 수
    
    
    for (p = arr; p < arr + 10; p++) { // 기존 문자
    
        int current_count = 0; // 기존 문자와 같은 문자 개수 count
        
        for (q = arr; q < arr + 10; q++) { 
            if (*p == *q) {
                current_count++;
            }
        }

        if (current_count > max_count) { //기존 문자 빈도수가 최대 빈도수 보다 클 경우
            max_count = current_count;
            max_char = *p;
        }
    }

    printf("%c %d\n", max_char, max_count);

    return 0;
}   
