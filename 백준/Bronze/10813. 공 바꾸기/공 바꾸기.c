#include <stdio.h>
int main(void) {
    int n,m;
    int i,j,temp;
    scanf("%d %d", &n, &m);
    int arr[101];
    for(int k = 1; k <= n; k++) {
        arr[k] = k;
  }
    for (int k = 0; k < m; k++) {
        scanf("%d %d", &i, &j);
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int k=1; k <= n; k++)
        printf("%d ", arr[k]);
    return 0;
}