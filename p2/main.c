#include <stdio.h>

int main(void) {
    int n;
    int arr1[20] = {};
    int arr2[20] = {};
    int *p1 = nullptr , *p2 = nullptr ; 
    

    scanf("%d", &n);

    for (p1 = arr1; p1 < arr1 + n; p1++) { // 첫번째 배열 원소 입력
        scanf("%d", p1);
    }

    for (p2 = arr2; p2 < arr2 + n; p2++) { // 두번째 배열 원소 입력
        scanf("%d", p2);
    }


    p1 = arr1; // 앞에서부터 (배열의 시작점)
    p2 = arr2 + (n - 1); // 뒤에서부터 (배열의 마지막)


    for (p1 = arr1; p1 < arr1 + n; p1++,p2--) { // 역방향으로 더하기
        printf(" %d", *p1 + *p2); // 공백이 먼저 출력 => " %d"
    }
    printf("\n");

    return 0;
}
