#include <stdio.h>
int X(int n) {
	int a, b, c;
	a = 0, b = 0, c = 1;
	for (int i = 0; i < n-1; i++) {
		a = b;
		b = c;
		c = a + b;
		printf("%d\n",b);
	}
}
int main() {
	int n;
	printf( "請輸入數量：");
	scanf_s("%d", &n);
	printf("0\n");
	X(n);
	return 0;
}
