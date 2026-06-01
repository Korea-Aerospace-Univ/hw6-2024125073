#include <stdio.h>

int main(void) {
    int n;
    int arr1[20] = {};
    int arr2[20] = {};

    scanf("%d", &n);

    for (int i = 0; i < n; i++) { // 첫번째 배열 원소 입력
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n; i++) { // 두번째 배열 원소 입력
        scanf("%d", &arr2[i]);
    }


    int *p1 = arr1; // 앞에서부터 (배열의 시작점)
    int *p2 = arr2 + (n - 1); // 뒤에서부터 (배열의 마지막)


    for (int i = 0; i < n; i++) { // 역방향으로 더하기
        printf(" %d", *p1 + *p2); // 공백이 먼저 출력 => " %d"
        
        p1++; 
        p2--; 
    }
    printf("\n");

    return 0;
}
