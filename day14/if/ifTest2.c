#include <stdio.h>

void main() {
    char* qMsg = "����� ��������?";
    char* choiceMsg = "1.A\n2.B\n3.O\n4.AB";
    char* aMsg = "�Ĳ��ϰ� �����ϴ�";
    char* bMsg = "�������� ����";
    char* oMsg = "�米���� ����";
    char* abMsg = "���ϴ�";
    char* errorMsg = "�ٽ� �õ����ּ���";
    char* resultMsg = "";



    int choice = 0;

    printf("%s\n%s\n", qMsg, choiceMsg);
    scanf_s("%d", &choice);
    
    if (choice == 1) {
        //printf("%s\n", aMsg);
        resultMsg = aMsg;
    }
    else if (choice == 2) {
        //printf("%s\n", bMsg);
        resultMsg = bMsg;
    }
    else if (choice == 3) {
        //printf("%s\n", oMsg)
        resultMsg = oMsg;;
    }
    else if (choice == 4) {
        //printf("%s\n", abMsg);
        resultMsg = abMsg;
    }
    else {
        //printf("%s\n", errorMsg);
        resultMsg = errorMsg;
    }

    printf("%s\n", resultMsg); //�ϰ�ó��




}