#include <stdio.h>
void hanoi(int n, char A, char B, char C)
{
    if (n > 0) {
        hanoi(n - 1, A, C, B);
        printf("���ʽL�l %d �q�W %c ��W %c\n", n, A, C);
        hanoi(n - 1, B, A, C);
    }
}

int main() {
    int n;
    printf("(�q�p��j�s��1�B2�B3....)\n�п�J�L�ơG");
    scanf_s("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}