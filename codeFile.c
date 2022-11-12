#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

double sum(double a, double b) {

    return a + b;   //더하기 함수    더하기에 대한 함수

}

double minus(double a, double b) {

    return a - b;    //뺄셈 함수      뺄셈에 대한 함수

}

double multiply(double a, double b) {

    return a * b;    //곱하기 함수  곱하기에 대한 함수

}

double divide(double a, double b) {

    if (b == 0.0)return 0.0;  //나누기 함수 나누기에 대한 함수

    else return a / b;

}

double mod(double a, double b) {

    return (double)((int)a % (int)b);  //나머지를 구하는 함수 

}

double inverse(double a) {

    return 1.0 / a;    //역수를 구하는 함수 

}

double sign(double a) {

    return a * -1.0;   //양수/정수를 바꾸는 함수 

}



double exponential(double a, double b) {

    return pow(a, b);   //거듭제곱 함수 

}

double inverse_exponential(double a, double b) {

    return pow(a, inverse(b));   //거듭 제곱근 함수 a^b 계산 

}

double mySin(double a) {

    double q = (PI * a) / 180.0;   //삼각함수 시작(삼각함수의 단위는 라디안 (단 q에대한 정의를 하지 않으면 정수값으로 입력받기 때문에 q를 정의해서 라디안으로 변환시켜준다.)

    return sin(q);    //sin함수 

}

double myCos(double a) {

    double q = (PI * a) / 180.0;

    return cos(q);    //cos함수 

}

double myTan(double a) {

    double q = (PI * a) / 180.0;

    return tan(q);    //tan함수 

}

double myLog(double a) {

    return log(a);    //log함수 

}

double factorial(double target) {

    double ret = 1;  //팩토리얼 함수  for문을 이용한 정의

    for (double i = 1.0; i <= (int)target; ++i) {

        ret *= i;

    }

    return ret;

}
int main(void){
    
}