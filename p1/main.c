#include <stdio.h>

int main(void) {
    char c[11] = {};  // 문자 10개를 저장할 배열 선언

    // 배열을 가리킬 포인터 선언
    char *p = nullptr;
    char *q = nullptr;

    char max='\0';   // 가장 많이 나타난 문자를 저장할 변수

    int maxcnt = 0;   // max의 빈도수를 저장할 변수

    
    // 포인터 p에 배열을 연결해, 포인터이용해 배열에 접근 
    for (p = c; p < c + 10; p++) {
        scanf(" %c", p);   // 문자 10개 입력
    }

    // 각 문자의 빈도수 계산
    for (p = c; p < c + 10; p++) {

        // 현재 문자의 개수를 저장할 변수
        int count = 0;

        // 배열 전체를 다시 검사
        for (q = c; q < c + 10; q++) {

            // 같은 문자가 있으면 count 증가
            if (*p == *q)
                count++;
        }

        // 현재 문자의 빈도수가 최대값보다 크면
        // 최대 빈도수와 문자 다시 저장 
        if (count > maxcnt) {
            maxcnt = count;
            max = *p;
        }
    }

    // 가장 많이 나온 문자와 그 빈도수 출력
    printf("%c %d", max, maxcnt);

    return 0;
}
