#include<stdio.h>
#include<stdlib.h>

int main(void) {
	char a;
	printf("大小寫轉換\n輸入一個字母：");
	scanf_s(" %c", &a);
	if (a >= 65 && a <= 90) {
		char x;
		x = char(int(a) + 32);
		printf("%c的小寫為%c\n", a, x);
	}
	/*if (int(a) >= 97 && int(a) <= 122) {
		char x;
		x = char(int(a) - 32);
		printf("%c的大寫為%c\n", a, x);
	}*/
	return 0;
}
