#include <stdio.h>
int main(void) {

    int N;   // 배열의 크기를 입력받을 변수

    // 정수 배열 2개 선언
    int a[20] = {};
    int b[20] = {};

    // 배열을 가리킬 포인터 선언
    int *p = nullptr;
    int *q = nullptr;

    scanf("%d", &N);   // 배열의 크기 입력

    // 첫 번째 배열 입력
    // 포인터 p를 이용하여 배열 접근
    for (p = a; p < a + N; p++) {
        scanf("%d", p);
    }

    // 두 번째 배열 입력
    // 포인터 q를 이용하여 배열 접근
    for (q = b; q < b + N; q++) {
        scanf("%d", q);
    }

   
    p = a;    // p는 첫 번째 배열의 처음 원소를 가리킴

    q = b + N - 1;   // q는 두 번째 배열의 마지막 원소를 가리킴

    // 첫 번째 배열은 앞에서부터 접근
    // 두 번째 배열은 뒤에서부터 접근
    while (p < a + N) {

        printf(" %d", *p + *q);   // 두 원소의 합 출력

        p++;   // p는 다음 원소로 이동
        q--;   // q는 이전 원소로 이동
    }

    return 0;


    
}
