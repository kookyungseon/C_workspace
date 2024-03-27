#include<stdio.h>

void main() {
	//강제 형변화
	printf("%.2f\n", (int)8.43 + 2.59);
	printf("%d\n", (int)(8.43 + 2.59));
	printf("%d\n", (int)8.43 + (int)2.59);

	//문자 형변환
	printf("%d\n", 'A' + 1);
	printf("%c\n", 'A' + 1);
}