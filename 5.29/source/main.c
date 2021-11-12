#include<stdio.h>
#include<stdlib.h>

int X(int a, int b) {
	int lcm=0;
	if (a > b) {
		for (int i = b; i <= a * b; i++) {
			if (i % a == 0 && i % b == 0) {
				lcm = i;
				return lcm;
				break;
			}
		}
	}if (a < b) {
		for (int i = a; i <= a * b; i++) {
			if (i % a == 0 && i % b == 0) {
				lcm = i;
				return lcm;
				break;
			}
		}
	}
}
int main(void) {
	int c,a, b;
	scanf_s("%d%d", &a, &b);
	c = X(a, b);
	printf("LCM is %d", c);
	return 0;
}