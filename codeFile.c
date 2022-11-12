#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define PI 3.1415926535 

double sum(double a, double b) {

    return a + b;   //���ϱ� �Լ�    ���ϱ⿡ ���� �Լ�

}

double minus(double a, double b) {

    return a - b;    //���� �Լ�      ������ ���� �Լ�

}

double multiply(double a, double b) {

    return a * b;    //���ϱ� �Լ�  ���ϱ⿡ ���� �Լ�

}

double divide(double a, double b) {

    if (b == 0.0)return 0.0;  //������ �Լ� �����⿡ ���� �Լ�

    else return a / b;

}

double mod(double a, double b) {

    return (double)((int)a % (int)b);  //�������� ���ϴ� �Լ� 

}

double inverse(double a) {

    return 1.0 / a;    //������ ���ϴ� �Լ� 

}

double sign(double a) {

    return a * -1.0;   //���/������ �ٲٴ� �Լ� 

}



double exponential(double a, double b) {

    return pow(a, b);   //�ŵ����� �Լ� 

}

double inverse_exponential(double a, double b) {

    return pow(a, inverse(b));   //�ŵ� ������ �Լ� a^b ��� 

}

double mySin(double a) {

    double q = (PI * a) / 180.0;   //�ﰢ�Լ� ����(�ﰢ�Լ��� ������ ���� (�� q������ ���Ǹ� ���� ������ ���������� �Է¹ޱ� ������ q�� �����ؼ� �������� ��ȯ�����ش�.)

    return sin(q);    //sin�Լ� 

}

double myCos(double a) {

    double q = (PI * a) / 180.0;

    return cos(q);    //cos�Լ� 

}

double myTan(double a) {

    double q = (PI * a) / 180.0;

    return tan(q);    //tan�Լ� 

}

double myLog(double a) {

    return log(a);    //log�Լ� 

}

double factorial(double target) {

    double ret = 1;  //���丮�� �Լ�  for���� �̿��� ����

    for (double i = 1.0; i <= (int)target; ++i) {

        ret *= i;

    }

    return ret;

}
int main(void){
     printf("현재결과를 다음계산에 사용하겠습니까?(y or n) : ");

        fflush(stdin);



        scanf("%c", &ch);



        if (ch == 'y') {

            a = result;

            useRecycle = true;

        }

        else useRecycle = false;

    }

    return 0;
}