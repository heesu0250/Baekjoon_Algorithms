#include <stdio.h>
int main(void) {
    int n=0,i;
    int max_n=-100;
    int num[9];
    for (i=0; i < 9; i++) {
        scanf("%d", &num[i]);
        if (num[i] >= max_n) {
            max_n=num[i];
            n=i;
        }
    }
    printf("%d\n%d", max_n, n+1);
    return 0;
}