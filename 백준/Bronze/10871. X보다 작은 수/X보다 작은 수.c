#include <stdio.h>

int main(void) {
	int i,j;
	int n;
	int num[10000]; 
	int x;
	scanf("%d %d", &n, &x);

	for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		if (num[i] < x) {
			printf("%d ", num[i]);
		}
	}
	return 0;
}