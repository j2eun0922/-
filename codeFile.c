#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define PI 3.1415926535 

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

    double q = (PI * a) / 180.0;  

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
    
    int opCode;

    double a = 0.0, b = 0.0, result = 0.0;

    bool useRecycle = false;

    char ch;



    double (*op_1[14])(double) =

    { NULL,NULL,NULL,NULL,NULL,inverse,sign,factorial,NULL,mySin,myCos,myTan,myLog,factorial };



    double (*op_2[14])(double, double) =

    { sum,minus,multiply,divide,mod,NULL,NULL,NULL,exponential,inverse_exponential,NULL,NULL,NULL,NULL };



    printf("알립니다. 거듭제곱의 계산과 팩토리얼의 계산값은 같게나옵니다.\n");

    printf("특정계산은 소숫점 자릿수로 나옵니다(sin,cos,tan,역수)\n");

    printf("이전에 했던 결과값을 다음계산에 추가할 수 있습니다.\n");

    printf("\n\n");



    while (true) {



        printf("~연산 종류~\n");

        printf("0 : 덧셈(2)\n");

        printf("1 : 뺄셈(2)\n");

        printf("2 : 곱셈(2)\n");

        printf("3 : 나눗셈(2)\n");

        printf("4 : 나머지(2)\n");

        printf("5 : 역수(1)\n");

        printf("6 : 양수/음수(1)\n");

        printf("7 : 거듭제곱(2)\n");

        printf("8 : 거듭제곱근(2)\n");

        printf("9 : sin(1)\n");

        printf("10 : cos(1)\n");

        printf("11 : tan(1)\n");

        printf("12 : log(1)\n");

        printf("13 : 팩토리얼(1)\n");


        opCode = -1;

        while (true) {

            printf("사용할 계산입력 : "); scanf("%d", &opCode);

            if (opCode < 0 || opCode > 13)printf("숫자를 다시 입력해주세요.\n");

            else break;

        }

        if (op_1[opCode] != NULL) {



            if (useRecycle == false) {

                printf("숫자 입력 (1개) : ");

                scanf("%lf", &a);

            }
            else {

                printf("마지막 결과값 사용이므로 입력없음\n");

            }

            result = op_1[opCode](a);

        }
        else {

            if (useRecycle == false) {

                printf("숫자 입력(2개) : ");

                scanf("%lf %lf", &a, &b);

            }
            else {

                printf("마지막 결과값 사용이므로 - 숫자 입력(1개) : ");

                scanf("%lf", &b);

            }

            result = op_2[opCode](a, b);

        }

        printf("결과 : %lf\n", result);


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
