#include <stdio.h>
int main(void) {
    char c[11]={};
    char *p=nullptr;
    char *q=nullptr;

    char max;
    int maxcnt=0;

    for (p=c ; p<c+10; p++) {
        scanf(" %c", p);
    }

    for (p=c ; p<c+10 ; p++) {
        int count=0;

        for (q=c ; q< c+10 ; q++) {
            if (*p==*q) count++;
        }

        if (count>maxcnt) {
            maxcnt=count;
            max=*p;
        }

    }
    printf("%c %d",max,maxcnt);
    return 0;
}
