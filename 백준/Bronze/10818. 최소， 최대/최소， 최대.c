#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n,i;
    int max_n=-1000000, min_n=1000000;
    scanf("%d", &n);
    int* num =(int*)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);
        if (num[i] <= min_n)
            min_n = num[i];
        if (num[i] >= max_n)
            max_n = num[i];
    }
    printf("%d %d", min_n, max_n);
    free(num);
    return 0;
}