#include<stdio.h>

void main() {
	//���� ����ȭ
	printf("%.2f\n", (int)8.43 + 2.59);
	printf("%d\n", (int)(8.43 + 2.59));
	printf("%d\n", (int)8.43 + (int)2.59);

	//���� ����ȯ
	printf("%d\n", 'A' + 1);
	printf("%c\n", 'A' + 1);
}