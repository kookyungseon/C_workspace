#include<stdio.h>

void main() {
	//나이, 키, 몸무게 입력받길
	//[초기값]
	//정수 : 0
	//실수 :0.0
	//문자 :''
	int age = 0;
	double height = 0.0, weight = 0.0;

	printf("나이 : ");
	scanf_s("%d", &age);

	printf("키 : ");
	scanf_s("%lf", &height);

	printf("몸무게 : ");
	scanf_s("%lf", &weight);

	printf("제 나이는 %d살이고, 키는 %.2lfcm입니다. \n몸무게는 %.2lfkg입니다.", age, height, weight);


}