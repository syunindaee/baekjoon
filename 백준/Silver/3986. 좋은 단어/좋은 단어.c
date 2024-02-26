#include<stdio.h>

#include<string.h>

 

char Stack[100002];  //스택

char input[100002];  //문자열 입력받을 떄 쓸 배열

int top = -1;          //스택의 topindex를 -1로 초기화(스택의 제일 위에 있는 값)

int sum = 0;          //좋은단어의 합을 위한 변수

void Push(char data){

    Stack[++top] = data;  //스택 Push연산

}

 

void Pop(){

    Stack[top] = '0';  //스택 Pop연산

    top = top -1;

}

 

int main(void){

    

    

     int n;

    scanf("%d",&n); 

    for(int i = 0;i<n;i++){

     scanf("%s",input);   //n번동안 문자열을 입력받는다

        int len = strlen(input);   //문자열의 길이

        for(int q = 0;q<len;q++){   //문자열의 길이만큼 반복문 실행

            if(q == 0){           //문자열의 시작(문자열의 첫 문자일때)

                Push(input[q]);   //Push연산

            }

            else{

            if(input[q] == Stack[top]){    //스택의 꼭대기(topindex)값과 

                                                 //문자열의 문자(input[q])가 같다면 Pop연산

                Pop();

            }

            else if(input[q] !=Stack[top]){

                Push(input[q]);    //그외에는 Push연산

            }

        }

        

        

    }

        if(top == -1){     //스택이 비어있으면 좋은단어의 개수 하나 증가시킨다.

            sum = sum + 1;

        }

        top = -1; 

        for(int h = 0;h<len;h++){   //스택의 초기화

            Stack[h] = '0';    

        }

        

        

    }

    printf("%d",sum);   //좋은단어의 개수 출력

 

}