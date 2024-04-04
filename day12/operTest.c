#include<stdio.h>

void main(){
    //두 정수를 입력하고 대소 비교하기
    int num1=0, num2=0, result=0;
    char*N1msg="첫번째 정수 :";
    char*N2msg="두번째 정수 :";

    int condition1=0,condition2=0;
    char*format="";


    printf("%s",N1msg);
    scanf("%d", &num1);


    printf("%s",N2msg);
    scanf("%d", &num2);

    condition1 = num1> num2;
    condition2 = num1 == num2;

   format=condition2 ? "%s" : "더 큰 값: %d";

    // num1 보다 num2가 더 크면 결과 출력,
    //아니면 num1과 num2가 같으면 두수가 같습니다. 
    //아니면 더 큰값 num2
    // num1 >num2?printf("더 큰 값 : %d",num1):
    //     num1== num2? printf("두 수가 같습니다.") : printf("더 큰 값 : %d",num2);

    printf(format,condition1 ? num1:
    condition2? "두수가 같습니다":num2);

  

    // printf("%d %d\n",num1, num2);

    // result=num1 >num2? num1:num2;
    // printf("더 큰 값: %d\n",result);




}