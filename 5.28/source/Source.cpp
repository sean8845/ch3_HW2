#include<stdio.h>
#include<stdlib.h>

int main(void) {
	char a;
	printf("�j�p�g�ഫ\n��J�@�Ӧr���G");
	scanf_s(" %c", &a);
	if (a >= 65 && a <= 90) {
		char x;
		x = char(int(a) + 32);
		printf("%c���p�g��%c\n", a, x);
	}
	/*if (int(a) >= 97 && int(a) <= 122) {
		char x;
		x = char(int(a) - 32);
		printf("%c���j�g��%c\n", a, x);
	}*/
	return 0;
}
