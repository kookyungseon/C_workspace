#include<stdio.h>

void main() {
	int age = 10;
	float height = 125.3F;
	double weight = 35.955;
	char grade = 'A';
	char* name = "���漱";

	printf("���� %d��", age);
	printf("Ű %.1fcm", height);
	printf("������ %.2lfkg", weight); //�Ҽ����� �ڸ���, 6���� �ݿø��ȴ�
	printf("���� %c���", grade);
	printf("�̸� %s", name);
}