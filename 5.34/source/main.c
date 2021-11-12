#include <stdio.h>
#include <stdlib.h>

int P(int a, int b) {
	int l=a;
	for (int i = 1; i < b; i++) {
		a = a * l;
	}
	return a;
}
int main(void) {
	int z,x, y;
	scanf_s("%d%d", &x, &y);
	z=P(x, y);
	printf("x^y=%d",z);
	return 0;
}