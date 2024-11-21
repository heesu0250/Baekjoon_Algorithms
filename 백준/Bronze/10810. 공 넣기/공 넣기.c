#include <stdio.h>
int main(void) {
    int n,m;
    int i,j,k;
    scanf("%d %d", &n, &m);
    int arr[101] = {0};
    for (int r=0; r < m; r++) {
        scanf("%d %d %d", &i, &j, &k);
        for (int d = i; d <= j; d++) {
            arr[d] = k;
        }
    }
    for (int r=1; r <= n; r++)
        printf("%d ", arr[r]);
    return 0;
}