#include <stdio.h>

int main(void) {
    int N;
    int a[20] = {};
    int b[20] = {};

    int *p = nullptr;
    int *q = nullptr;

    scanf("%d", &N);


    for (p = a; p < a + N; p++) {
        scanf("%d", p);
    }


    for (q = b; q < b + N; q++) {
        scanf("%d", q);
    }

    
    p = a;

    
    q = b + N - 1;

   
    while (p < a + N) {

       
        if (p == a + N - 1)
            printf("%d", *p + *q);
        else
            printf("%d ", *p + *q);

        p++;
        q--;
    }

    return 0;
}
